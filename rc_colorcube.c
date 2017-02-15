#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>

GLfloat vertices[]={{-1.0,-1.0,-1.0},{-1.0,1.0,-1.0},{1.0,1.0,-1.0},{1.0,-1.0,-1.0},{-1.0,-1.0,1.0},{-1.0,1.0,1.0},{1.0,1.0,1.0},{1.0,-1.0,1.0}};
GLfloat colors[]={{-1.0,-1.0,-1.0},{-1.0,1.0,-1.0},{1.0,1.0,-1.0},{1.0,-1.0,-1.0},{-1.0,-1.0,1.0},{-1.0,1.0,1.0},{1.0,1.0,1.0},{1.0,-1.0,1.0}};
GLfloat theta[]={0.0,0.0,0.0};
GLint axis=2;
GLubyte cubeindices[]={0,1,2,3,4,5,6,7,4,0,3,7,5,1,2,6,0,1,5,4,3,2,6,7};

void display()
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glRotatef(theta[0],1.0,0.0,0.0);
	glRotatef(theta[1],0.0,1.0,0.0);
	glRotatef(theta[2],0.0,0.0,1.0);
	glDrawElements(GL_QUADS,24,GL_UNSIGNED_BYTE,cubeindices);
	glFlush();
	glSwapBuffers();
	
}

void spin()
{
	theta[axis]-=3.0;
	if(theta[axis]>360)
	       theta[axis]=theta[axis]-360;
	display();       
}

void mouse(int btn,int state,int x,int y)
{
	if(btn==GLUT_LEFT_BUTTON&&state==GLUT_DOWN) axis=0;
	if(btn==GLUT_MIDDLE_BUTTON&&state==GLUT_DOWN) axis=1;
	if(btn==GLUT_RIGHT_BUTTON&&state==GLUT_DOWN) axis=2;
}

void main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
	glutInitWindowSize(500,500);
	glutCreateWindow("Cube spinning");
	glutDisplayFunc(display);
	glutIdleFunc(spin);
	glutMouseFunc(mouse);
	glEnable(GL_DEPTH_TEST);
	glEnableClientState(GL_VERTEX_ARRAY);
	glEnableClientState(GL_COLOR_ARRAY);
	glVertexPinter(3,GL_FLOAT,0,vertices);
	glColorPointer(3,GL_FLOAT,0,colors);
	glClearColor(0.0,0.0,0.0,0.0);
	glutMainLoop();
	
}
