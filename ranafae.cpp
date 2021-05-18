#include <GL/glut.h>	
typedef int dim3[3];//define un tipo de variable nueva: un arreglo de 3 enteros

dim3 vertices[8]={{-1,-1,-1},{-1,1,-1},{1,1,-1},{1,-1,-1,},{-1,-1,1},{-1,1,1},{1,1,1},{1,-1,1}};//crea un arreglo de 8 de las cosas de arriba

void inicializa(void){
	glClearColor(0.5,0.5,0.5,0.0);	//Color de fondo RGBA(A no interesa por ahora)
	glMatrixMode(GL_MODELVIEW);
	gluLookAt(0,400,4,0,0,0,0,1,0);
	glMatrixMode(GL_PROJECTION);	//Para el tipo de matriz a usar:Proyeccion
	glOrtho(-600,600,-600,600,-600,600);
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
				for(int i=0; i<=3600; i++){
					glRotated(i,1,1,0);
					glTranslated(1,-1,1);
					glClear(GL_DEPTH_BUFFER_BIT); 	//buffer de profundidad *obligatorio
					glEnable(GL_DEPTH_TEST); 	//buffer de profundidad *obligatorio
					glClear(GL_COLOR_BUFFER_BIT); 	//buffer de profundidad *obligatorio	
					
					//Pupila
					
					
					/*glBegin(GL_TRIANGLE_FAN);
					glColor3f(1,1,1);
					glVertex3i( 171 , 308 , 120 );
					glVertex3i( 173 , 362 , 120 );
					glVertex3i( 178 , 361 , 101 );
					glVertex3i( 186 , 352 , 88 );
					glVertex3i( 190 , 338 , 72 );
					glVertex3i( 194 , 320 , 68 );
					glVertex3i( 195 , 298 , 66 );
					glVertex3i( 193 , 281 , 74 );
					glVertex3i( 188 , 266 , 83 );
					glVertex3i( 181 , 257 , 97 );
					glVertex3i( 174 , 253 , 111 );
					glVertex3i( 171 , 251 , 121 );
					glVertex3i( 164 , 257 , 140 );
					glVertex3i( 156 , 262 , 159 );
					glVertex3i( 150 , 274 , 170 );
					glVertex3i( 147 , 290 , 180 );
					glVertex3i( 147 , 310 , 178 );
					glVertex3i( 148 , 330 , 172 );
					glVertex3i( 154 , 345 , 160 );
					glEnd();*/
					
					glBegin(GL_TRIANGLE_FAN);
					glColor3f(1,1,1);
					glVertex3i( 357 , 334 , 369 );
					glVertex3i( 357 , 366 , 359 );
					glVertex3i( 392 , 366 , 353 );
					glVertex3i( 406 , 361 , 348 );
					glVertex3i( 415 , 355 , 341 );
					glVertex3i( 420 , 346 , 338 );
					glVertex3i( 418 , 333 , 333 );
					glVertex3i( 414 , 315 , 338 );
					glVertex3i( 393 , 300 , 348 );
					glVertex3i( 378 , 293 , 355 );
					glVertex3i( 366 , 295 , 361 );
					glVertex3i( 349 , 303 , 369 );
					glVertex3i( 338 , 314 , 377 );
					glVertex3i( 324 , 326 , 380 );
					glVertex3i( 311 , 332 , 382 );
					glVertex3i( 304 , 335 , 382 );
					glVertex3i( 309 , 346 , 379 );
					glVertex3i( 324 , 354 , 373 );
					glVertex3i( 337 , 363 , 365 );
					glVertex3i( 356 , 367 , 356 );
					glEnd();
					
					
					glBegin(GL_TRIANGLE_FAN);
					glColor3f(t(109),t(145),t(35));
					glVertex3i( 341 , 212 , 63 );
					glVertex3i( 253 , 329 , 230 );
					glVertex3i( 333 , 310 , 233 );
					glVertex3i( 392 , 297 , 236 );
					glVertex3i( 440 , 252 , 236 );
					glVertex3i( 514 , 232 , 235 );
					glVertex3i( 525 , 196 , 234 );
					glVertex3i( 522 , 186 , 235 );
					glVertex3i( 514 , 144 , 233 );
					glVertex3i( 484 , 101 , 241 );
					glVertex3i( 412 , 75 , 253 );
					glVertex3i( 354 , 63 , 247 );
					glVertex3i( 321 , 45 , 241 );
					glVertex3i( 236 , 74 , 242 );
					glVertex3i( 112 , 131 , 249 );
					glVertex3i( 87 , 151 , 237 );
					glVertex3i( 10 , 164 , 234 );
					glVertex3i( 8 , 195 , 234 );
					glVertex3i( 39 , 222 , 236 );
					glVertex3i( 97 , 310 , 233 );
					glVertex3i( 157 , 324 , 244 );
					glVertex3i( 254 , 310 , 234 );
					glEnd();
					glBegin(GL_TRIANGLE_STRIP);
					glVertex3i( 292 , 346 , 389 );
					glVertex3i( 316 , 345 , 380 );
					glVertex3i( 302 , 356 , 382 );
					glVertex3i( 325 , 353 , 374 );
					glVertex3i( 315 , 366 , 375 );
					glVertex3i( 335 , 358 , 371 );
					glVertex3i( 330 , 371 , 371 );
					glVertex3i( 348 , 363 , 367 );
					glVertex3i( 348 , 377 , 362 );
					glVertex3i( 360 , 365 , 364 );
					glVertex3i( 365 , 381 , 356 );
					glVertex3i( 372 , 368 , 359 );
					glVertex3i( 380 , 385 , 342 );
					glVertex3i( 387 , 364 , 351 );
					glVertex3i( 396 , 386 , 332 );
					glVertex3i( 400 , 361 , 345 );
					glVertex3i( 416 , 388 , 322 );
					glVertex3i( 412 , 387 , 343 );			
					glVertex3i( 428 , 386 , 302 );
					glVertex3i( 419 , 352 , 338 );
					glVertex3i( 439 , 376 , 286 );
					glVertex3i( 422 , 338 , 333 );
					glVertex3i( 441 , 353 , 276 );
					glVertex3i( 421 , 324 , 334 );
					glVertex3i( 432 , 331 , 270 );
					glVertex3i( 412 , 310 , 340 );
					glVertex3i( 423 , 319 , 271 );
					glVertex3i( 400 , 301 , 277 );
					glVertex3i( 406 , 281 , 301 );
					glVertex3i( 385 , 295 , 350 );
					glVertex3i( 426 , 250 , 292 );
					glVertex3i( 401 , 221 , 320 );
					glEnd();
					glBegin(GL_TRIANGLE_FAN);
					glVertex3i( 292 , 349 , 388 );
					glVertex3i( 313 , 344 , 380 );
					glVertex3i( 306 , 333 , 382 );
					glVertex3i( 305 , 326 , 381 );
					glVertex3i( 308 , 314 , 380 );
					glVertex3i( 306 , 315 , 401 );
					glVertex3i( 291 , 329 , 427 );
					glVertex3i( 261 , 342 , 430 );
					glVertex3i( 256 , 372 , 375 );
					glEnd();
					glBegin(GL_TRIANGLE_FAN);
					glVertex3i( 295 , 310 , 476 );
					glVertex3i( 257 , 350 , 483 );
					glVertex3i( 256 , 300 , 524 );
					glVertex3i( 296 , 274 , 487 );
					glVertex3i( 335 , 259 , 449 );
					glVertex3i( 363 , 255 , 411 );
					glVertex3i( 389 , 252 , 369 );
					glVertex3i( 358 , 294 , 373 );
					glEnd();
					glBegin(GL_TRIANGLE_FAN);
					glColor3f(0,0,0);
					glVertex3i( 358 , 334 , 377 );
					glVertex3i( 358 , 342 , 372 );
					glVertex3i( 364 , 340 , 364 );
					glVertex3i( 366 , 334 , 356 );
					glVertex3i( 361 , 327 , 359 );
					glVertex3i( 357 , 321 , 365 );
					glVertex3i( 352 , 325 , 374 );
					glVertex3i( 346 , 335 , 378 );
					glVertex3i( 351 , 338 , 375 );
					glVertex3i( 358 , 341 , 364 );
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
