#include<GL/glut.h>

double xmin=50,ymin=50,xmax=100,ymax=100;
double xvmin=250,yvmin=250,xvmax=350,yvmax=350;


int ClippingTest(double p,double q,double *t1, double *t2)
{
	double t=q/p;
	if(p==0)
	    {
	    	if(q<0)  return 0;
	    }
	else if(p<0)
	    {
	    	if(t>*t1)  *t1=t;
	    	if(t>*t2)   return 0;
	    }
	else if(p>0)
	    {
	    	if(t<*t2)  *t2=t;
	    	if(t<*t1)   return 0;
	    }
	else 
	    return 1;
}




LiangBarsky(double x0,double y0,double x1,double y1)
{
	double dx,dy,ts=0,te=1;
	dx=x1-x0;
	dy=y1-y0;
	if(ClippingTest(-dx,x0-xmin,&ts,&te)!=0)
	   {
	    if(ClippingTest(dx,xmax-x0,&ts,&te)!=0)
	        {
	        if(ClippingTest(-dy,y0-ymin,&ts,&te)!=0)
	            {
	            if(ClippingTest(dy,ymax-y0,&ts,&te)!=0)
	             {
	             	if(te<1.0)
	             	{
	             		x1=x0+te*dx;
	             		y1=y0+te*dy;
	             	}
	             	if(ts>0.0)
	             	{
	             		x0=x0+ts*dx;
	             		y0=y0+ts*dy;
	             	}
	             }
	            }
	       }
	   } 
	   
	   double sx,sy;
	   sx=(xvmax-xvmin)/(xmax-xmin);
	   sy=(yvmax-yvmin)/(ymax-ymin);
	  double vx0=xvmin+(x0-xmin)*sx;
	  double vy0=yvmin+(y0-ymin)*sy;
	  double vx1=xvmin+(x1-xmin)*sx;
	  double vy1=yvmin+(y1-ymin)*sy;
	  
	  glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(xvmin,yvmin);
	glVertex2f(xvmax,yvmin);
	glVertex2f(xvmax,yvmax);
	glVertex2f(xvmin,yvmax);
	glEnd();
	
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_LINES);
	glVertex2f(vx0,vy0);
	glVertex2f(vx1,vy1);
	glEnd();
	
}



void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(xmin,ymin);
	glVertex2d(xmax,ymin);
	glVertex2d(xmax,ymax);
	glVertex2d(xmin,ymax);
	glEnd();
	
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_LINES);
	glVertex2f(60,20);
	glVertex2f(80,120);
	glEnd();
	
	LiangBarsky(60,20,80,120);
	glFlush();
	
}

void init()
{
	glClearColor(0.0,0.0,0.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,499.0,0.0,499.0);
	
}

void main(int argc,char **argv)
{
glutInit(&argc,argv);
glutInitWindowSize(500,500);
glutInitWindowPosition(0,0);
glutCreateWindow("Liang Barsky Line Clipping Alg");
init();
glutDisplayFunc(display);
glutMainLoop();
}
