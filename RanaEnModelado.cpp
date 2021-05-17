#include<GL/glut.h>
#include <stdio.h>
float t (float x){
	float cl= x/255;
	return cl;
}	

void init(void){
	glClearColor(t(103), t(200), t(232),0);
	glMatrixMode(GL_MODELVIEW);
	gluLookAt(0,0,10,0,0,0,0,10,0);
	glMatrixMode(GL_PROJECTION);
	gluPerspective(120,1,1,20);
}	
void rana(){
	glPushMatrix();	
	glColor3f(t(200),t(80),t(213));
	glScalef(.1,.1,.1);	
	glutSolidCube(8);	
	glTranslated(0,0,15);	
	glutSolidCube(8);		
	glTranslated(15,0,0);	
	glutSolidCube(8);		
	glTranslated(0,0,-15);	
	glutSolidCube(8);	
	glScalef(10,10,10);	
	
	double x = 0;
	double y = 1.5;
	double z = .85;
	
	glTranslated(x,y,z);
	glScalef(.33,.75,.75);	
	glColor3f(t(200),t(80),t(213));
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);
	x=-2.85;
	glTranslated(x,y,z);
	glColor3f(t(251),t(206),t(17));
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);
	
	x=-5.7;
	glTranslated(x,y,z);
	glColor3f(t(200),t(80),t(213));	
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);	
	glPopMatrix();
	
	glPushMatrix();	
	y=0.54;
	x=0.5;
	z=.75;
	glTranslated(x,y,z);
	glScalef(.75,.2,.75);	
	glColor3f(t(200),t(80),t(213));
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);
	glPopMatrix();
	
	glPushMatrix();	
	y=1.5;
	x=0.5;
	z=1.9;
	glTranslated(x,y,z);
	glScalef(.75,.75,.2);		
	glColor3f(t(251),t(206),t(17));
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);
	glPopMatrix();
	
	//Trompa--------------------------------------------------------------------
	glPushMatrix();	
	glColor3f(t(239),t(121),t(241));
	y=.5;
	x=.5;
	z=2.3;
	glTranslated(x,y,z);
	glScalef(.75,.15,.3);	
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);		
	y=5;
	x=.5;
	z=2.3;
	glTranslated(x,y,z);	
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);		
	glPopMatrix();
	
	glPushMatrix();	
	glColor3f(t(239),t(121),t(241));
	y=.99;
	x=.5;
	z=2.3;
	glTranslated(x,y,z);
	glScalef(.75,.15,.15);	
	glutSolidCube(3);	
	glColor3f(t(200),t(80),t(213));
	glTranslated(-x,-y,-z);	
	y=7.5;
	x=.5;
	z=2.3;
	glTranslated(x,y,z);
	glScalef(1.2,3,1);	
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);	
	glPopMatrix();
	
	glPushMatrix();	
	glColor3f(t(104),t(36),t(121));
	y=.99;
	x=.5;
	z=2.5;
	glTranslated(x,y,z);
	glScalef(.50,.1,.15);	
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);		
	glPopMatrix();
	//Trompa-----------------------------------------------------------
	//nariz-------------------------------------------------------------
	glPushMatrix();	
	glColor3f(t(223),t(75),t(234));
	y=1.6;
	x=.2;
	z=2.8;
	glTranslated(x,y,z);	
	glutSolidCube(.25);	
	glTranslated(-x,-y,-z);		
	y=1.6;
	x=.6;
	z=2.8;
	glTranslated(x,y,z);	
	glutSolidCube(.25);	
	glTranslated(-x,-y,-z);		
	glPopMatrix();
	//Nariz-----------------------------------------------------------
	//Ojos-------------------------------------------------------------
	glPushMatrix();
	glColor3f(1,1,1);
	x=0;
	y=3;
	z=2;
	glTranslated(x,y,z);	
	glScalef(1,1,.5);
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);			
	x=1.25;
	y=3;
	z=2;
	glTranslated(x,y,z);		
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);		
	glPopMatrix();
	//Ojos------------------------------------------------------------
	//Pupilas
	glPushMatrix();
	glColor3f(t(104),t(36),t(121));
	x=0;
	y=3;
	z=2.1;
	glTranslated(x,y,z);	
	glScalef(.33,.33,.33);
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);			
	x=3.33;
	y=3;
	z=2.1;
	glTranslated(x,y,z);		
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);			
	glPopMatrix();
	//Pupilas-----------------------------------------------------------
	//Parpados
	glPushMatrix();
	glColor3f(t(200),t(80),t(213));
	x=0;
	y=3;
	z=1.565;
	glTranslated(x,y,z);	
	glScalef(1,1,.5);
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);			
	x=1.25;
	y=3;
	z=1.565;
	glTranslated(x,y,z);		
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);	
	glPopMatrix();
	//Parpados----------------------------------------------------------
	

}	

void laquesefumaeldiego(){
	double x, y, z;
	glPushMatrix();
	glColor3f(t(97),t(88),t(88));	
	glScalef(3,5,5);
	glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();
	x=1;
	y=1;
	z=0;
	glTranslated(x,y,z);
	glColor3f(t(97),t(88),t(88));
	glScalef(3,5,4);
	glutSolidCube(1);
	glTranslated(-x,-y,-z);
	glPopMatrix();
	
	glPushMatrix();
	x=1;
	y=1;
	z=0;
	glTranslated(x,y,z);
	glColor3f(t(97),t(88),t(88));	
	glScalef(5,3,4);
	glutSolidCube(1);
	glTranslated(-x,-y,-z);
	glPopMatrix();
}
void arbolUno(){
	double x, y, z;
	glPushMatrix();
	glColor3f(t(151),t(89),t(76));
	glScalef(2,3,3);
	glutSolidCube(1);
	glPopMatrix();	
	
	glPushMatrix();
	glColor3f(t(151),t(89),t(76));
	x=1.5;
	y=.5;
	z=0;
	glTranslated(x,y,z);
	glScalef(1,2,3);
	glutSolidCube(1);	
	glTranslated(x,y,z);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(143),t(65),t(61));
	x=1.5;
	y=-1;
	z=0;
	glTranslated(x,y,z);
	glScalef(1,1,3);
	glutSolidCube(1);	
	glTranslated(x,y,z);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(191),t(226),t(35));
	x=.5;
	y=0;
	z=2;
	glTranslated(x,y,z);
	glScalef(5,5,1);
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);
	
	glColor3f(t(215),t(249),t(40));
	x=.5;
	y=0;
	z=3.5;	
	glTranslated(x,y,z);	
	glScalef(1,1,2);
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);
	
	glColor3f(t(191),t(226),t(35));
	x=.5;
	y=0;
	z=4.2;
	glTranslated(x,y,z);
	glScalef(1,1,.5);
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);
	
	glColor3f(t(215),t(249),t(40));
	x=.5;
	y=0;
	z=5.75;	
	glTranslated(x,y,z);	
	glScalef(1,1,2);
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);
	
	glColor3f(t(191),t(226),t(35));
	x=.5;
	y=0;
	z=6.5;
	glTranslated(x,y,z);
	glScalef(1,1,.5);
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);
	
	glPopMatrix();

}
void arbolDos(){
	double x, y, z;
	glPushMatrix();
	glColor3f(t(138),t(68),t(56));
	glScalef(4,4,1);
	glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(138),t(68),t(56));	
	x=1.5;
	y=1.5;
	z=2.5;
	glTranslated(x,y,z);
	glScalef(1,1,4);
	glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(151),t(89),t(74));		
	x=-.5;
	y=0;
	z=2.5;
	glTranslated(x,y,z);
	glScalef(3,4,4);
	glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(151),t(89),t(74));			
	x=1.5;
	y=-.5;
	z=2.5;
	glTranslated(x,y,z);
	glScalef(1,3,4);
	glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(193),t(226),t(35));			
	x=0;
	y=0;
	z=5;
	glTranslated(x,y,z);
	glScalef(6,6,1);
	glutSolidCube(1);
	
	glColor3f(t(215),t(249),t(40));			
	x=0;
	y=0;
	z=1.5;
	glTranslated(x,y,z);	
	glScalef(1,1,2);
	glutSolidCube(1);
	
	glColor3f(t(193),t(226),t(35));			
	x=0;
	y=0;
	z=1;
	glTranslated(x,y,z);	
	glutSolidCube(1);
	
	glColor3f(t(215),t(249),t(40));			
	x=0;
	y=0;
	z=1.5;
	glTranslated(x,y,z);	
	glScalef(1,1,2);
	glutSolidCube(1);
	
	glPopMatrix();
}
	
void arbolTres(){
	double x, y, z;
	glPushMatrix();
	glColor3f(t(138),t(68),t(56));
	glScalef(2,2,5);
	glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();
	x=0;
	y=0;
	z=3;	
	glColor3f(t(157),t(171),t(34));
	glScalef(4,4,1);
	glTranslated(x,y,z);
	glutSolidCube(1);
	x=0;
	y=0;
	z=2;
	glTranslated(x,y,z);
	glutSolidCube(1);	
	x=0;
	y=0;
	z=2;
	glTranslated(x,y,z);
	glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();
	x=0;
	y=0;
	z=2;	
	glColor3f(t(215),t(249),t(38));
	glScalef(4,4,1);
	glTranslated(x,y,z);
	glutSolidCube(1);
	x=0;
	y=0;
	z=2;
	glTranslated(x,y,z);
	glutSolidCube(1);	
	x=0;
	y=0;
	z=2;
	glTranslated(x,y,z);
	glutSolidCube(1);
	glPopMatrix();
	
	
}
	

void ranaVerde(){
	glPushMatrix();	
	glColor3f(t(66),t(178),t(33));	
	glScalef(.1,.1,.1);	
	glutSolidCube(8);	
	glTranslated(0,0,15);	
	glutSolidCube(8);		
	glTranslated(15,0,0);	
	glutSolidCube(8);		
	glTranslated(0,0,-15);	
	glutSolidCube(8);	
	glScalef(10,10,10);	
	
	double x = 0;
	double y = 1.5;
	double z = .85;
	
	glTranslated(x,y,z);
	glScalef(.33,.75,.75);	
	glColor3f(t(66),t(178),t(33));
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);
	x=-2.85;
	glTranslated(x,y,z);	
	glColor3f(t(57),t(150),t(28));
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);
	
	x=-5.7;
	glTranslated(x,y,z);
	glColor3f(t(66),t(178),t(33));
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);	
	glPopMatrix();
	
	glPushMatrix();	
	y=0.54;
	x=0.5;
	z=.75;
	glTranslated(x,y,z);
	glScalef(.75,.2,.75);	
	glColor3f(t(66),t(178),t(33));
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);
	glPopMatrix();
	
	glPushMatrix();	
	y=1.5;
	x=0.5;
	z=1.9;
	glTranslated(x,y,z);
	glScalef(.75,.75,.2);		
	glColor3f(t(251),t(206),t(17));
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);
	glPopMatrix();
	
	//Trompa--------------------------------------------------------------------
	glPushMatrix();	
	glColor3f(t(132),t(196),t(54));
	y=.5;
	x=.5;
	z=2.3;
	glTranslated(x,y,z);
	glScalef(.75,.15,.3);	
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);		
	y=5;
	x=.5;
	z=2.3;
	glTranslated(x,y,z);	
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);		
	glPopMatrix();
	
	glPushMatrix();		
	glColor3f(t(132),t(196),t(54));
	y=.99;
	x=.5;
	z=2.3;
	glTranslated(x,y,z);
	glScalef(.75,.15,.15);	
	glutSolidCube(3);	
	glColor3f(t(66),t(178),t(33));
	glTranslated(-x,-y,-z);	
	y=7.5;
	x=.5;
	z=2.3;
	glTranslated(x,y,z);
	glScalef(1.2,3,1);	
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);	
	glPopMatrix();
	
	glPushMatrix();		
	glColor3f(t(9),t(55),t(19));
	y=.99;
	x=.5;
	z=2.5;
	glTranslated(x,y,z);
	glScalef(.50,.1,.15);	
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);		
	glPopMatrix();
	//Trompa-----------------------------------------------------------
	//nariz-------------------------------------------------------------
	glPushMatrix();	
	glColor3f(t(57),t(150),t(28));
	y=1.6;
	x=.2;
	z=2.8;
	glTranslated(x,y,z);	
	glutSolidCube(.25);	
	glTranslated(-x,-y,-z);		
	y=1.6;
	x=.6;
	z=2.8;
	glTranslated(x,y,z);	
	glutSolidCube(.25);	
	glTranslated(-x,-y,-z);		
	glPopMatrix();
	//Nariz-----------------------------------------------------------
	//Ojos-------------------------------------------------------------
	glPushMatrix();
	glColor3f(1,1,1);
	x=0;
	y=3;
	z=2;
	glTranslated(x,y,z);	
	glScalef(1,1,.5);
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);			
	x=1.25;
	y=3;
	z=2;
	glTranslated(x,y,z);		
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);		
	glPopMatrix();
	//Ojos------------------------------------------------------------
	//Pupilas
	glPushMatrix();
	glColor3f(t(9),t(55),t(19));
	x=0;
	y=3;
	z=2.1;
	glTranslated(x,y,z);	
	glScalef(.33,.33,.33);
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);			
	x=3.33;
	y=3;
	z=2.1;
	glTranslated(x,y,z);		
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);			
	glPopMatrix();
	//Pupilas-----------------------------------------------------------
	//Parpados
	glPushMatrix();
	glColor3f(t(66),t(178),t(33));
	x=0;
	y=3;
	z=1.565;
	glTranslated(x,y,z);	
	glScalef(1,1,.5);
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);			
	x=1.25;
	y=3;
	z=1.565;
	glTranslated(x,y,z);		
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);	
	glPopMatrix();
	//Parpados----------------------------------------------------------
	
}
void paisaje(){
	glPushMatrix();
	glRotated(90,0,0,1);
	glTranslated(-4,15,0);
	glScalef(.3,.3,.3);
	laquesefumaeldiego();	
	glPopMatrix();
	
	glPushMatrix();
	glRotated(90,0,0,1);
	glTranslated(-4,11,0);
	glScalef(.3,.3,.3);
	laquesefumaeldiego();	
	glPopMatrix();
	
	glPushMatrix();
	glRotated(90,0,0,1);
	glTranslated(-4,7,0);
	glScalef(.3,.3,.3);
	laquesefumaeldiego();	
	glPopMatrix();
	
	glPushMatrix();
	glRotated(90,0,0,1);
	glTranslated(-4,3,0);
	glScalef(.3,.3,.3);
	laquesefumaeldiego();	
	glPopMatrix();
	
	glPushMatrix();
	glRotated(90,0,0,1);
	glTranslated(-4,-1,0);
	glScalef(.3,.3,.3);
	laquesefumaeldiego();	
	glPopMatrix();
	
	glPushMatrix();
	glRotated(90,0,0,1);
	glTranslated(-4,-4,0);
	glScalef(.3,.3,.3);
	laquesefumaeldiego();	
	glPopMatrix();
	
	glPushMatrix();
	glRotated(90,0,0,1);
	glTranslated(-4,-7,0);
	glScalef(.3,.3,.3);
	laquesefumaeldiego();	
	glPopMatrix();
	
	glPushMatrix();
	glRotated(90,0,0,1);
	glTranslated(-4,-7,0);
	glScalef(.3,.3,.3);
	laquesefumaeldiego();	
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(131),t(243),t(255));
	glTranslated(0,-7,0);
	glScalef(10,1,1);
	glutSolidCube(4);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(181),t(236),t(93));
	glTranslated(0,-7,5);
	glScalef(10,1,1);
	glutSolidCube(4);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(181),t(236),t(93));
	glTranslated(0,-4,-62);
	glScalef(15,2,30);
	glutSolidCube(4);
	glPopMatrix();
	
	
	
}
void dibujaRanas(){
	glPushMatrix();
	double e =.60;
	glScalef(e,e,e);
	glTranslated(-23.5,-4.5,0);
	glRotated(85,0,1,0);	
	rana();	
	glPopMatrix();
	
	glPushMatrix();
	e =.60;
	glScalef(e,e,e);
	glTranslated(-14.25,-4.5,2);
	glRotated(85,0,1,0);	
	rana();	
	glPopMatrix();
	
	glPushMatrix();
	e =.60;
	glScalef(e,e,e);
	glTranslated(-8.25,-4.5,2);
	glRotated(85,0,1,0);	
	rana();	
	glPopMatrix();
	
	glPushMatrix();
	e =.60;
	glScalef(e,e,e);
	glTranslated(4.75,-4.5,2);
	glRotated(275,0,1,0);	
	ranaVerde();	
	glPopMatrix();
	
	glPushMatrix();
	e =.55;
	glScalef(e,e,e);
	glTranslated(9.50,-4.5,3);
	glRotated(-85,0,1,0);	
	ranaVerde();	
	glPopMatrix();
	
	glPushMatrix();
	e =.55;
	glScalef(e,e,e);
	glTranslated(14.50,-4.5,3);
	glRotated(-105,0,1,0);	
	ranaVerde();	
	glPopMatrix();
}
	
void rotador(){
	glEnable(GL_DEPTH_TEST);
	glClear(GL_DEPTH_BUFFER_BIT);
	glClear(GL_COLOR_BUFFER_BIT);	
	//glScalef(.5,.5,.5);
	/*for(int i=0;i<=720;i++)	{glEnable(GL_DEPTH_TEST);glClear(GL_DEPTH_BUFFER_BIT);glClear(GL_COLOR_BUFFER_BIT);							
	int v = 200;
	glRotated(i/v,0,i/v,1);	glTranslated(2,0,0);
	
		//rana();		
		//laquesefumaeldiego();		
		//arbolUno();
		//arbolDos();
		//arbolTres();
		//ranaVerde();
		//paisaje();
		//dibujaRanas();
	
	glPushMatrix();
	glTranslated(2,0,0);
	paisaje();
	glPopMatrix();
	
	dibujaRanas();
		
		
	glTranslated(-2,0,0); glRotated(-i/v,0,-i/v,1);
	glFlush(); Sleep(10); glDisable(GL_DEPTH_TEST);		
	}		*/
	
	glPushMatrix();
	glTranslated(2,0,0);
	paisaje();
	glPopMatrix();
	
	double es = 0.4;
	glPushMatrix();
	glRotated(180,0,1,0);
	glRotated(270,1,0,0);
	es=.8;
	glScalef(es,es,1);
	glTranslated(15,-4,0);
	arbolTres();	
	glPopMatrix();
	
	glPushMatrix();
	glRotated(180,0,1,0);
	glRotated(270,1,0,0);
	glScalef(.4,.4,.4);
	glTranslated(10,0,-2);
	arbolUno();	
	glPopMatrix();
	
	glPushMatrix();
	glRotated(180,0,1,0);
	glRotated(270,1,0,0);
	glScalef(.4,.4,.4);
	glTranslated(-10,0,-2);
	arbolDos();	
	glPopMatrix();
	
	glPushMatrix();
	glRotated(180,0,1,0);
	glRotated(270,1,0,0);
	//glScalef(.4,.4,.4);
	glTranslated(-15,-10,2);
	arbolTres();	
	glPopMatrix();	
	
	glPushMatrix();
	glRotated(180,0,1,0);
	glRotated(270,1,0,0);
	glScalef(es,es,es);
	glTranslated(0,0,0);
	arbolUno();	
	glPopMatrix();
	
	glPushMatrix();
	glRotated(180,0,1,0);
	glRotated(270,1,0,0);
	es =.3;
	glScalef(es, es, .6);
	glTranslated(45,-4,-4);
	arbolDos();	
	glPopMatrix();
	
	
	dibujaRanas();
	
	glFlush();		
	glDisable(GL_DEPTH_TEST);
	
}
	
void iluminacion(void){
	
	glMatrixMode(GL_MODELVIEW);
	glutInitDisplayMode(GLUT_DEPTH);
	
	//Area de dibujado
	rotador();
	
}	
	int main(int argc, char** argv){	
		glutInitWindowSize(1200,800);	
		glutInit(&argc, argv);
		glutCreateWindow("Programa basico en 3D");
		init();
		glutDisplayFunc(iluminacion);		
		glutMainLoop();				
		return 0;
	}

		
