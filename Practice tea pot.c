#include<stdio.h>
#include<GL/glut.h>

void wall(double thickness)
{
	glPushMatrix();
	    glTranslated(0.5,0.5*thickness,0.5);
	    glScaled(1.0,thickness,1.0);
	    glutSolidCube(1.0);
	glPopMatrix();
	
}


void tableleg(double thick, double len)
{
	 glPushMatrix();
	       glTranslated(0.0,len/2,0.0);
	       glScaled(thick,len,thick);
	      glutSolidCube(1.0);
	 glPopMatrix();
}
void table(double tabwidth,double tabthick, double legthick, double leglen)
{
	glPushMatrix();
	    glTranslated(0.0,leglen,0.0);
	    glScaled(tabwidth,tabthick,tabwidth);
	    glutSolidCube(1.0);
	glPopMatrix();
	
	float dist=(0.95*tabwidth)/2-legthick/2;
	
	glPushMatrix();
	    glTranslated(dist,0.0,dist);
		tableleg(legthick,leglen);
		 glTranslated(0.0,0.0,-2*dist);
		tableleg(legthick,leglen);
		 glTranslated(-2*dist,0.0,2*dist);
		tableleg(legthick,leglen);
		 glTranslated(0.0,0.0,-2*dist);
		tableleg(legthick,leglen);
	    
	glPopMatrix();
}

void solid_display()
{
	GLfloat lightpos[]={2.0,6.0,3.0,0.0};
	GLfloat lightint[]={0.7,0.7,0.7,1.0};
	
	glLightfv(GL_LIGHT0,GL_POSITION,lightpos);
	glLightfv(GL_LIGHT0,GL_DIFFUSE,lightint);
	
	GLfloat mat_ambient[]={0.7f,0.7f,0.7f,1.0f};
	GLfloat mat_diffuse[]={0.6,0.6,0.6,1.0};
	GLfloat mat_specular[]={1.0,1.0,1.0,1.0};
	GLfloat mat_shininess[]={50.0};
	
	glMaterialfv(GL_FRONT,GL_AMBIENT,mat_ambient);
	glMaterialfv(GL_FRONT,GL_DIFFUSE,mat_diffuse);
	glMaterialfv(GL_FRONT,GL_SPECULAR,mat_specular);
	glMaterialfv(GL_FRONT,GL_SHININESS,mat_shininess);
	
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-640.0/480.0,680.0/480.0,-1.0,1.0,0.1,100.0);
	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(2.3,1.3,2.0,0.0,0.25,0.0,0.0,1.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	
	glPushMatrix();
	    glRotated(90,0.0,0.0,1.0);
	    wall(0.02);
	glPopMatrix();
	
	    wall(0.02);
	glPushMatrix();
	    glRotated(-90,1.0,0.0,0.0);
	    wall(0.02);
	glPopMatrix();
	    
	glPushMatrix();
	      glTranslated(0.4,0.0,0.4);
	      table(0.6,0.02,0.02,0.3);
	      
	glPopMatrix();
	
	glPushMatrix();
	      glTranslatef(0.6,0.4,0.5);
	      glRotated(30,0.0,1.0,0.0);
	      glutSolidTeapot(0.08);
	      
	glPopMatrix();
	
	
	glFlush();
	
}

void main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE|GLUT_DEPTH);
	glutInitWindowSize(600,600);
	glutCreateWindow("teapot");
	
	glutDisplayFunc(solid_display);
	
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glShadeModel(GL_SMOOTH);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_NORMALIZE);
	
	glClearColor(1.0,1.0,1.0,0.0);
	glViewport(0,0,640,480);
	glutMainLoop();
	
	
}


