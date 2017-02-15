

#include <string.h>
#include <GL/glut.h>
#include<Windows.h>

void *font = GLUT_STROKE_ROMAN;
void *fonts[] =
{GLUT_STROKE_ROMAN, GLUT_STROKE_MONO_ROMAN};

char *message = "Welcome to OpenGL";
char *message2="hello! how are you doing?";

int angle = 0;
int angle2=0;

void selectFont(int newfont)
{
  font = fonts[newfont];
  glutPostRedisplay();
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
  angle2+=2;
  glutPostRedisplay();
}

void
display11(void)
{
  int len,len2, i,j;

  glClear(GL_COLOR_BUFFER_BIT);
  glPushMatrix();
  glRotatef(angle, 0.0, 0.0, 1.0);
  glTranslatef(-750, 0, 0);
  len = (int) strlen(message);
  for (i = 0; i < len; i++) {
  	Sleep(20);
    glutStrokeCharacter(font, message[i]);
  }
  glPopMatrix();
  
  glPushMatrix();
  glRotatef(angle2,0.0,0.0,1.0);
  glTranslatef(-750,0,0);
  len2=(int)strlen(message2);
  for(j=0;j<len2;j++)
  {
  	Sleep(20);
  	glutStrokeCharacter(font,message2[j]);
  }
  glPopMatrix();
  glutSwapBuffers();
  
  
}

int main(int argc, char **argv)
{
  int i, submenu;

  glutInit(&argc, argv);
  /*for (i = 1; i < argc; i++) {
    if (!strcmp(argv[i], "-mono")) {
      font = GLUT_STROKE_MONO_ROMAN;
    }
  }*/
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
  glutInitWindowSize(600, 600);
  glutCreateWindow("anti-aliased stroke font");
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(0, 2000, 0, 2000);
  glMatrixMode(GL_MODELVIEW);
  glEnable(GL_LINE_SMOOTH);
  glEnable(GL_BLEND);
  glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
  glLineWidth(3.0);
  glTranslatef(1000, 1000, 0);
  glClearColor(0.0, 0.0, 0.0, 1.0);
  glColor3f(1.0, 1.0, 1.0);
  glutDisplayFunc(display11);
  glutIdleFunc(tick);
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



