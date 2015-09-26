#include<iostream.h>
#include<graphics.h>

void drawCarpet(int limitW,int limitH,int changeX,int changeY,int colourChange){

     for(int x = 356; x != limitW; x += changeX)
    for(int y = 356; y != limitH; y += changeY)
    {
        if
        (
            //Not both the first (rightmost) digits are '1' in base 3
            !(
                   (x / 1) % 3 == 1
                && (y / 1) % 3 == 1
            )

            &&

            //Not both the second digits are '1' in base 3
            !(
                   (x / 3) % 3 == 1
                && (y / 3) % 3 == 1
            )

            &&

            //Not both the third digits are '1' in base 3
            !(
                   (x / 9) % 3 == 1
                && (y / 9) % 3 == 1
            )

            &&
            
            //Not both the fourth digits are '1' in base 3
            !(
                   (x / 27) % 3 == 1
                && (y / 27) % 3 == 1
            )

            &&

            //Not both the fifth digits are '1' in base 3
            !(
                   (x / 81) % 3 == 1
                && (y / 81) % 3 == 1
            )
         
            &&

            //Not both the sixth digits are '1' in base 3
            !(
                   (x / 243) % 3 == 1
                && (y / 243) % 3 == 1
            )
        )
        putpixel(x, y, WHITE);
            
    } 

}

int main()
{
    
    
    initwindow(712, 712, "Sierpinski Carpet");  
    setbkcolor(WHITE);   
   
   drawCarpet(712,0,1,-1,3);
   drawCarpet(0,0,-1,-1,6);
   drawCarpet(0,712,-1,1,9);
   drawCarpet(712,712,1,1,12);


    getch();
}  

