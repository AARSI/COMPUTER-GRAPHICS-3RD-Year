#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<math.h>
#include<windows.h>
//#include<gl.h>
int flag=0,ch=0,ch1=0;
float a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,p=0,q=0,s=0.7,x=0,y=0;
void create_menu(void);
void menu(int);
void disp1(void);
void disp2(void);
void disp3(void);
void disp4(void);

void delay(int time)
{
	float i,j,k;

	for(i=0;i<time;i=i+0.001);
	for(j=0;j<time;j=j+0.001);
	for(k=0;k<time;k=k+0.001);
}


void fish1()
{
 glColor3f(1.0,0.0,0.0);//red fish
  glBegin(GL_POLYGON);
   glVertex2f(0.7+a,0.05);

   glVertex2f(0.75+a,0.1);
  
   glVertex2f(0.85+a,0.05);
   glVertex2f(0.75+a,0.0);
  glEnd();
  

  glBegin(GL_TRIANGLES);
  glColor3f(1.0,0.0,0.0);
    glVertex2f(0.83+a,0.05);
   glColor3f(1.0,1.0,0.0);
   glVertex2f(0.9+a,0.09);
   glVertex2f(0.9+a,0.01);
  glEnd();

  glBegin(GL_TRIANGLES);
  glColor3f(1.0,1.0,0.0);
    glVertex2f(0.75+a,0.095);
glColor3f(1.0,0.0,0.0);
	glVertex2f(0.79+a,0.125);
	glVertex2f(0.77+a,0.07);
  glEnd();

glBegin(GL_TRIANGLES);
glColor3f(1.0,1.0,0.0);
    glVertex2f(0.75+a,0.007);
glColor3f(1.0,0.0,0.0);
	glVertex2f(0.795+a,-0.035);
	glVertex2f(0.77+a,0.02);
  glEnd();


  glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(0.73+a,0.065);
  glEnd();
 
}

void fish11()
{

glColor3f(1.0,0.0,0.0);//red fish
  glBegin(GL_POLYGON);
   glVertex2f(-0.7,0.05);
   glVertex2f(-0.75,0.1);
   glVertex2f(-0.85,0.05);
   glVertex2f(-0.75,0.0);
  glEnd();
  

  glBegin(GL_TRIANGLES);
   glVertex2f(-0.83,0.05);
   glVertex2f(-0.9,0.09);
   glVertex2f(-0.9,0.01);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex2f(-0.75,0.095);
	glVertex2f(-0.79,0.125);
	glVertex2f(-0.77,0.07);
  glEnd();

glBegin(GL_TRIANGLES);
    glVertex2f(-0.75,0.007);
	glVertex2f(-0.795,-0.035);
	glVertex2f(-0.77,0.02);
  glEnd();


  glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(-0.73,0.065);
  glEnd();
}



void fish2()
{
 glColor3f(1.0,1.0,0.0);//yellow fish
  glBegin(GL_POLYGON);
   glVertex2f(-0.7-b,-0.05);
   glVertex2f(-0.75-b,-0.1);
   glVertex2f(-0.85-b,-0.05);
   glVertex2f(-0.75-b,0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
  glColor3f(0.8,0.5,0.0); 
  glVertex2f(-0.83-b,-0.05);
   glVertex2f(-0.9-b,-0.09);
   glVertex2f(-0.9-b,-0.01);
  glEnd();

  glBegin(GL_TRIANGLES);
  glColor3f(0.8,0.5,0.0);
  glVertex2f(-0.75-b,-0.095);
	glVertex2f(-0.79-b,-0.125);
	glVertex2f(-0.77-b,-0.07);
  glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.8,0.5,0.0);
    glVertex2f(-0.75-b,-0.007);
	glVertex2f(-0.795-b,0.035);
	glVertex2f(-0.77-b,-0.02);
  glEnd();

 glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(-0.73-b,-0.035);
  glEnd();
}


void fish21()
{
 glColor3f(1.0,1.0,0.0);//yellow fish
  glBegin(GL_POLYGON);
   glVertex2f(-0.7+y,-0.05);
   glVertex2f(-0.75+y,-0.1);
   glVertex2f(-0.85+y,-0.05);
   glVertex2f(-0.75+y,0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
  glColor3f(0.8,0.5,0.0); 
  glVertex2f(-0.83+y,-0.05);
   glVertex2f(-0.9+y,-0.09);
   glVertex2f(-0.9+y,-0.01);
  glEnd();

  glBegin(GL_TRIANGLES);
  glColor3f(0.8,0.5,0.0);
  glVertex2f(-0.75+y,-0.095);
	glVertex2f(-0.79+y,-0.125);
	glVertex2f(-0.77+y,-0.07);
  glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.8,0.5,0.0);
    glVertex2f(-0.75+y,-0.007);
	glVertex2f(-0.795+y,0.035);
	glVertex2f(-0.77+y,-0.02);
  glEnd();

 glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(-0.73+y,-0.035);
  glEnd();
}


void fish22()
{
 glColor3f(1.0,1.0,0.0);//yellow fish
  glBegin(GL_POLYGON);
   glVertex2f(0.7,-0.05);
   glVertex2f(0.75,-0.1);
   glVertex2f(0.85,-0.05);
   glVertex2f(0.75,0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
glVertex2f(0.83,-0.05);
glColor3f(1.8,0.5,0.0); 
glVertex2f(0.9,-0.09);
   glVertex2f(0.9,-0.01);
  glEnd();

  glBegin(GL_TRIANGLES);
  glColor3f(1.0,1.0,0.0);
  glVertex2f(0.79,-0.125);
  glVertex2f(0.77,-0.07);
  
  glVertex2f(0.75,-0.095);
	
  glEnd();

glBegin(GL_TRIANGLES);
	glVertex2f(0.795,0.035);
	glVertex2f(0.77,-0.02);

    glVertex2f(0.75,-0.007);

  glEnd();

 glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(0.73,-0.035);
  glEnd();
}


void fish3()
{  
 glColor3f(0.0,1.0,0.0);//green fish
  glBegin(GL_POLYGON);
   glVertex2f(0.8,0.15);
   glVertex2f(0.85,0.2);
   glVertex2f(0.95,0.15);
   glVertex2f(0.85,0.10);
  glEnd();

  glBegin(GL_TRIANGLES);
   glVertex2f(0.93,0.15);
   glVertex2f(0.98,0.19);
   glVertex2f(0.98,0.11);
  glEnd();


  glBegin(GL_TRIANGLES);
    glVertex2f(0.855,0.2);
	glVertex2f(0.925,0.25);
	glVertex2f(0.87,0.15);
  glEnd();

 glBegin(GL_TRIANGLES);
    glVertex2f(0.857,0.1);
	glVertex2f(0.925,0.05);
	glVertex2f(0.87,0.15);
  glEnd();

  glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(0.83,0.165);
  glEnd();

}

void fish333()
{ 
	glColor3f(0.0,1.0,0.0);//green fish
  glBegin(GL_POLYGON);
   glVertex2f(-0.8+x,0.15);
   glVertex2f(-0.85+x,0.2);
   glVertex2f(-0.95+x,0.15);
   glVertex2f(-0.85+x,0.10);
  glEnd();

  glBegin(GL_TRIANGLES);
   glVertex2f(-0.93+x,0.15);
   glVertex2f(-0.98+x,0.19);
   glVertex2f(-0.98+x,0.11);
  glEnd();


  glBegin(GL_TRIANGLES);
    glVertex2f(-0.855+x,0.2);
	glVertex2f(-0.925+x,0.25);
	glVertex2f(-0.87+x,0.15);
  glEnd();

 glBegin(GL_TRIANGLES);
    glVertex2f(-0.857+x,0.1);
	glVertex2f(-0.925+x,0.05);
	glVertex2f(-0.87+x,0.15);
  glEnd();

  glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(-0.83+x,0.165);
  glEnd();

 
}



void fish33()
{  
 glColor3f(0.0,1.0,0.0);//green fish
  glBegin(GL_POLYGON);
   glVertex2f(-0.8,0.15);
   glVertex2f(-0.85,0.2);
   glVertex2f(-0.95,0.15);
   glVertex2f(-0.85,0.10);
  glEnd();

  glBegin(GL_TRIANGLES);
   glVertex2f(-0.93,0.15);
   glVertex2f(-0.98,0.19);
   glVertex2f(-0.98,0.11);
  glEnd();


  glBegin(GL_TRIANGLES);
    glVertex2f(-0.855,0.2);
	glVertex2f(-0.925,0.25);
	glVertex2f(-0.87,0.15);
  glEnd();

 glBegin(GL_TRIANGLES);
    glVertex2f(-0.857,0.1);
	glVertex2f(-0.925,0.05);
	glVertex2f(-0.87,0.15);
  glEnd();

  glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(-0.83,0.165);
  glEnd();

}



void fish4()
{
	glColor3f(0.5,0.6,0.0);// green1 fish
  glBegin(GL_POLYGON);
   glVertex2f(-0.7+d,-0.15);
   glVertex2f(-0.75+d,-0.2);
   glVertex2f(-0.85+d,-0.15);
   glVertex2f(-0.75+d,-0.1);
  glEnd();

  glBegin(GL_TRIANGLES);
   glVertex2f(-0.83+d,-0.15);
   glVertex2f(-0.9+d,-0.19);
   glVertex2f(-0.9+d,-0.11);
  glEnd();

  
  glBegin(GL_TRIANGLES);
    glVertex2f(-0.755+d,-0.2);
	glVertex2f(-0.795+d,-0.25);
	glVertex2f(-0.775+d,-0.15);
  glEnd();

 glBegin(GL_TRIANGLES);
    glVertex2f(-0.755+d,-0.1);
	glVertex2f(-0.795+d,-0.05);
	glVertex2f(-0.775+d,-0.15);
  glEnd();

  glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(-0.73+d,-0.135);
  glEnd();
} 


void fish44()
{
	glColor3f(0.5,0.6,0.0);// green1 fish
  glBegin(GL_POLYGON);
   glVertex2f(0.7,-0.15);
   glVertex2f(0.75,-0.2);
   glVertex2f(0.85,-0.15);
   glVertex2f(0.75,-0.1);
  glEnd();

  glBegin(GL_TRIANGLES);
   glVertex2f(0.83,-0.15);
   glVertex2f(0.9,-0.19);
   glVertex2f(0.9,-0.11);
  glEnd();

  
  glBegin(GL_TRIANGLES);
    glVertex2f(0.755,-0.2);
	glVertex2f(0.795,-0.25);
	glVertex2f(0.775,-0.15);
  glEnd();

 glBegin(GL_TRIANGLES);
    glVertex2f(0.755,-0.1);
	glVertex2f(0.795,-0.05);
	glVertex2f(0.775,-0.15);
  glEnd();

  glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(0.73,-0.135);
  glEnd();
} 



void fish5()
{
 glColor3f(0.0,0.0,1.0);//blue fish
  glBegin(GL_POLYGON);
   glVertex2f(-0.7-e,-0.25);
   glVertex2f(-0.75-e,-0.3);
   glVertex2f(-0.775-e,-0.3);
   glVertex2f(-0.85-e,-0.25);
   glVertex2f(-0.775-e,-0.2);
   glVertex2f(-0.75-e,-0.2);
  glEnd();

  glBegin(GL_TRIANGLES);
   glVertex2f(-0.83-e,-0.25);
   glVertex2f(-0.9-e,-0.29);
   glVertex2f(-0.9-e,-0.21);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex2f(-0.775-e,-0.2);
	glVertex2f(-0.79-e,-0.125);
	glVertex2f(-0.75-e,-0.2);
  glEnd();

 glBegin(GL_TRIANGLES);
    glVertex2f(-0.75-e,-0.3);
	glVertex2f(-0.795-e,-0.35);
	glVertex2f(-0.775-e,-0.3);
  glEnd();

  glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(-0.73-e,-0.235);
  glEnd();
}



void fish55()
{
 glColor3f(0.0,0.0,1.0);//blue fish
  glBegin(GL_POLYGON);
   glVertex2f(0.7,-0.25);
   glVertex2f(0.75,-0.3);
   glVertex2f(0.775,-0.3);
   glVertex2f(0.85,-0.25);
   glVertex2f(0.775,-0.2);
   glVertex2f(0.75,-0.2);
  glEnd();

  glBegin(GL_TRIANGLES);
   glVertex2f(0.83,-0.25);
   glVertex2f(0.9,-0.29);
   glVertex2f(0.9,-0.21);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex2f(0.775,-0.2);
	glVertex2f(0.79,-0.125);
	glVertex2f(0.75,-0.2);
  glEnd();

 glBegin(GL_TRIANGLES);
    glVertex2f(0.75,-0.3);
	glVertex2f(0.795,-0.35);
	glVertex2f(0.775,-0.3);
  glEnd();

  glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(0.73,-0.235);
  glEnd();

}
void fish6()
{
glColor3f(1.0,0.0,0.0);//red1 fish
  glBegin(GL_POLYGON);
   glVertex2f(0.7+f,0.25);
   glVertex2f(0.75+f,0.3);
   glVertex2f(0.775+f,0.3);
   glVertex2f(0.85+f,0.25);
   glVertex2f(0.775+f,0.2);
   glVertex2f(0.75+f,0.2);
  glEnd();

  glBegin(GL_TRIANGLES);
   glVertex2f(0.83+f,0.25);
   glVertex2f(0.9+f,0.29);
   glVertex2f(0.9+f,0.21);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex2f(0.775+f,0.3);
	glVertex2f(0.79+f,0.4);
	glVertex2f(0.75+f,0.3);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex2f(0.775+f,0.2);
	glVertex2f(0.79+f,0.1);
	glVertex2f(0.75+f,0.2);
  glEnd();

  glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(0.73+f,0.265);
  glEnd();

}

void fish555()
{if(q==0.75){
glColor3f(0.0,0.0,1.0);//blue fish
  glBegin(GL_POLYGON);
   glVertex2f(0.2,0.55);
   glVertex2f(0.25,0.6);
   glVertex2f(0.275,0.6);
   glVertex2f(0.35,0.55);
   glVertex2f(0.275,0.5);
   glVertex2f(0.25,0.5);
  glEnd();

  glBegin(GL_TRIANGLES);
   glVertex2f(0.23,0.55);
   glVertex2f(0.35,0.59);
   glVertex2f(0.35,0.51);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex2f(0.275,0.6);
	glVertex2f(0.29,0.7);
	glVertex2f(0.25,0.6);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex2f(0.275,0.5);
	glVertex2f(0.29,0.4);
	glVertex2f(0.25,0.5);
  glEnd();

  glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(0.23,0.565);
  glEnd();
}
}

void plant()
{ 
  glColor3f(0.0,1.0,0.0);
   glLineWidth(4.0);
   glBegin(GL_LINES);
	glVertex2f(0.9,-0.8);
	glVertex2f(0.8,-0.9);
	glVertex2f(0.8,-0.8);
	glVertex2f(0.8,-0.9);
	glVertex2f(0.7,-0.8);
	glVertex2f(0.8,-0.9);
	glVertex2f(0.75,-0.8);
	glVertex2f(0.8,-0.9);
	glVertex2f(0.85,-0.8);
	glVertex2f(0.8,-0.9);
    glVertex2f(0.725,-0.8);
	glVertex2f(0.8,-0.9);
    glVertex2f(0.775,-0.8);
	glVertex2f(0.8,-0.9);
    glVertex2f(0.825,-0.8);
	glVertex2f(0.8,-0.9);
    glVertex2f(0.875,-0.8);
	glVertex2f(0.8,-0.9);
   glEnd();


   glLineWidth(4.0);
   glBegin(GL_LINES);
	glVertex2f(0.5,-0.95);
	glVertex2f(0.6,-0.85);
	glVertex2f(0.5,-0.85);
	glVertex2f(0.5,-0.95);
	glVertex2f(0.4,-0.85);
	glVertex2f(0.5,-0.95);
	glVertex2f(0.45,-0.85);
	glVertex2f(0.5,-0.95);
	glVertex2f(0.55,-0.85);
	glVertex2f(0.5,-0.95);
    glVertex2f(0.425,-0.85);
	glVertex2f(0.5,-0.95);
    glVertex2f(0.475,-0.85);
	glVertex2f(0.5,-0.95);
    glVertex2f(0.525,-0.85);
	glVertex2f(0.5,-0.95);
    glVertex2f(0.575,-0.85);
	glVertex2f(0.5,-0.95);
   glEnd();



   glLineWidth(4.0);
   glBegin(GL_LINES);
	glVertex2f(0.175,-0.9);
	glVertex2f(0.275,-0.8);
	glVertex2f(0.175,-0.8);
	glVertex2f(0.175,-0.9);
	glVertex2f(0.075,-0.8);
	glVertex2f(0.175,-0.9);
	glVertex2f(0.125,-0.8);
	glVertex2f(0.175,-0.9);
	glVertex2f(0.225,-0.8);
	glVertex2f(0.175,-0.9);
    glVertex2f(0.1,-0.8);
	glVertex2f(0.175,-0.9);
    glVertex2f(0.15,-0.8);
	glVertex2f(0.175,-0.9);
    glVertex2f(0.2,-0.8);
	glVertex2f(0.175,-0.9);
    glVertex2f(0.25,-0.8);
	glVertex2f(0.175,-0.9);
   glEnd();
	


   glLineWidth(4.0);
   glBegin(GL_LINES);
	glVertex2f(-0.175,-0.95);
	glVertex2f(-0.275,-0.85);
	glVertex2f(-0.175,-0.85);
	glVertex2f(-0.175,-0.95);
	glVertex2f(-0.075,-0.85);
	glVertex2f(-0.175,-0.95);
	glVertex2f(-0.125,-0.85);
	glVertex2f(-0.175,-0.95);
	glVertex2f(-0.225,-0.85);
	glVertex2f(-0.175,-0.95);
    glVertex2f(-0.1,-0.85);
	glVertex2f(-0.175,-0.95);
    glVertex2f(-0.15,-0.85);
 	glVertex2f(-0.175,-0.95);
    glVertex2f(-0.2,-0.85);
	glVertex2f(-0.175,-0.95);
    glVertex2f(-0.25,-0.85);
	glVertex2f(-0.175,-0.95);
   glEnd();

   glLineWidth(4.0);
   glBegin(GL_LINES);
	glVertex2f(-0.475,-0.9);
	glVertex2f(-0.575,-0.8);
	glVertex2f(-0.475,-0.9);
	glVertex2f(-0.475,-0.8);
	glVertex2f(-0.375,-0.8);
	glVertex2f(-0.475,-0.9);
	glVertex2f(-0.425,-0.8);
	glVertex2f(-0.475,-0.9);
	glVertex2f(-0.525,-0.8);
	glVertex2f(-0.475,-0.9);
    glVertex2f(-0.4,-0.8);
	glVertex2f(-0.475,-0.9);
    glVertex2f(-0.45,-0.8);
	glVertex2f(-0.475,-0.9);
    glVertex2f(-0.5,-0.8);
	glVertex2f(-0.475,-0.9);
    glVertex2f(-0.55,-0.8);
	glVertex2f(-0.475,-0.9);
   glEnd();
	


   glLineWidth(4.0);
   glBegin(GL_LINES);
	glVertex2f(-0.9,-0.85);
	glVertex2f(-0.8,-0.95);
	glVertex2f(-0.8,-0.85);
	glVertex2f(-0.8,-0.95);
	glVertex2f(-0.7,-0.85);
	glVertex2f(-0.8,-0.95);
	glVertex2f(-0.75,-0.85);
	glVertex2f(-0.8,-0.95);
	glVertex2f(-0.85,-0.85);
	glVertex2f(-0.8,-0.95);
    glVertex2f(-0.725,-0.85);
	glVertex2f(-0.8,-0.95);
    glVertex2f(-0.775,-0.85);
	glVertex2f(-0.8,-0.95);
    glVertex2f(-0.825,-0.85);
	glVertex2f(-0.8,-0.95);
    glVertex2f(-0.875,-0.85);
	glVertex2f(-0.8,-0.95);
   glEnd();

}


void pebbles()
{
	glColor3f(0.5,0.35,0.05);
	glBegin(GL_POLYGON);
	glVertex2f(0.9,-0.9);
	glVertex2f(0.9125,-0.9);
	glVertex2f(0.925,-0.8875);
	glVertex2f(0.925,-0.875);
	glVertex2f(0.9125,-0.8625);
	glVertex2f(0.9,-0.8625);
	glVertex2f(0.8875,-0.8875);
	glVertex2f(0.8875,-0.875);
	glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(0,-0.95);
	glVertex2f(0.0125,-0.95);
	glVertex2f(0.025,-0.9375);
	glVertex2f(0.025,-0.925);
	glVertex2f(0.0125,-0.9125);
	glVertex2f(0,-0.9125);
	glVertex2f(-0.0125,-0.9375);
	glVertex2f(-0.0125,-0.925);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(0.0125,-0.975);
	glVertex2f(0.025,-0.975);
	glVertex2f(0.0375,-0.9625);
	glVertex2f(0.0375,-0.95);
	glVertex2f(0.025,-0.9375);
	glVertex2f(0.0125,-0.9375);
	glVertex2f(0,-0.9625);
	glVertex2f(0,-0.95);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(0.025,-0.95);
	glVertex2f(0.0375,-0.95);
	glVertex2f(0.05,-0.9375);
	glVertex2f(0.05,-0.925);
	glVertex2f(0.0375,-0.9125);
	glVertex2f(0.025,-0.9125);
	glVertex2f(0.0125,-0.9375);
	glVertex2f(0.0125,-0.925);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(0.65,-0.95);
	glVertex2f(0.6625,-0.95);
	glVertex2f(0.675,-0.9375);
	glVertex2f(0.675,-0.925);
	glVertex2f(0.6625,-0.9125);
	glVertex2f(0.65,-0.9125);
	glVertex2f(0.6375,-0.9375);
	glVertex2f(0.6375,-0.925);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(0.675,-0.95);
	glVertex2f(0.6875,-0.95);
	glVertex2f(0.7,-0.9375);
	glVertex2f(0.7,-0.925);
	glVertex2f(0.6875,-0.9125);
	glVertex2f(0.675,-0.9125);
	glVertex2f(0.6625,-0.9375);
	glVertex2f(0.6625,-0.925);
	glEnd();

	
	glBegin(GL_POLYGON);
	glVertex2f(0.6625,-0.985);
	glVertex2f(0.675,-0.985);
	glVertex2f(0.6875,-0.9725);
	glVertex2f(0.6875,-0.96);
	glVertex2f(0.675,-0.9475);
	glVertex2f(0.6625,-0.9475);
	glVertex2f(0.65,-0.9525);
	glVertex2f(0.65,-0.96);
	glEnd();



	glBegin(GL_POLYGON);
	glVertex2f(0.6875,-0.985);
	glVertex2f(0.7,-0.985);
	glVertex2f(0.7125,-0.9725);
	glVertex2f(0.7125,-0.96);
	glVertex2f(0.7,-0.9475);
	glVertex2f(0.6875,-0.9475);
	glVertex2f(0.675,-0.9475);
	glVertex2f(0.675,-0.96);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(0.6375,-0.985);
	glVertex2f(0.65,-0.985);
	glVertex2f(0.6625,-0.9725);
	glVertex2f(0.6625,-0.96);
	glVertex2f(0.65,-0.9475);
	glVertex2f(0.6375,-0.9475);
	glVertex2f(0.625,-0.9475);
	glVertex2f(0.625,-0.96);
	glEnd();



	glBegin(GL_POLYGON);
	glVertex2f(0.25,-0.95);
	glVertex2f(0.2625,-0.95);
	glVertex2f(0.275,-0.9375);
	glVertex2f(0.275,-0.925);
	glVertex2f(0.2625,-0.9125);
	glVertex2f(0.25,-0.9125);
	glVertex2f(0.2375,-0.9375);
	glVertex2f(0.2375,-0.925);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(0.275,-0.95);
	glVertex2f(0.2875,-0.95);
	glVertex2f(0.3,-0.9375);
	glVertex2f(0.3,-0.925);
	glVertex2f(0.2875,-0.9125);
	glVertex2f(0.275,-0.9125);
	glVertex2f(0.2625,-0.9375);
	glVertex2f(0.2625,-0.925);
	glEnd();

	
	glBegin(GL_POLYGON);
	glVertex2f(0.2625,-0.985);
	glVertex2f(0.275,-0.985);
	glVertex2f(0.2875,-0.9725);
	glVertex2f(0.2875,-0.96);
	glVertex2f(0.275,-0.9475);
	glVertex2f(0.2625,-0.9475);
	glVertex2f(0.25,-0.9525);
	glVertex2f(0.25,-0.96);
	glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(0.2875,-0.985);
	glVertex2f(0.3,-0.985);
	glVertex2f(0.3125,-0.9725);
	glVertex2f(0.3125,-0.96);
	glVertex2f(0.3,-0.9475);
	glVertex2f(0.2825,-0.9475);
	glVertex2f(0.275,-0.9525);
	glVertex2f(0.275,-0.96);
	glEnd();



	glBegin(GL_POLYGON);
	glVertex2f(-0.35,-0.95);
	glVertex2f(-0.3625,-0.95);
	glVertex2f(-0.375,-0.9375);
	glVertex2f(-0.375,-0.925);
	glVertex2f(-0.3625,-0.9125);
	glVertex2f(-0.35,-0.9125);
	glVertex2f(-0.3375,-0.9375);
	glVertex2f(-0.3375,-0.925);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(-0.375,-0.95);
	glVertex2f(-0.3875,-0.95);
	glVertex2f(-0.4,-0.9375);
	glVertex2f(-0.4,-0.925);
	glVertex2f(-0.3875,-0.9125);
	glVertex2f(-0.375,-0.9125);
	glVertex2f(-0.3625,-0.9375);
	glVertex2f(-0.3625,-0.925);
	glEnd();

	
	glBegin(GL_POLYGON);
	glVertex2f(-0.3625,-0.985);
	glVertex2f(-0.375,-0.985);
	glVertex2f(-0.3875,-0.9725);
	glVertex2f(-0.3875,-0.96);
	glVertex2f(-0.375,-0.9475);
	glVertex2f(-0.3625,-0.9475);
	glVertex2f(-0.35,-0.9525);
	glVertex2f(-0.35,-0.96);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-0.3875,-0.985);
	glVertex2f(-0.4,-0.985);
	glVertex2f(-0.4125,-0.9725);
	glVertex2f(-0.4125,-0.96);
	glVertex2f(-0.4,-0.9475);
	glVertex2f(-0.3825,-0.9475);
	glVertex2f(-0.375,-0.9525);
	glVertex2f(-0.375,-0.96);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-0.3375,-0.985);
	glVertex2f(-0.35,-0.985);
	glVertex2f(-0.3625,-0.9725);
	glVertex2f(-0.3625,-0.96);
	glVertex2f(-0.35,-0.9475);
	glVertex2f(-0.3375,-0.9475);
	glVertex2f(-0.325,-0.9525);
	glVertex2f(-0.325,-0.96);
	glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(-0.65,-0.95);
	glVertex2f(-0.6625,-0.95);
	glVertex2f(-0.675,-0.9375);
	glVertex2f(-0.675,-0.925);
	glVertex2f(-0.6625,-0.9125);
	glVertex2f(-0.65,-0.9125);
	glVertex2f(-0.6375,-0.9375);
	glVertex2f(-0.6375,-0.925);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(-0.675,-0.95);
	glVertex2f(-0.6875,-0.95);
	glVertex2f(-0.7,-0.9375);
	glVertex2f(-0.7,-0.925);
	glVertex2f(-0.6875,-0.9125);
	glVertex2f(-0.675,-0.9125);
	glVertex2f(-0.6625,-0.9375);
	glVertex2f(-0.6625,-0.925);
	glEnd();

	
	glBegin(GL_POLYGON);
	glVertex2f(-0.6625,-0.985);
	glVertex2f(-0.675,-0.985);
	glVertex2f(-0.6875,-0.9725);
	glVertex2f(-0.6875,-0.96);
	glVertex2f(-0.675,-0.9475);
	glVertex2f(-0.6625,-0.9475);
	glVertex2f(-0.65,-0.9525);
	glVertex2f(-0.65,-0.96);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-0.9,-0.9);
	glVertex2f(-0.9125,-0.9);
	glVertex2f(-0.925,-0.8875);
	glVertex2f(-0.925,-0.875);
	glVertex2f(-0.9125,-0.8625);
	glVertex2f(-0.9,-0.8625);
	glVertex2f(-0.8875,-0.8875);
	glVertex2f(-0.8875,-0.875);
	glEnd();


    glBegin(GL_POLYGON);
	glVertex2f(0.9,-0.95);
	glVertex2f(0.9125,-0.95);
	glVertex2f(0.925,-0.9375);
	glVertex2f(0.925,-0.925);
	glVertex2f(0.9125,-0.9125);
	glVertex2f(0.9,-0.9125);
	glVertex2f(0.8875,-0.9375);
	glVertex2f(0.8875,-0.925);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(0.925,-0.95);
	glVertex2f(0.9375,-0.95);
	glVertex2f(0.95,-0.9375);
	glVertex2f(0.95,-0.925);
	glVertex2f(0.9375,-0.9125);
	glVertex2f(0.925,-0.9125);
	glVertex2f(0.9125,-0.9375);
	glVertex2f(0.9125,-0.925);
	glEnd();


    glBegin(GL_POLYGON);
	glVertex2f(-0.9,-0.95);
	glVertex2f(-0.9125,-0.95);
	glVertex2f(-0.925,-0.9375);
	glVertex2f(-0.925,-0.925);
	glVertex2f(-0.9125,-0.9125);
	glVertex2f(-0.9,-0.9125);
	glVertex2f(-0.8875,-0.9375);
	glVertex2f(-0.8875,-0.925);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(-0.925,-0.95);
	glVertex2f(-0.9375,-0.95);
	glVertex2f(-0.95,-0.9375);
	glVertex2f(-0.95,-0.925);
	glVertex2f(-0.9375,-0.9125);
	glVertex2f(-0.925,-0.9125);
	glVertex2f(-0.9125,-0.9375);
	glVertex2f(-0.9125,-0.925);
	glEnd();
}		


void food()
{
	glColor3f(0.5,0.9,0.3);
	glPointSize(8);
	glBegin(GL_POINTS);
	glVertex2f(-0.65,0.5);
	glEnd();
	
}

	
void food_mul()
{
	glColor3f(1.0,0.0,1.0);
	glPointSize(8);
	glBegin(GL_POINTS);
	glVertex2f(0.235,0.4);
	glEnd();	
}
	

void poisonfood()
{
	glColor3f(1.0,0.0,0.0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2f(0.48,0.66);
	glEnd();	
}


/*void sand()
{
 glColor3f(1.0,1.0,0.7);
 glBegin(GL_POLYGON);
 glVertex2f(-1.0,-1.0);
 glVertex2f(-1.0,-0.849);
 glVertex2f(1.0,-0.849);
 glVertex2f(1.0,-1.0);
 glEnd();
 glFlush();
}*/

void draw_pixel(GLint cx,GLint cy)
{
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POINTS);
	glVertex2i(cx,cy);
	glEnd();
}

void plotpixels(GLint h,GLint k,GLint x,GLint y)
{
	draw_pixel(x+h,y+k);
	draw_pixel(-x+h,y+k);
	draw_pixel(x+h,-y+k);
	draw_pixel(-x+h,-y+k);
	draw_pixel(y+h,x+k);
	draw_pixel(-y+h,x+k);
	draw_pixel(y+h,-x+k);
	draw_pixel(-y+h,-x+k);
	
}

void circle_draw(GLint h,GLint k,GLint r)
{
	GLint d=1-r,x=0,y=r;
	while(y>x)
	{
		plotpixels(h,k,x,y);
		if(d<0)
			d+=2*x+3;
		else
		{
			d+=2*(x-y)+5;
			--y;
		}
		++x;
	}
	plotpixels(h,k,x,y);
}


void myinit()
{
 glClearColor(0.4,1.0,1.0,0.0);
 glColor3f(1.0,1.0,0.0);
 //gluOrtho2D(0.0,499.0,0.0,499.0);
}


void idle()
{

    g+=0.00024;
  

	 h+=0.0002;


	 i-=0.00024;
 

	 j+=0.0002;


	 k+=0.00009;


	 l+=0.0002;


	 m+=0.000055;


	 n+=0.0002;


	 p+=0.00007;


	 q+=0.0001;

	 
	 x-=0.0001;

		s-=0.001;
	 y+=0.0002;
		

	glutPostRedisplay(); 

}


void play1(){
	glPushMatrix();
	if(h<0.6){
		glTranslatef(g,h,0);}
	else 
	{   
		glTranslatef(g,1.2-h,0);
	}
	fish11();
 glPopMatrix();

}
 

void play2(){
	glPushMatrix();
	if(j<0.6)
	{
		glTranslatef(i,j,0);
	}
	else 
	{   
		glTranslatef(i,1.2-j,0);
	}
	fish22();
 glPopMatrix();
}




void display(void)
{
 glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
 glColor3f(1.0,0.0,0.0);
 glPointSize(2.0);
 circle_draw(0.2,-0.1,0.5);

// sand();
 plant();
 pebbles();


 if(a>=-1.99)   
	 a=a-0.0005;
 else
   a=0;

 
if(b>=-1.99)
 b=b-0.0004;
 else
 	 b=0;

if(c>=-1.99)
c=c-0.0003;
 else
 	 c=0;

if(d>=-1.99)
 d=d+0.0007;
 else
 	 d=0;

if(e>=-1.99)
 e=e-0.0005;
 else
 	 e=0;


if(f>=-1.99)
 f=f-0.0002;
 else
 	 f=0;

 fish1();
 fish2();
 //fish3();
 fish4();
 fish5();
 fish33();
 fish44();
 fish55();
 fish6();

 glutPostRedisplay();
 glFlush();
 glutSwapBuffers();
 
}

void create_menu(void)
   {
     glutCreateMenu(menu);
     glutAttachMenu(GLUT_LEFT_BUTTON);
     glutAttachMenu(GLUT_RIGHT_BUTTON);
     glutAddMenuEntry("Food", 1);
     glutAddMenuEntry("Play", 2);
     glutAddMenuEntry("Assemble", 3);
     glutAddMenuEntry("Poison Food", 4);
     glutAddMenuEntry("Exit", 5);
     
    }
void menu(int val)
   {

   
     switch (val) {
     case 1:
			glutDisplayFunc(disp1);;
			break;
     case 2:
		    glutDisplayFunc(disp2);
			break;
	 case 3: 
			glutDisplayFunc(disp3);
			break;
	 case 4:
		    glutDisplayFunc(disp4);;
			break;
	 case 5: exit(0);
 
     
	
     
   }

}


void disp1(void)
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0,0.0,0.0);


  
    glPushMatrix();
	if(l<0.35)
	{
		food();
		glTranslatef(k,l,0);
	}
	else 
	{   
		glTranslatef(k,0.35,0);	
		glColor3f(0.0,0.0,1.0);
		glPointSize(8);
		glBegin(GL_POINTS);
		glVertex2f(-0.5,0.5);
	}
	fish33();
    glPopMatrix();
	
  
    glPushMatrix();
	if(n<=0.8)
	{
		poisonfood();
		glTranslatef(-m,n,0);}
	else 
	{   
		glTranslatef(-m,0.8,0);
        glColor3f(0.0,0.0,1.0);
		glPointSize(8);
		glBegin(GL_POINTS);
		glVertex2f(0.55,0.5);
	}
	
	fish44();
	glPopMatrix();
	
	glPushMatrix();
	if(q<0.65)
	{
		food_mul();
		glTranslatef(-p,q,0);
	}
	else 
	{   
		glTranslatef(-p,0.65,0);
		glColor3f(0.0,0.0,1.0);
		glPointSize(8);
		glBegin(GL_POINTS);
		glVertex2f(0.25,0.5);
	}
	fish55();
	glPopMatrix();

 if(a>=-1.99)   
	 a=a-0.0005;
 else
   a=0;

 
if(b>=-1.99)
 b=b-0.0004;
 else
 	 b=0;

if(c>=-1.99)
c=c-0.0003;
 else
 	 c=0;

if(d>=-1.99)
 d=d+0.0007;
 else
 	 d=0;

if(e>=-1.99)
 e=e-0.0005;
 else
 	 e=0;


if(f>=-1.99)
 f=f-0.0002;
 else
 	 f=0;

 fish1();
 fish2();
 //fish3();
 fish4();
 fish5();

 fish6();
 
 plant();
 pebbles();

  glutPostRedisplay();
 glFlush();


}


 

void disp2(void)
{


 glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
 glColor3f(1.0,0.0,0.0);

 plant();
 pebbles();

 if(a>=-1.99)   
	 a=a-0.0005;
 else
   a=0;

 
if(b>=-1.99)
 b=b-0.0004;
 else
 	 b=0;

if(c>=-1.99)
c=c-0.0003;
 else
 	 c=0;

if(d>=-1.99)
 d=d+0.0007;
 else
 	 d=0;

if(e>=-1.99)
 e=e-0.0005;
 else
 	 e=0;


if(f>=-1.99)
 f=f-0.0002;
 else
 	 f=0;
 
 fish1();
 fish2();
 
 fish4();
 fish5();
 
 fish6();
 play1();
 play2();
 glutPostRedisplay();
 glFlush();
 
}

void disp3(void)
{

 glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
 glColor3f(1.0,0.0,0.0);

 plant();
 pebbles();


 if(a>=-1.99)   
	 a=a-0.0005;
 else
   a=0;

 
if(b>=-1.99)
 b=b-0.0004;
 else
 	 b=0;

if(c>=-1.99)
c=c-0.0003;
 else
 	 c=0;

if(d>=-1.99)
 d=d+0.0007;
 else
 	 d=0;

if(e>=-1.99)
 e=e-0.0005;
 else
 	 e=0;


if(f>=-1.99)
 f=f-0.0002;
 else
 	 f=0;

 
 fish1();
 fish2();
 
 fish4();
 fish5();
 
 fish6();
 
 glutPostRedisplay();
 glFlush();
}

void disp4(void)
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0,0.0,0.0);


  
    glPushMatrix();
	if(x>-0.8)
	{
		glColor3f(1.0,0.0,0.0);
		glPointSize(10.0);
		glBegin(GL_POINTS);
		glVertex2f(0.0,0.30);
		glEnd();
		glTranslatef(x,0.35,0);
	}
	else 
	{   
		glTranslatef(x,1.95-y,0.0);	
		glColor3f(1.0,1.0,0.0);
		glPointSize(8);
		glBegin(GL_POINTS);
		glVertex2f(0.0,0.30);
		//glEnd();
	}
	fish21();

    glPopMatrix();


 plant();
 pebbles();


 if(a>=-1.99)   
	 a=a-0.0005;
 else
   a=0;

 
if(b>=-1.99)
 b=b-0.0004;
 else
 	 b=0;

if(c>=-1.99)
c=c-0.0003;
 else
 	 c=0;

if(d>=-1.99)
 d=d+0.0007;
 else
 	 d=0;

if(e>=-1.99)
 e=e-0.0005;
 else
 	 e=0;


if(f>=-1.99)
 f=f-0.0002;
 else
 	 f=0;


 fish1();
 fish2();
 fish4();
 fish5();
 fish6();
 
 glutPostRedisplay();
 glFlush();
}

int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 glutInitWindowPosition(0,0);
 glutInitWindowSize(500,500);
 glutCreateWindow("fish");
 myinit();
 create_menu();
 glutIdleFunc(idle);
 glutDisplayFunc(display);
 glutMainLoop();
}

