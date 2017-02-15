#include<GL/glut.h>
#include<stdio.h>
#include<stdbool.h>
//#define true=1
//#define false=0
#define  outcode int

//outcode computeoutcode(double,double);
//void CohenSutherland(float x0,float y0,float x1,float y1);



double xmin=50,ymin=50, xmax=100,ymax=100; // Window boundaries
double xvmin=200,yvmin=200,xvmax=300,yvmax=300;

float x0,y0,x1,y1;

const int TOP=8;
const int BOTTOM=4;
const int RIGHT=2;
const int LEFT=1;

outcode computeoutcode(double x,double y)
{
	outcode code=0;
	if(y>ymax)
	     code=TOP;
	else if(y<ymin)
	     code=BOTTOM;
    if(x>xmax)
         code=RIGHT;
    else if(x<xmin)
         code=LEFT;
         
  return code;
}


void CohenSutherland(float x0,float y0,float x1,float y1)
{
	outcode outcodeOut,outcode0,outcode1;
	outcode0=computeoutcode(x0,y0);
	outcode1=computeoutcode(x1,y1);
     
     bool accept=0,done=0;
     
     do{
     	if(!(outcode0|outcode1))
     	{
     		accept=1;                //both ends are inside
     		done=1;
     	}
     	else if(outcode0&outcode1)
     	{
     		done=1;                  //both ends are out
     	}
     	else
     	{
     		if(outcode0!=0000)
     		     outcodeOut=outcode0;
     		else
     		     outcodeOut=outcode1;
     		 double m,x,y; 
     		 m=(y1-y0)/(x1-x0);
     		
     		
     		if(outcodeOut&TOP)
     		{
     			x=x0+(ymax-y0)/m;
     			y=ymax;
     		}
     		else if(outcodeOut&BOTTOM)
     		{
     			x=x0+(ymin-y0)/m;
     			y=ymin;
     		}
     		else if(outcodeOut&RIGHT)
     		{
     			x=xmax;
     			y=y0+(xmax-x0)*m;;
     		}
     		else 
     		{
     			x=xmin;
     			y=y0+(xmin-x0)*m;;
     		}
     		
     		if(outcodeOut==outcode0)
     		{
     			x0=x;y0=y;
     			outcode0=computeoutcode(x0,y0);
     			
     		}
     		else
     			{
     			x1=x;y1=y;
     			outcode1=computeoutcode(x1,y1);
     			
     		}
     		
     	}
     }while(!done);
     
     
     if(accept)
     {
     	double sx=(xvmax-xvmin)/(xmax-xmin);
     	double sy=(yvmax-yvmin)/(ymax-ymin);
     	
     	double xv0=xvmin+(x0-xmin)*sx;
     	double yv0=yvmin+(y0-xmin)*sy;
     	double xv1=xvmin+(x1-xmin)*sx;
     	double yv1=yvmin+(y1-xmin)*sy;
     	
     	glColor3f(1.0,0.0,0.0);
     	glBegin(GL_LINE_LOOP);
     	glVertex2f(xvmin,yvmin);
     	glVertex2f(xvmax,yvmin);
	    glVertex2f(xvmax,yvmax);
		glVertex2f(xvmin,yvmax);
		glEnd();
		
		glColor3f(0.0,0.0,1.0);
		glBegin(GL_LINES);
		glVertex2f(xv0,yv0);
		glVertex2f(xv1,yv1);
		glEnd();
     }
	
}





void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.0,0.0,0.0,0.0);
	
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(xmin,ymin);
	glVertex2f(xmax,ymin);
	glVertex2f(xmax,ymax);
	glVertex2f(xmin,ymax);
	glEnd();
	
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_LINES);
	glVertex2f(60,20);
	glVertex2f(80,120);
	glEnd();
	
	CohenSutherland(60,20,80,120);
	
	glFlush();
	
	
}





void init()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,499.0,0.0,499.0);
}


void main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(500,500);
	glutCreateWindow("cohensutherland");
	glutDisplayFunc(display);
	init();
	glutMainLoop();
}

