#include "design.h"
#include <graphics.h>
#include <conio.h>
#include <stdio.h>
void design(int x){//Code for board design
   setcolor(15);//This sets the color white as the colour for the board
   setfillstyle(SOLID_FILL, WHITE);

  setlinestyle(1,0,5);//This sets the line type to solid and sets the line thickness to 5.
   bar(50,50,200,200);// This, and the next four lines draws the top most row of the board
   bar(200,50,350,200);
   bar(350,50,500,200);
   bar(500,50,650,200);
   bar(650,50,800,200);

   bar(50,200,200,350);//This and the next four lines draws the second row of the board.
   bar(200,200,350,350);
   bar(350,200,500,350);
   bar(500,200,650,350);
   bar(650,200,800,350);

   bar(50,350,200,500);// This and the next four lines draws the third row of the board.
   bar(200,350,350,500);
   bar(350,350,500,500);
   bar(500,350,650,500);
   bar(650,350,800,500);

   bar(50,500,200,650);// This and the next four lines draws the fourth row of the board.
   bar(200,500,350,650);
   bar(350,500,500,650);
   bar(500,500,650,650);
   bar(650,500,800,650);

   bar(50,650,200,800);// This and the next four lines draws the fifth row of the board.
   bar(200,650,350,800);
   bar(350,650,500,800);
   bar(500,650,650,800);
   bar(650,650,800,800);

   bar(800,50,950,200);//This and the next four lines draws the sixth column if the board.
   bar(800,200,950,350);
   bar(800,350,950,500);
   bar(800,500,950,650);
   bar(800,650,950,800);

   bar(960,100,1060,200);// This draws the white die shape.


   settextstyle(6, HORIZ_DIR,25);//This sets the text style to script font, makes it appear orizontally and makes it size 25.
   outtextxy(875,725,"6");// This statement prints out the designated number for each spot on the board, by identifying coordinates where it should print and then specifying what it wants to print.
   settextstyle(6, HORIZ_DIR,25);// All the following settextstyle and outtextxy statements do the same.
   outtextxy(725,725,"5");
   settextstyle(6, HORIZ_DIR,25);
   outtextxy(575,725,"4");
   settextstyle(6, HORIZ_DIR,25);
   outtextxy(425,725,"3");
   settextstyle(6, HORIZ_DIR,25);
   outtextxy(275,725,"2");
   settextstyle(6, HORIZ_DIR,25);
   outtextxy(125,725,"1");

   settextstyle(6, HORIZ_DIR,25);
   outtextxy(860,575,"12");
   settextstyle(6, HORIZ_DIR,25);
   outtextxy(710,575,"11");
   settextstyle(6, HORIZ_DIR,25);
   outtextxy(560,575,"10");
   settextstyle(6, HORIZ_DIR,25);
   outtextxy(415,575,"9");
   settextstyle(6, HORIZ_DIR,25);
   outtextxy(260,575,"8");
   settextstyle(6, HORIZ_DIR,25);
   outtextxy(115,575,"7");

   settextstyle(6, HORIZ_DIR,25);
   outtextxy(860,425,"18");
   settextstyle(6, HORIZ_DIR,25);
   outtextxy(710,425,"17");
   settextstyle(6, HORIZ_DIR,25);
   outtextxy(560,425,"16");
   settextstyle(6, HORIZ_DIR,25);
   outtextxy(415,425,"15");
   settextstyle(6, HORIZ_DIR,25);
   outtextxy(260,425,"14");
   settextstyle(6, HORIZ_DIR,25);
   outtextxy(115,425,"13");

   settextstyle(6, HORIZ_DIR,25);
   outtextxy(860,275,"24");
   settextstyle(6, HORIZ_DIR,25);
   outtextxy(710,275,"23");
   settextstyle(6, HORIZ_DIR,25);
   outtextxy(560,275,"22");
   settextstyle(6, HORIZ_DIR,25);
   outtextxy(415,275,"21");
   settextstyle(6, HORIZ_DIR,25);
   outtextxy(260,275,"20");
   settextstyle(6, HORIZ_DIR,25);
   outtextxy(115,275,"19");

   settextstyle(6, HORIZ_DIR,25);
   outtextxy(860,125,"30");
   settextstyle(6, HORIZ_DIR,25);
   outtextxy(710,125,"29");
   settextstyle(6, HORIZ_DIR,25);
   outtextxy(560,125,"28");
   settextstyle(6, HORIZ_DIR,25);
   outtextxy(415,125,"27");
   settextstyle(6, HORIZ_DIR,25);
   outtextxy(260,125,"26");
   settextstyle(6, HORIZ_DIR,25);
   outtextxy(115,125,"25");
   setcolor(0);

   line(200, 50, 200, 800);// This and the four following lines creates the vertical line seperators on the board.
   line(350,50,350,800);
   line(500,50,500,800);
   line(650,50,650,800);
   line(800,50,800,800);


if (x==0){// This creates how the die will look like when the number rolled is 0 which only happens at the beginning of the game before the person rolls.
line(50,200,950,200);// This and the following three lines creats the shape of the die.
line(50,350,950,350);
line(50,500,950,500);
line(50,650,950,650);

setcolor(0);//  sets the color to black to draw on the black circles of the die. Draws the top left circle of the die when its five.
circle(975,115,9);// Creates a circle by specifying the x and y coordinates and the radius of the circle.
setfillstyle(SOLID_FILL, BLACK);// This solid fills the color in black.
floodfill(975,115,BLACK);// This fills in the circle.

setcolor(0);// The following three lines draw the top right circle of the die when its five.
circle(1045,115,9);
setfillstyle(SOLID_FILL, BLACK);
floodfill(1045,115,BLACK);

setcolor(0);// The following three lines draw the borttom right circle of the die when its five.
circle(1045,185,9);
setfillstyle(SOLID_FILL, BLACK);
floodfill(1045,185,BLACK);

setcolor(0);// The following three lines draw the bottom left circle of the die when its five.
circle(975,185,9);
setfillstyle(SOLID_FILL, BLACK);
floodfill(975,185,BLACK);

setcolor(0);// The following three lines draw the middle circle of the die when its five.
circle(1010,150,9);
setfillstyle(SOLID_FILL, BLACK);
floodfill(1010,150,BLACK);
}


if (x==1){// This draws the die when the number rolled is one
line(50,200,950,200);//creates the square die.
line(50,350,950,350);
line(50,500,950,500);
line(50,650,950,650);

setcolor(0);// draws the black circle in the middle
circle(1010,150,9);
setfillstyle(SOLID_FILL, BLACK);
floodfill(1010,150,BLACK);
}
if (x==2){// This draws the die when the number rolled is two.
line(50,200,950,200);// creates the square die.
line(50,350,950,350);
line(50,500,950,500);
line(50,650,950,650);

setcolor(0);// draws the top left circle of the die.
circle(975,115,9);
setfillstyle(SOLID_FILL, BLACK);
floodfill(975,115,BLACK);


setcolor(0);// draws the bottom right circle of the die.
circle(1045,185,9);
setfillstyle(SOLID_FILL, BLACK);
floodfill(1045,185,BLACK);
}
if (x==3){// This draws the die when the number rolled is 3
line(50,200,950,200);//creates the square die.
line(50,350,950,350);
line(50,500,950,500);
line(50,650,950,650);

setcolor(0);// creates the top left circle of the die.
circle(975,115,9);
setfillstyle(SOLID_FILL, BLACK);
floodfill(975,115,BLACK);

setcolor(0);//created the middle circle of the die.
circle(1010,150,9);
setfillstyle(SOLID_FILL, BLACK);
floodfill(1010,150,BLACK);

setcolor(0);// creates the bottom right circle of the die.
circle(1045,185,9);
setfillstyle(SOLID_FILL, BLACK);
floodfill(1045,185,BLACK);
}
if (x==4){// Draws the die when the number rolled is four.
line(50,200,950,200);//creates the die
line(50,350,950,350);
line(50,500,950,500);
line(50,650,950,650);

line(50,200,950,200);
line(50,350,950,350);
line(50,500,950,500);
line(50,650,950,650);

setcolor(0);// draws the top left circle of the die.
circle(975,115,9);
setfillstyle(SOLID_FILL, BLACK);
floodfill(975,115,BLACK);

setcolor(0);// draws the top right circle of the die.
circle(1045,115,9);
setfillstyle(SOLID_FILL, BLACK);
floodfill(1045,115,BLACK);

setcolor(0);// draws the bottom right circle of the die.
circle(1045,185,9);
setfillstyle(SOLID_FILL, BLACK);
floodfill(1045,185,BLACK);

setcolor(0);// draws the bottom left circle of the die.
circle(975,185,9);
setfillstyle(SOLID_FILL, BLACK);
floodfill(975,185,BLACK);
}
if (x==5){// draws the die when the number rolled is five.
line(50,200,950,200);// creates the square die.
line(50,350,950,350);
line(50,500,950,500);
line(50,650,950,650);

setcolor(0);// draws the top left circle of the die.
circle(975,115,9);
setfillstyle(SOLID_FILL, BLACK);
floodfill(975,115,BLACK);

setcolor(0);// draws the top right circle of the die.
circle(1045,115,9);
setfillstyle(SOLID_FILL, BLACK);
floodfill(1045,115,BLACK);

setcolor(0);// draws the bottom right circle of the die.
circle(1045,185,9);
setfillstyle(SOLID_FILL, BLACK);
floodfill(1045,185,BLACK);

setcolor(0);// draws the bottom left circle of the die.
circle(975,185,9);
setfillstyle(SOLID_FILL, BLACK);
floodfill(975,185,BLACK);

setcolor(0);// draws the middle circle of the die.
circle(1010,150,9);
setfillstyle(SOLID_FILL, BLACK);
floodfill(1010,150,BLACK);
}
if (x==6){// draws the die when the number rolled is six.
line(50,200,950,200);
line(50,350,950,350);
line(50,500,950,500);
line(50,650,950,650);

setcolor(0);
circle(975,115,9);// draws the top left circle of the die.
setfillstyle(SOLID_FILL, BLACK);
floodfill(975,115,BLACK);

setcolor(0);
circle(1045,115,9);// draws the top right circle of the die.
setfillstyle(SOLID_FILL, BLACK);
floodfill(1045,115,BLACK);

setcolor(0);
circle(1045,185,9);// draws the bottom right circle of the die.
setfillstyle(SOLID_FILL, BLACK);
floodfill(1045,185,BLACK);

setcolor(0);
circle(975,185,9);// draws the bottom left circle of the die.
setfillstyle(SOLID_FILL, BLACK);
floodfill(975,185,BLACK);

setcolor(0);// draws the circle in between the bottom left and top left circles of the die.
circle(975,150,9);
setfillstyle(SOLID_FILL, BLACK);
floodfill(975,150,BLACK);

setcolor(0);// draws the circle between the top right and bottom right circles of the die.
circle(1045,150,9);
setfillstyle(SOLID_FILL, BLACK);
floodfill(1045,150,BLACK);
}

setcolor(BLUE);// This draws the the first ladder in the color blue.
line(400,600,550,450);
line(400,550,550,400);
line(450,500,475,525);
line(430,525,452,547);
line(473,479,495,503);
line(500,450,520,475);

setcolor(RED);// This draws the second ladder in he color red.
line(110,250,110,450);
line(155,250,155,450);
line (110,300,155,300);
line(110,340,155,340);
line(110,380,155,380);
line(110,420,155,420);

setcolor(GREEN);// This draws the first snake in the color green by combining two arc shapes.
arc(200, 225, 0, 135, 50);
arc(277, 250, 135, 0, 40);

setcolor(YELLOW);// This draws the second snake in the color yellow by combining two arc shapes.
arc(760, 515, 0, 135, 50);
arc(837, 540, 135, 0, 40);

}



