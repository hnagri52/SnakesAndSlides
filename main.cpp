

#include "graphics.h"
#include <conio.h>
#include <stdio.h>
#include "design.h"
#include <time.h>
#include "player.h"

int main()
{
    int mx,my, players,count=1, turn = 0, rnum=0, storeX, i, j =1, start, p1c = 1, p2c = 1, p3c = 1, n, x,y=0;//Var to store value
    char num[2],str1[3][20];//Store name
    float x1 = 100, x2 = 100, x3 = 150, y1 = 700, y2 = 750, y3 = 725;//Store values

   initwindow(1400,900);//Initiate graphics window
   design(rnum);
   // first row of squares below. The first two coordinates represent the x and y of the top left corner and the other 2 represent the xy coordinate of the bottom right corner.

printf("Welcome to a game of snakes and ladders!\n Unfortunately, we live in the arctic where no snakes can survive, so you may not see any snakes on the board.\nInstead if you land on a slide (which looks like a snake), you will be moved backwards.\nNOTE: only 2-3 players can play this game.\nThe objective? Get to the finish line first.\n");
printf("Are you ready to have some fun? (Enter 1 to start the game) ");//Introduction
scanf("%d", &start);//Check if user is ready


while(start != 1){//Check if the user is ready to play now
    printf("\nAre you ready to have some fun now? (Enter 1 to start the game) ");
    scanf("%d", &start);
    if(start == 1) break;//If user is ready, break out of loop
}

printf("Enter the number of players:");//Enter number of players
scanf("%d", &players);
while(players<2||players>3){//Check condition to see if inputted number is within the range
    printf("oops! Re-enter the number of players. Remember that only 2-3 players are allowed.\n");
     printf("Enter the number of players:");
    scanf("%d", &players);
  }


getchar();
player(x1, y1, x2, y2, x3, y3, players);//Input players on game board
for( i = 0; i < players; i++){//Store name of each player
    printf("Enter the name of player %d:", j);
    gets(str1[i]);
    j++;
}
printf("You have successfully entered all players and their names. Open the second tab to begin the game!");//Start playing game

PLAY:
    if(players==2&&y==2){//Check condition to see whose name should be outputted
    y=0;
   }
    if(players==3&&y==3){//Check condition to see whose name should be outputted
    y=0;
    }
     settextstyle(8,HORIZ_DIR,2);//Print Name
     setcolor(WHITE);
     outtextxy(1100,220,str1[y++]);
     setcolor(WHITE);
     outtextxy(990,250,"It's your turn! Click the die!");


 while(count==1){//Code for clicking dice and getting a number
    getmouseclick(WM_LBUTTONDOWN,mx,my);
  if(GetAsyncKeyState(VK_LBUTTON)){
    if ((mx > 960) && (mx < 1060) && (my > 100) && (my < 200) && count==1){
        rnum = random();
        sprintf(num, "%d", rnum);
        setcolor(WHITE);
        outtextxy(1060,400,"You rolled a:");
        outtextxy(1150, 430, num);
        break;
    }
  }
}

if(turn == 0){
    p1c += rnum;
    if(p1c == 30){
        delay(3000);
        goto END;
    }
    if(p1c > 30){
        n = p1c - 30;
        x = rnum - n;

        storeX = 150 * x;
        x1 += storeX;

        delay(2000);
        cleardevice();
        design(rnum);
        player(x1, y1, x2, y2, x3, y3, players);

        storeX = 150 * n;
        x1 -= storeX;

        p1c = p1c - 2*n;
        goto TURN;
    }
    storeX = rnum * 150;
    x1 += storeX;
    if(x1 > 850){
        x1 -= 900;
        y1 -= 150;
    }
    if((p1c == 9)|| (p1c == 13)||(p1c == 17)|| (p1c == 25)){
        delay(1000);
        cleardevice();
        design(rnum);
        player(x1, y1, x2, y2, x3, y3, players);
        if(p1c == 9){
            p1c += 7;
            storeX = 7 * 150;
            x1 += storeX;
            if(x1 > 850){
                x1 -= 900;
                y1 -= 150;
            }}
        if(p1c == 13){
            p1c += 6;
            storeX = 6 * 150;
            x1 += storeX;
            if(x1 > 850){
                x1 -= 900;
                y1 -= 150;
            }}
        if(p1c == 25){
            y1 += 150;
            x1 += 150;
            p1c -= 5;
        }
        if(p1c == 17){
            y1 += 150;
            x1 += 150;
            p1c -= 5;
        }}}
if(turn == 1){
    p2c += rnum;
    if(p2c == 30){
        delay(2000);
       goto END;
    }
    if(p2c > 30){
        n = p2c - 30;
        x = rnum - n;

        storeX = 150 * x;
        x2 += storeX;

        delay(2000);
        cleardevice();
        design(rnum);
        player(x1, y1, x2, y2, x3, y3, players);

        storeX = 150 * n;
        x2 -= storeX;

        p2c = p2c - 2*n;
        goto TURN;
    }
    storeX = rnum * 150;
    x2 += storeX;
    if(x2 > 850){
        x2 -= 900;
        y2 -= 150;
    }
    if((p2c == 9)|| (p2c == 13)||(p2c == 17)|| (p2c == 25)){
        delay(2000);
        cleardevice();
        design(rnum);
        player(x1, y1, x2, y2, x3, y3, players);
        if(p2c == 9){
            p2c += 7;
            storeX = 7 * 150;
            x2 += storeX;
            if(x2 > 850){
                x2 -= 900;
                y2 -= 150;
            }}
        if(p2c == 13){
            p2c += 6;
            storeX = 6 * 150;
            x2 += storeX;
            if(x2 > 850){
                x2 -= 900;
                y2 -= 150;
            }}
        if(p2c == 25){
            y2 += 150;
            x2 += 150;
            p2c -= 5;
        }
        if(p2c == 17){
            y2 += 150;
            x2 += 150;
            p2c -= 5;
        }}}
if(turn == 2){
    p3c += rnum;
    if(p3c == 30){
        delay(2000);
        goto END;
    }
    if(p3c > 30){
        n = p3c - 30;
        x = rnum - n;

        storeX = 150 * x;
        x3 += storeX;

        delay(2000);
        cleardevice();
        design(rnum);
        player(x1, y1, x2, y2, x3, y3, players);

        storeX = 150 * n;
        x3 -= storeX;
        p3c = p3c - 2*n;
        goto TURN;
    }
    storeX = rnum * 150;
    x3 += storeX;
    if(x3 > 900){
        x3 -= 900;
        y3 -= 150;
    }
    if((p3c == 9)|| (p3c == 13)||(p3c == 17)|| (p3c == 25)){
        delay(2000);
        cleardevice();
        design(rnum);
        player(x1, y1, x2, y2, x3, y3, players);
        if(p3c == 9){
            p3c += 7;
            storeX = 7 * 150;
            x3 += storeX;
            if(x3 > 850){
                x3 -= 900;
                y3 -= 150;
            }}
        if(p3c == 13){
            p3c += 6;
            storeX = 6 * 150;
            x3 += storeX;
            if(x3 > 850){
                x3 -= 900;
                y3 -= 150;
            }}
        if(p3c == 25){
            y3 += 150;
            x3 += 150;
            p3c -= 5;
        }
        if(p3c == 17){
            y3 += 150;
            x3 += 150;
            p3c -= 5;
        }}}
TURN:
turn++;
if(players == 2 && turn == 2) turn = 0;//Check condition to reset turn
if(players == 3 && turn == 3) turn = 0;//Check condition to reset turn
delay(2000);
cleardevice();//Clean game screen
design(rnum);//Rebuild game screen
player(x1, y1, x2, y2, x3, y3, players);//Put players in their new position

goto PLAY;

END: cleardevice();

if (turn==0){//Code to output winner's name
    setcolor(WHITE);
    outtextxy(600,300,"Congratulations:");
    outtextxy(700,350, str1[0]);
    outtextxy(600,700, "You won the game!");
}
if (turn==1){
    setcolor(WHITE);
    outtextxy(600,300,"Congratulations:");
    outtextxy(700,350, str1[1]);
    outtextxy(600,400, "You won the game!");
}
if (turn==2){
    setcolor(WHITE);
    outtextxy(600,300,"Congratulations:");
    outtextxy(700,350, str1[2]);
     outtextxy(600,400, "You won the game!");
}

   getch();//Get a character
   closegraph();//Stop game window
    return 0;//End program
}




