#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>

int main(){
	
	void drawBaseSierpinski(double ax, double ay, double bx, double by, double cx, double cy,int numberOfSubTriangles);
	void drawSegments(double, double, double, double, double, double, double, double, int );
	void fillCircle(int , int , int );
	initwindow(1320, 660, "Chaos Game");
	
	   /*
		int points[] = {0,0,1320,0,1320,660,0,660};
		setfillstyle(SOLID_FILL, WHITE);
        fillpoly(4, points);
        */
        
        
        
        drawBaseSierpinski(660.0, 0.0, 990.0, 165.0, 660.0, 330.0, 2);
        drawBaseSierpinski(990.0, 165.0, 990.0, 495.0, 660.0, 330.0, 2);
        drawBaseSierpinski(990.0, 495.0, 660.0, 660.0, 660.0, 330.0, 2);
        drawBaseSierpinski(660.0, 660.0, 330.0, 495.0, 660.0, 330.0, 2);
        drawBaseSierpinski(330.0, 495.0, 330.0, 165.0, 660.0, 330.0, 2);
        drawBaseSierpinski(330.0, 165.0, 660.0, 0.0, 660.0, 330.0, 2);
        
        
        

	getch();
	
}



/* To construct the triangles that make the square */
void drawBaseSierpinski(double ax, double ay, double bx, double by, double cx, double cy,int numberOfSubTriangles){
	
	void drawSierpinski(double ax, double ay, double bx, double by, double cx, double cy);
	
	double lx[numberOfSubTriangles + 1];
	double ly[numberOfSubTriangles + 1];
	double mx[numberOfSubTriangles + 1];
	double my[numberOfSubTriangles + 1];
	double nx[numberOfSubTriangles + 1];
	double ny[numberOfSubTriangles + 1];
	
	lx[0] = ax;
	ly[0] = ay;
	mx[0] = bx;
	my[0] = by;
	nx[0] = cx;
	ny[0] = cy;
	
	for(int i = 0; i <= numberOfSubTriangles; ++i){
		
		drawSierpinski(lx[i], ly[i], mx[i] ,my[i], nx[i], ny[i]);
		lx[i+1] = (lx[i] + mx[i]) / 2;
		ly[i+1] = (ly[i] + my[i]) / 2;
		mx[i+1] = (mx[i] + nx[i]) / 2;
		my[i+1] = (my[i] + ny[i]) / 2;
		nx[i+1] = (lx[i] + nx[i]) / 2;
		ny[i+1] = (ly[i] + ny[i]) / 2;
		
	}
	
	
	
}

/* To construct the triangles inside the main triangles */
void drawSierpinski(double ax, double ay, double bx, double by, double cx, double cy){
	
	double px = ax;
	double py = ay; 
	int colour = WHITE;
	
	for(int i = 0; i < 50000; ++i){
		setcolor(abs(rand() % 16));
		switch(abs(rand()%3)){
			
				case 0:
			            px = (px + ax) / 2.0;
			            py = (py + ay) / 2.0;
			            putpixel(int( px ), int( py ), colour);
			            //circle(int( px ), int( py ), 1);
                		break;
            		
				case 1:
                		px = (px + bx) / 2.0;
                		py = (py + by) / 2.0;
                		putpixel(int( px ), int( py ), colour);
                		//circle(int( px ), int( py ), 1);
                		break;
            
				case 2:
		                px = (px + cx) / 2.0;
		                py = (py + cy) / 2.0;
		                putpixel(int( px ), int( py ), colour);
		                //circle(int( px ), int( py ), 1);
		                break;
			
		}
		
	}
	
}

