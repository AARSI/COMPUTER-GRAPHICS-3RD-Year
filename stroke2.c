

#include <string.h>
#include <GL/glut.h>
#include<Windows.h>

void *font = GLUT_STROKE_ROMAN;
char *message = "GLUT means OpenGL";
int angle = 0;

void selectFont(int newfont)
{
	switch (newfont)
	{
		case 0: font=GLUT_STROKE_ROMAN; break;
		case 1: font=GLUT_STROKE_MONO_ROMAN;break;
	}
}
void
selectMessage(int msg)
{
  switch (msg) {
  case 1:
    message = "abcdefghijklmnop";
    break;
  case 2:
    message = "ABCDEFGHIJKLMNOP";
    break;
  }
}

void
tick(void)
{
  angle -= 2;
  glutPostRedisplay();
}

void
display11(void)
{
  int len, i;

  glClear(GL_COLOR_BUFFER_BIT);
  glPushMatrix();
     glRotatef(angle, 0.0, 0.0, 1.0);
     glTranslatef(-750, 0, 0);
     len = (int) strlen(message);
     for (i = 0; i < len; i++)
	     {
  	       Sleep(20);
            glutStrokeCharacter(font, message[i]);
         }
  glPopMatrix();
  glutSwapBuffers();
}

int main(int argc, char **argv)
{
  int i, submenu;

  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
  glutInitWindowSize(600, 600);
  glutCreateWindow("anti-aliased stroke font");
  
  //matrix mode
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(0, 2000, 0, 2000);           //create the window whose centre is at 0,0 and xmax,ymax=2000
  
  //enable 
  
  glEnable(GL_LINE_SMOOTH);
  glEnable(GL_BLEND);
  glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
 
  //set display parameters
  glTranslatef(1000, 1000, 0);            //center of rotation brought to mid point 
  glLineWidth(3.0);                       // width of character
  glClearColor(0.0, 0.0, 0.0, 1.0);       //background color
  glColor3f(1.0, 0.0, 0.0);               //font color
  glutDisplayFunc(display11);
  glutIdleFunc(tick);
  
  //creating menu
  
  submenu = glutCreateMenu(selectMessage);
  glutAddMenuEntry("abc", 1);
  glutAddMenuEntry("ABC", 2);
  glutCreateMenu(selectFont);
  glutAddMenuEntry("Roman", 0);
  glutAddMenuEntry("Mono Roman", 1);
  glutAddSubMenu("Messages", submenu);
  glutAttachMenu(GLUT_RIGHT_BUTTON);
  
  
  glutMainLoop();
  return 0;             /* ANSI C requires main to return int. */
}



