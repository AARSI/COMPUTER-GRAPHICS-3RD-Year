#include<GL/glut.h>

void edgedetect(float x1,float y1,float x2,float y2,int *le,int *re)
{
	int m,x,temp,i;
	if((y2-y1)<0)
	{
		temp=y1; y1=y2;y2=temp;
		temp=x1;x1=x2;x2=temp;
	}
	
	if((y2-y1)!=0)
	      m=(x2-x1)/(y2-y1);
	else
	      m=x2-x1;
	x=x1;
	
	  for(i=y1;i<=y2;i++)
	    {
	    	if(x<(float)le[i])
	    	    le[i]=x;
	    	if(x>(float)re[i])
	    	    re[i]=x;
	    	    
	    	x+=m;
	    }
}

void plot_pixel(int i, int k)
{    
	glColor3f(0.7,0.2,0.4);
//	Sleep(100);
	glBegin(GL_POINTS);
	glVertex2i(i,k);
	glEnd();
	
}

void PolygonFilling(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4 )
{
	int le[500],re[500],i,y;
	for(i=0;i<500;i++)
	{
		le[i]=500;  re[i]=0;
	}
	edgedetect(x1,y1,x2,y2,le,re);
	edgedetect(x2,y2,x3,y3,le,re);
	edgedetect(x3,y3,x4,y4,le,re);
	edgedetect(x4,y4,x1,y1,le,re);
	
	for(y=0;y<500;y++)
	{
		if(le[y]<=re[y])
		for(i=(int)le[y]; i<(int)re[y];i++)
		   plot_pixel(i,y);
	}
	
	
	
}



void display()
{
	float x1=200,y1=200,x2=100,y2=300,x3=200,y3=400,x4=300,y4=300;
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(1.0);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(x1,y1);
	glVertex2f(x2,y2);
	glVertex2f(x3,y3);
	glVertex2f(x4,y4);
	glEnd();
	
	PolygonFilling(x1,y1,x2,y2,x3,y3,x4,y4);
	
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(x1,y1);
	glVertex2f(x2,y2);
	glEnd();
	
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(x2,y2);
	glVertex2f(x3,y3);
	glEnd();
	
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
glutCreateWindow("polyfilling");
init();
glutDisplayFunc(display);
glutMainLoop();
}
