
#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>


void player(float x1, float y1, float x2, float y2, float x3, float y3, int num){ //declaring what the player function would do
    if(num == 2){ //if there are 2 players, create 2 game pieces that are circles, 1 as a red piece, the other will be light blue, the game pieces will be circles
         setcolor(4);
         circle(x1,y1,20);
         setfillstyle(SOLID_FILL, RED);
         floodfill(x1,y1,RED);

         setcolor(9);
         circle(x2,y2,20);
         setfillstyle(SOLID_FILL, LIGHTBLUE);
         floodfill(x2,y2, LIGHTBLUE);
    }

    if(num == 3){ //if there are 3 players, then create 3 game pieces, 1 which is red, one which is light blue, and the other which is green, the game pieces will be circles
         setcolor(4);
         circle(x1,y1,20);
         setfillstyle(SOLID_FILL, RED);
         floodfill(x1,y1,RED);

         setcolor(9);
         circle(x2,y2,20);
         setfillstyle(SOLID_FILL, LIGHTBLUE);
         floodfill(x2,y2, LIGHTBLUE);

         setcolor(2);
         circle(x3,y3,20);
         setfillstyle(SOLID_FILL, GREEN);
         floodfill(x3,y3,GREEN);
    }
}

int random(){ //This declares the random function, which chooses a number from 1-6 randomly
    srand(time(NULL));
    return( rand() % 6 ) + 1;
}


