#include <GL/glut.h>
float rgb(float color){
	return color/255;
}
	
void inicializa(void){
	glClearColor(1.0,1.0,1.0,0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0,600,600,0);
}
	
void CurvaBezier(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2);	
	float a=503,b=556,c=12,l=0;
	for(int i=0;i<600;i++){
		//float puntosDeControl[5][3]={{100.0,750.0,0.0},{a--,500,0.0},{b--,300,0},{400,250,0},{500.0,500.0,0.0}};
		float puntosDeControl[9][3]={
		{256.0,56.0,0.0},
		{75,110.0,0.0},
		{c++,281,0},
		{l++,451,0},
		{256,a--,0},
		{472,440,0},
		{b--,281,0},
		{463,110,0},
		{256,56,0}
		};
		//glLineWidth(15); //GROSOR***
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,9,*puntosDeControl);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glColor3f(1,0,0);
		glEvalMesh1(GL_LINE,0,100);		
		glDisable(GL_MAP1_VERTEX_3);
	}

	a = 10;
	for(int i = 0; i<60; i++){
		//float puntosDeControl[5][3]={{100.0,750.0,0.0},{a--,500,0.0},{b--,300,0},{400,250,0},{500.0,500.0,0.0}};
		float puntosDeControl[6][3]={
			{230,a++,0.0},
		{260,80.0,0.0},
			{290,a++,0},
		{300,10,0},
			{240.0,10,0.0},
		{230,70.0,0.0},
		};
		//glLineWidth(15); //GROSOR***
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,6,*puntosDeControl);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glColor3f(0,1,0);
		glEvalMesh1(GL_LINE,0,100);		
		glDisable(GL_MAP1_VERTEX_3);		
	}
	
	a = 56;
	for(int i = 0; i<210; i++){
		//float puntosDeControl[5][3]={{100.0,750.0,0.0},{a--,500,0.0},{b--,300,0},{400,250,0},{500.0,500.0,0.0}};
		float puntosDeControl[5][3]={
			{240,56.0,0.0},
		{150,85.0,0.0},
			{265,a++,0},
		{550,85,0},
			{240.0,56.0,0.0},
		};
		//glLineWidth(15); //GROSOR***
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,5,*puntosDeControl);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glColor3f(0,1,0);
		glEvalMesh1(GL_LINE,0,100);		
		glDisable(GL_MAP1_VERTEX_3);		
	}
	
	a = 202;
	for(int i = 0; i<43; i++){
		//float puntosDeControl[5][3]={{100.0,750.0,0.0},{a--,500,0.0},{b--,300,0},{400,250,0},{500.0,500.0,0.0}};
		float puntosDeControl[4][3]={
			{202,183,0},
		{220,170,0},
			{a++,185,0},
		{245,185,0},
			
		};
		//glLineWidth(15); //GROSOR***
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*puntosDeControl);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glColor3f(0,0,0);
		glEvalMesh1(GL_LINE,0,100);		
		glDisable(GL_MAP1_VERTEX_3);		
	}
	
	a = 310;
	for(int i = 0; i<27; i++){
		//float puntosDeControl[5][3]={{100.0,750.0,0.0},{a--,500,0.0},{b--,300,0},{400,250,0},{500.0,500.0,0.0}};
		float puntosDeControl[4][3]={
			{297,183,0},
		{310,170,0},
			{a++,185,0},
		{350,185,0},
				
		};
		//glLineWidth(15); //GROSOR***
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*puntosDeControl);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glColor3f(0,0,0);
		glEvalMesh1(GL_LINE,0,100);		
		glDisable(GL_MAP1_VERTEX_3);		
	}
	a=204;
	for(int i = 0; i<90; i++){
		//float puntosDeControl[5][3]={{100.0,750.0,0.0},{a--,500,0.0},{b--,300,0},{400,250,0},{500.0,500.0,0.0}};
		float puntosDeControl[8][3]={
			{222,195,0},
		{a++,218,0},
			{196,253,0},
		{220,289,0},
			{250,270,0},
		{260,238,0},
			{246,208,0},
		{222,195,0}
		};
		//glLineWidth(15); //GROSOR***
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,8,*puntosDeControl);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glColor3f(1,1,1);
		glEvalMesh1(GL_LINE,0,100);		
		glDisable(GL_MAP1_VERTEX_3);		
	}
	a = 304;
	for(int i = 0; i<90; i++){
		//float puntosDeControl[5][3]={{100.0,750.0,0.0},{a--,500,0.0},{b--,300,0},{400,250,0},{500.0,500.0,0.0}};
		float puntosDeControl[8][3]={
			{322,195,0},
		{a++,218,0},
			{296,253,0},
		{320,289,0},
			{350,270,0},
		{352,238,0},
			{346,208,0},
		{322,195,0}
		};
		//glLineWidth(15); //GROSOR***
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,8,*puntosDeControl);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glColor3f(1,1,1);
		glEvalMesh1(GL_LINE,0,100);		
		glDisable(GL_MAP1_VERTEX_3);		
	}
	
	a = 327;
	for(int i = 0; i<24; i++){
		//float puntosDeControl[5][3]={{100.0,750.0,0.0},{a--,500,0.0},{b--,300,0},{400,250,0},{500.0,500.0,0.0}};
		float puntosDeControl[5][3]={
			{339,238,0},
		{327,254,0},
			{340,272,0},
		{a++,250,0},
			{339,238,0}
		};
		//glLineWidth(15); //GROSOR***
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,5,*puntosDeControl);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glColor3f(0,0,0);
		glEvalMesh1(GL_LINE,0,100);		
		glDisable(GL_MAP1_VERTEX_3);		
	}
	a = 227;
	for(int i = 0; i<24; i++){
		//float puntosDeControl[5][3]={{100.0,750.0,0.0},{a--,500,0.0},{b--,300,0},{400,250,0},{500.0,500.0,0.0}};
		float puntosDeControl[5][3]={
			{239,238,0},
		{227,254,0},
			{240,272,0},
		{a++,250,0},
			{239,238,0}
		};
		//glLineWidth(15); //GROSOR***
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,5,*puntosDeControl);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glColor3f(0,0,0);
		glEvalMesh1(GL_LINE,0,100);		
		glDisable(GL_MAP1_VERTEX_3);		
	}
	
	float puntosDeControl[3][3]={
		{250,330,0},
	{310,370,0},
		{370,330,0}
	};
	//glLineWidth(15); //GROSOR***
	glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,3,*puntosDeControl);
	glEnable(GL_MAP1_VERTEX_3);
	glMapGrid1f(100,0.0,1.0);
	glColor3f(0,0,0);
	glEvalMesh1(GL_LINE,0,100);		
	glDisable(GL_MAP1_VERTEX_3);
	
	glColor3f(1,1,1);
	glBegin(GL_LINES);
	glVertex2d(0,0);
	glVertex2d(1000,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2d(0,0);
	glVertex2d(0,1000);
	glEnd();
	
	glLineWidth(1);	
	glColor3f(1,1,1);
	glBegin(GL_LINES);
	glVertex2d(0,0);
	glVertex2d(1000,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2d(0,0);
	glVertex2d(0,1000);
	glEnd();
	
	glLineWidth(2);	
	
	int z=-500;

	glFlush();
}

int main (int argc, char **argv) {
	glutInitWindowSize(600,600);
	glutInit (&argc, argv);
	glutCreateWindow("Curvas de bezier");
	inicializa();
	glutDisplayFunc(CurvaBezier);
	glutMainLoop();
	return 0;
}
