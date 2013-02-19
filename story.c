#include<GLUT/glut.h>
#include<math.h>
GLfloat dy1=10,dx=10,dx2=15,dy2=50,dp,dp1,dz;
GLfloat cc=0;
GLfloat cc1=.02;

void IDLE()
{
   if(cc<1) cc+=.001;
   if(cc1<1) cc1+=.001;
   
   dy1 += 0.055;
   dy2 -= 0.035;
   dx += 0.05;
   dx2+= -0.05;
   dz+=0.01;
   dp -=50.0;
   dp1-=50.0;
   if(dp<-480) dp=220;
   if(dp1<-480) dp1=220;
   glutPostRedisplay();
}

void boat()// boat func
{
  glColor3f(0.4,0.2,0.2);  
  glBegin(GL_POLYGON);
  glVertex3f(-300.0,-150.0,30.0);
  glVertex3f(-260.0,-150.0,30.0);
  glVertex3f(-270.0,-160.0,30.0);
  glVertex3f(-290.0,-160.0,30.0);
  glEnd();
}
void boat2()// boat func
{
  glColor3f(0.4,0.2,0.2);  
  glBegin(GL_POLYGON);
  glVertex3f(-300.0,-150.0,30.0);
  glVertex3f(-260.0,-150.0,30.0);
  glVertex3f(-270.0,-160.0,30.0);
  glVertex3f(-290.0,-160.0,30.0);
  glEnd();
  
  glColor3f(1.0,1.0,1.0);  
  glBegin(GL_POLYGON);
  glVertex3f(-270.0,-150.0,30.0);
  glVertex3f(-260.0,-150.0,30.0);
  glVertex3f(-270.0,-110.0,30.0);
  glEnd();
} 
void drops()
{
 glColor3f(1.0,1.0,1.0);  
 glBegin(GL_LINE);
 glVertex3f(100.0,230.0,80.0);
 glVertex3f(100.0,200.0,80.0);
 glEnd();


 glBegin(GL_LINE);
 glVertex3f(140.0,230.0,80.0);  
 glVertex3f(140.0,200.0,80.0);
 glEnd();

 
}

void drops1()
{
 glBegin(GL_LINE);
 glVertex3f(120.0,230.0,80.0);  
 glVertex3f(120.0,200.0,80.0);
 glEnd();

 glBegin(GL_LINE);
 glVertex3f(160.0,230.0,80.0);  
 glVertex3f(160.0,200.0,80.0);
 glEnd();

}


void rainfall()
{

 drops(); 
 glPushMatrix();
 glTranslatef(70.0,0.0,0.0);
 drops();
 glPopMatrix();

 glPushMatrix();
 glTranslatef(140.0,0.0,0.0);
 drops();
 glPopMatrix();

  glPushMatrix();
 glTranslatef(210.0,0.0,0.0);
 drops();
 glPopMatrix();

 glPushMatrix();
 glTranslatef(-70.0,0.0,0.0);
 drops();
 
 glPopMatrix();

 glPushMatrix();
 glTranslatef(-140.0,0.0,0.0);
 drops();
 glPopMatrix();

 glPushMatrix();
 glTranslatef(-210.0,0.0,0.0);
 drops();
 glPopMatrix();

 glPushMatrix();
 glTranslatef(-280.0,0.0,0.0);
 drops();
 glPopMatrix();

 glPushMatrix();
 glTranslatef(-350.0,0.0,0.0);
 drops();
 glPopMatrix();

 glPushMatrix();
 glTranslatef(-420.0,0.0,0.0);
 drops();
 glPopMatrix();

 glPushMatrix();
 glTranslatef(-490.0,0.0,0.0);
 drops();
 glPopMatrix();


}

void rainfall1()
{

 drops1(); 
 glPushMatrix();
 glTranslatef(70.0,0.0,0.0);
 drops1();
 glPopMatrix();

 glPushMatrix();
 glTranslatef(140.0,0.0,0.0);
 drops1();
 glPopMatrix();

  glPushMatrix();
 glTranslatef(210.0,0.0,0.0);
 drops1();
 glPopMatrix();

 glPushMatrix();
 glTranslatef(-70.0,0.0,0.0);
 drops1();
 
 glPopMatrix();

 glPushMatrix();
 glTranslatef(-140.0,0.0,0.0);
 drops1();
 glPopMatrix();

 glPushMatrix();
 glTranslatef(-210.0,0.0,0.0);
 drops1();
 glPopMatrix();

 glPushMatrix();
 glTranslatef(-280.0,0.0,0.0);
 drops1();
 glPopMatrix();

 glPushMatrix();
 glTranslatef(-350.0,0.0,0.0);
 drops1();
 glPopMatrix();

 glPushMatrix();
 glTranslatef(-420.0,0.0,0.0);
 drops1();
 glPopMatrix();

 glPushMatrix();
 glTranslatef(-490.0,0.0,0.0);
 drops1();
 glPopMatrix();


}

void r1()
{
 glPushMatrix();
 glTranslatef(10.0,50.0,0.0);
 rainfall();
 glPopMatrix();

 glPushMatrix();
 glTranslatef(10.0,100.0,0.0);
 rainfall();
 glPopMatrix();
}

void r11()
{
 glPushMatrix();
 glTranslatef(10.0,50.0,0.0);
 rainfall1();
 glPopMatrix();

 glPushMatrix();
 glTranslatef(10.0,100.0,0.0);
 rainfall1();
 glPopMatrix();
}
void r2()
{
  glPushMatrix();
 glTranslatef(0.0,100.0,0.0);
 r1();
 glPopMatrix();
 
}
void r21()
{
  glPushMatrix();
 glTranslatef(0.0,100.0,0.0);
 r11();
 glPopMatrix();
 
}
void circle()//sun main func
{
   
   int i,n=80;
   GLfloat delta, dy = 0,theta=0, C[80][3],r = 10;
   delta = (2 * M_PI) / n;
   for(i=0;i<n;i++)
   {

         C[i][0] = r * cos(theta);
         C[i][1] = r * sin(theta);
         C[i][2] = -50;
         theta += delta;
    }
  
   
   glBegin(GL_POLYGON);
   for(i=0;i<n;i++)
   {
        
        glVertex3fv(C[i]);
   }
   glEnd();

}


void cloud()//clouds
{
 glPushMatrix();
  glColor3f(1.0,1.0,1.0);
  glTranslatef(80.0,200.0,0.0);
  glScalef(1.5,1.0,0.0);
  circle();
  glPopMatrix();
  
  glPushMatrix();
  glColor3f(1.0,1.0,1.0);
  glTranslatef(100.0,200.0,0.0);
  glScalef(2.5,2.0,0.0);
  circle();
  glPopMatrix();
  
  glPushMatrix();
  glColor3f(1.0,1.0,1.0);
  glTranslatef(110.0,200.0,0.0);
  glScalef(2.5,1.5,0.0);
  circle();
  glPopMatrix();
  
  
  
}  


void triangle1()//mountain main func
{
  
  glBegin(GL_TRIANGLES);
  glColor3f(0.15,0.1,0.1);
  glVertex3f(-80.0,0.0,0.0);
  glColor3f(0.4,0.4,0.4);
  glVertex3f(-40.0,50.0,0.0);
  glColor3f(0.15,0.1,0.1);
  glVertex3f(0.0,0.0,0.0);
  glEnd();
}
/*void mouse(int btn, int state, int x, int y)

{

if(btn==GLUT_LEFT_BUTTON && state ==GLUT_DOWN) r2();

}
*/

void print_text (char *, GLint,GLint) ;//text declaration

void display()//display function

{
  int k;
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glLoadIdentity();

 // gluLookAt(0.0,20.0,300.0,0.0,0.0,0.0,0.0,300.0,300.0);
  
  //glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,int a);  

  glPushMatrix();//message
  glColor3f(1.0*cc,1.0*cc,1.0*cc);
  glTranslatef(-dx+180,60.0,0.0);
  print_text ("the pessismist are the losers,they never fight",-70,70) ;
  print_text ("the optimists are the ones who can only expect to win",-30,60) ;
  print_text ("the realists are the ones,who fight to win",10,50) ;
  print_text ("be the real hero,play the game to win..........",50,40) ;
  glPopMatrix();

  

  glPushMatrix();//SUNRISE
  glTranslatef(0.0,dy1,0.0);
  glColor3f(1.0,0.8,0.0);
  circle();
  glPopMatrix();

  glPushMatrix();//SHADOW
  glColor3f(1.0,1.0,0.0);
  glTranslatef(0.0,dy2,0.0);
  circle();
  glPopMatrix();

  
  glPushMatrix();//BOAT-LT -RT
  glColor3f(0.0,0.0,0.0);
  glTranslatef(dx+60,0.0,0.0);
  glScalef(1.5,1.0,0.0);
  print_text ("<<<  the REALIST'S adjust their sails",-220,-150) ;
  boat2();
  glPopMatrix();

   
  glPushMatrix();//RT-LT
  glRotatef(180.0,0.0,1.0,0.0);
  glTranslatef(dx2,49.0,0.0);
  print_text ("the PESSIMIST'S complain about the wind>>>>>",-130,-150) ;
  boat();
  glPopMatrix();

  glPushMatrix();//RT-LT
  glRotatef(180.0,0.0,1.0,0.0);
  glTranslatef(dx+20,-49.0,dz);
  print_text ("the OPTIMIST'S expects them to change>>>>>",-110,-150) ;
  boat();
  glPopMatrix();

  glPushMatrix();//RAINFALL
  glTranslatef(0.0,dp,0.0);
  r2();
  glPopMatrix();

  glPushMatrix();//RAINFALL
  glTranslatef(0.0,dp1,0.0);
  r21();
  glPopMatrix();


  triangle1();//mountain
  
  glPushMatrix();//MOUNTAIN
  glTranslatef(80.0,0.0,0.0);
  glScalef(1.5,1.0,0.0);
  triangle1();
  glPopMatrix();


  glPushMatrix();//mountain
  glTranslatef(240.0,0.0,0.0);
  glScalef(2.5,2.0,0.0);
  triangle1();
  glPopMatrix();

  glPushMatrix();//mountain
  glTranslatef(340.0,0.0,0.0);
  glScalef(1.5,1.0,0.0);
  triangle1();
  glPopMatrix();


  glPushMatrix();//mountain
  glTranslatef(-50.0,0.0,0.0);
  glScalef(2.8,1.5,0.0);
  triangle1();
  glPopMatrix();

  glPushMatrix();//mountain
  glTranslatef(-190.0,0.0,0.0);
  glScalef(1.8,1.5,0.0);
  triangle1();
  glPopMatrix();

  cloud();//cloud
  
  glPushMatrix();//cloud up
  glTranslatef(-190.0+dx,-250.0,0.0);
  glScalef(1.8,1.5,0.0);
  cloud();
  glPopMatrix();
  
  
  glPushMatrix();//cloud
  glTranslatef(dx,dy1,0.0);
  cloud();
  glPopMatrix();
  
  glPushMatrix();//cloud
  glTranslatef(-dx,dy2,0.0);
  cloud();
  glPopMatrix();
		
  glPushMatrix();//cloud left
  glTranslatef(-290.0+dx2,-20.0,0.0);
  glScalef(1.2,1.5,0.0);
  cloud();
  glPopMatrix();
  
  

  glBegin(GL_POLYGON);//UPPER ATMOSPHERE

  glColor3f(1.0*cc,0.0*cc,0.0*cc);
  glVertex3f(-300.0,0.0,-50.0);

  glColor3f(1.0*cc,0.5*cc,0.0*cc);
  glVertex3f(-300.0,300.0,-50.0);

  glColor3f(1.0*cc,0.5*cc,0.0*cc);
  glVertex3f(300.0,300.0,-50.0);

  glColor3f(1.0*cc,0.0*cc,0.0*cc);
  glVertex3f(300.0,0.0,-50.0);

  glEnd();


  glBegin(GL_POLYGON);//LOWER ATMOSPHERE

  glColor3f(0.8*cc1,0.5*cc1,0.0*cc1);
  glVertex3f(-300.0,0.0,-50.0);

  glColor3f(0.8*cc1,0.5*cc1,0.0*cc1);
  glVertex3f(300.0,0.0,-50.0);
 
  glColor3f(1.0*cc1,1.0*cc1,1.0*cc1);
  glVertex3f(300.0,-300.0,-50.0);

  glColor3f(1.0*cc,1.0*cc,1.0*cc);
  glVertex3f(-300.0,-300.0,-50.0);

  glEnd();
  glFlush();
  glutSwapBuffers();

}

void print_text (char *str, GLint x, GLint y)//text display program
{
	GLint i;
	glRasterPos2d (x,y) ;
	for (i=0;str[i]!='\0';i++)
		glutBitmapCharacter (GLUT_BITMAP_TIMES_ROMAN_10, str[i]) ;
		
}

int main(int argc, char ** argv)// main program
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
  glutInitWindowSize(1000,600);
  glutInitWindowPosition(0.0,0.0);
  glutCreateWindow("sunrise");
  glutDisplayFunc(display);
  glutIdleFunc(IDLE);
  //glutMouseFunc(mouse);
  glEnable(GL_DEPTH_TEST);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity ();
  glOrtho(-300.0, 300.0, -300.0, 300.0, -300.0,300.0);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity ();
  glClearColor (1.0, 1.0, 1.0, 1.0);
  glutMainLoop();
  return 0;
}
