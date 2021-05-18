#include <GL/glut.h>	
typedef int dim3[3];//define un tipo de variable nueva: un arreglo de 3 enteros

dim3 vertices[8]={{-1,-1,-1},{-1,1,-1},{1,1,-1},{1,-1,-1,},{-1,-1,1},{-1,1,1},{1,1,1},{1,-1,1}};//crea un arreglo de 8 de las cosas de arriba

void inicializa(void){
	glClearColor(0.5,0.5,0.5,0.0);	//Color de fondo RGBA(A no interesa por ahora)
	glMatrixMode(GL_MODELVIEW);
	gluLookAt(0,400,4,0,0,0,0,1,0);
	glMatrixMode(GL_PROJECTION);	//Para el tipo de matriz a usar:Proyeccion
	glOrtho(-200,200,-200,200,-250000,25000);
}
	
	void dibujacara(int a, int b, int c, int d){//en esta funcion le pasamos 4 enteros que seran los indices del arreglo de vertices que declaramos anteriormente
		glBegin(GL_QUADS);//esta funcion sirve para dibujar un cuadrado
		glVertex3iv(vertices[a]);//punto 1
		glVertex3iv(vertices[b]);//punto 2
		glVertex3iv(vertices[c]);//punto 3
		glVertex3iv(vertices[d]);//punto 4
		glEnd();//fin xD
	}
		
		
		float t (float x){
			float cl= x/255;
			return cl;
		}
			
			void Cubo3DQUADS(void){
				glMatrixMode(GL_MODELVIEW);
				glutInitDisplayMode(GL_DEPTH); 	//buffer de profundidad *obligatorio
				//juuyghj
				glClear(GL_DEPTH_BUFFER_BIT); 	//buffer de profundidad *obligatorio
				glEnable(GL_DEPTH_TEST); 	//buffer de profundidad *obligatorio
				glClear(GL_COLOR_BUFFER_BIT); 	//buffer de profundidad *obligatorio	
				
				for(int i=0; i<=3600; i++){
					glRotated(i,1,1,0);
					glTranslated(1,-1,1);
					glClear(GL_DEPTH_BUFFER_BIT); 	//buffer de profundidad *obligatorio
					glEnable(GL_DEPTH_TEST); 	//buffer de profundidad *obligatorio
					glClear(GL_COLOR_BUFFER_BIT); 	//buffer de profundidad *obligatorio	
					
					glBegin(GL_TRIANGLES);
					//nariz
					glColor3f(t(80),t(89),t(16));
					glVertex3i(97.307,99.8965,35.006);
					glVertex3i(92.2655,107.975,32.666);
					glVertex3i(83.509, 101.93, 25.658);
					glEnd();
					
					//Cara
					glBegin(GL_POLYGON);					
					glColor3f(t(166),t(183),t(24));
					glVertex3i(92.2655,107.975,32.666);
					glVertex3i(83.509, 101.93, 25.658);
					glVertex3i(80.962, 102.9, 17.491);
					glVertex3i(81.731, 102.72, 20.453);
					glVertex3i(83.509, 101.93, 25.658);
					glEnd();
					
					glBegin(GL_POLYGON);
					glColor3f(t(166),t(183),t(24));					
					glVertex3i(92.945,112.85,29.72);					
					glVertex3i(92.2655,107.975,32.666);					
					glVertex3i(80.962, 102.9, 17.491);
					glVertex3i(81.731, 102.72, 20.453);
					glEnd();
					
					glBegin(GL_POLYGON);
					glColor3f(t(184),t(200),t(47));
					glVertex3i(92.945,112.85,29.72);					
					glVertex3i(92.2655,107.975,32.666);					
					glVertex3i(95.593,120.7,15.303);
					//glVertex3i(79.635,102.86,10.937);
					glVertex3i(78.456, 102.35, 3.1484);					//QUIZANO
					glVertex3i(80.962, 102.9, 17.491);
					glEnd();
					
					glBegin(GL_POLYGON);
					glColor3f(t(166),t(184),t(24));
					glVertex3i(78.456, 102.35, 3.1484);
					glVertex3i(77.978, 101.89, -1.0728);
					glVertex3i(80.106, 105.06, -0.4369);
					glVertex3i(81.938, 107.86, -1.0709);
					glVertex3i(87.707,117.56,-3.5728);					
					glVertex3i(95.593,120.7,15.303);
					glVertex3i(100.2885,127.21,-4.93455);					
					glEnd();
					
					//Ojo al tejo
					
					glBegin(GL_TRIANGLE_FAN);
					glColor3f(0,0,0);
					glVertex3i(77.978, 101.86, -1.0728);
					glVertex3i(80.106, 105.06, -0.4369);
					glVertex3i(78.546, 102.35, 3.1484);
					glVertex3i(78.054, 101.72, -1.4405);
					
					
					glEnd();
					
					
					glFlush();
					
					glTranslated(-1,1,-1);
					glRotated(-i,1,1,0);
					Sleep(10);
					glDisable(GL_DEPTH_TEST);	 //buffer de profundidad *obligatorio
				}
			}
				
				int main(int argc, char** argv)
				{
					glutInitWindowSize(600,600);
					glutInit(&argc, argv);
					glutCreateWindow("Cubo en 3D");
					inicializa();
					glutDisplayFunc(Cubo3DQUADS);
					glutMainLoop();
					return 0;
				}
