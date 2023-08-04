#include <iostream>
#include <graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");


    int i,choice;
    std::cout << "Enter your choice (1: Flag, 2:Emoji, 3: House, 4:Village): ";
    std::cin >> choice;

    switch (choice) {
    case 1:

	setcolor(GREEN);
	rectangle(50,50,220,150);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(51,51,GREEN);

	setcolor(WHITE);
	rectangle(40,40,50,300);
	setfillstyle(SOLID_FILL,BROWN);
	floodfill(41,41,WHITE);

	setcolor(RED);
	circle(130,100,30);
	setfillstyle(SOLID_FILL,RED);
	floodfill(131,101,RED);
delay(5000);


        break;


    case 2:
      setcolor(WHITE);//circle
      circle(300,300,160);
      setfillstyle(SOLID_FILL,YELLOW);
      floodfill(274,284,WHITE);

      setcolor(WHITE);//circle thick
      circle(301,300,161);
      circle(302,300,162);
      circle(303,300,163);
      circle(304,300,164);
      circle(305,300,165);
      circle(306,300,166);

      //1st eye
      setcolor(BLACK);
      circle(240,260,45);
      setfillstyle(SOLID_FILL,WHITE);
      floodfill(230,260,BLACK);

       setcolor(BLACK);
      circle(240,260,45);
      circle(240,260,46);
      circle(240,260,47);

      setcolor(BLACK);
     ellipse(240,280,0,360,20,25);
      setfillstyle(SOLID_FILL,BLACK);
      floodfill(240,280,BLACK);

      //2ND EYE
        setcolor(BLACK);
      circle(360,260,45);
      setfillstyle(SOLID_FILL,WHITE);
      floodfill(360,260,BLACK);

        setcolor(BLACK);//thick eye
      circle(360,260,45);
      circle(360,260,46);
      circle(360,260,47);

      setcolor(BLACK);
     ellipse(360,280,0,360,20,25);
      setfillstyle(SOLID_FILL,BLACK);
      floodfill(360,280,BLACK);

//mouth

       setcolor(BLACK);
     ellipse(300,390,0,180,70,40);
     ellipse(300,390,0,180,70,39);
     ellipse(300,390,0,180,70,38);
     ellipse(300,390,0,180,70,37);
     ellipse(300,390,0,180,70,36);
     ellipse(300,390,0,180,70,35);

     getch();

        break;

    case 3:
        // Draw the house
  setcolor(WHITE);
    rectangle(150, 180, 250, 300); // Main body of the house
    rectangle(250, 180, 420, 300); // Extension for another part of the house
    rectangle(180, 250, 220, 300); // First door
   // Draw the centered door in the extension part
    rectangle(320, 250, 360, 300); // Centered door



    line(200, 100, 150, 180); // Left roof slant
    line(200, 100, 250, 180); // Right roof slant
    line(200, 100, 370, 100); // Top roof horizontal
    line(370, 100, 420, 180); // Top roof slant

    // Fill the house parts with colors
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(152, 182, WHITE); // Fill main house with brown
    floodfill(252, 182, WHITE); // Fill extension with brown

    // Fill the roof with diagonal lines (slashes)
    setfillstyle(SLASH_FILL, GREEN);
    floodfill(182, 252, WHITE);

    // Fill the doors with green color using hatch pattern
    setfillstyle(SLASH_FILL, BLUE);
    floodfill(200, 105, WHITE); // Fill first door with green
    floodfill(210, 105, WHITE); // Fill first door with green
    floodfill(320, 260, WHITE); // Fill second door with green
    floodfill(330, 260, WHITE); // Fill second door with green

    // Draw the windows in the extension part
    setcolor(WHITE);
   rectangle(270, 200, 310, 240);  // First window
    rectangle(380, 200, 420, 240); // Second window (increased distance)

    // Fill the windows with white color
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(281, 201, WHITE); // Fill first window with white
    floodfill(381, 201, WHITE); // Fill second window with white (increased distance)




  getch();
    break;

         case 4:
      // HOUSE

line(150,50,200,100);
line(150,50,80,120);
line(80,120,100,120);
line(150,50,350,50);
line(350,50,400,100);
line(100,100,100,200);
line(100,200,200,200);
line(200,100,200,200);
line(400,200,400,100);
line(200,200,400,200);
line(200,100,400,100);
rectangle(130,130,170,170);
rectangle(250,130,320,200);
line(320,130,305,140);
line(305,140,305,200);
line(250,130,265,140);
line(265,140,265,200);
line(100,200,90,210);
line(90,210,190,210);
line(190,210,200,200);
line(190,210,410,210);
line(400,200,410,210);

// HOUSE COLOR

setfillstyle(8,2);
floodfill(131,131,WHITE);
setfillstyle(11,7);
floodfill(101,101,WHITE);
setfillstyle(1,12);
floodfill(163,55,WHITE);
setfillstyle(1,12);
floodfill(82,119,WHITE);
setfillstyle(3,10);
floodfill(251,121,WHITE);
setfillstyle(1,6);
floodfill(150,205,WHITE);
setfillstyle(1,6);
floodfill(250,205,WHITE);
setfillstyle(5,12);
floodfill(310,145,WHITE);
setfillstyle(5,12);
floodfill(260,145,WHITE);

// TREE

line(505,130,505,200);
line(532,130,532,200);
line(505,200,531,200);
line(480,130,560,130);
line(480,130,500,100);
line(500,100,480,100);
line(480,100,500,70);
line(500,70,480,70);
line(480,70,520,40);
line(560,130,540,100);
line(540,100,560,100);
line(560,100,540,70);
line(540,70,560,70);
line(560,70,520,40);

// COLOR TREE
setfillstyle(1,6);
floodfill(506,131,WHITE);
setfillstyle(1,2);
floodfill(501,101,WHITE);

// ROAD

line(270,210,290,390);
line(315,210,360,390);
line(0,390,290,390);
line(360,390,639,390);
line(0,410,639,410);
line(0,390,0,410);
line(639,390,639,410);
setfillstyle(1,6);
floodfill(1,391,WHITE);

// MOUNTAIN

line(100,180,0,180);
line(400,180,505,180);
line(532,180,639,180);
line(100,150,50,110);
line(50,110,0,150);
line(400,150,450,110);
line(450,110,505,150);
line(532,150,590,110);
line(590,110,639,150);
setfillstyle(1,8);
floodfill(50,150,WHITE);
setfillstyle(1,8);
floodfill(401,150,WHITE);
setfillstyle(1,8);
floodfill(535,150,WHITE);
setfillstyle(1,9);

//SKY

floodfill(0,0,WHITE);
setfillstyle(1,9);
floodfill(504,148,WHITE);
setfillstyle(1,9);
floodfill(535,132,WHITE);

// POND

ellipse(550,300,0,360,80,50);
setfillstyle(1,3);
floodfill(550,300,WHITE);

// SUN

circle(70,50,40);
setfillstyle(1,14);
floodfill(71,51,WHITE);

// GRASS COLOR

setfillstyle(1,2);
floodfill(20,250,WHITE);
setfillstyle(1,2);
floodfill(350,230,WHITE);

getch();
        break;

    default:
        std::cout << "Invalid choice";
    }

closegraph();
    return 0;
}
