#include<iostream>
#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
	int number;
    int gd=DETECT,gm;
     int i=0,j,midy;
    initgraph(&gd,&gm,"");

	cout<<"\t\t\t**********Sayed Mynul Islam Apu**********";
	cout<<"\n\t\t\t  ********** CSE2001019168**********";
	cout<<"\n\n\t\t\t Project list :";
	cout<<"\n\n\t\t\t\t 1.Emoji";
	cout<<"\n\t\t\t\t 2.Bangladeshi Flag";
	cout<<"\n\t\t\t\t 3.Duplex House";
	cout<<"\n\t\t\t\t 4.National Memorial of Bangladesh";
	cout<<"\n\t\t\t\t 5.Enimation Of car";
	cout<<"\n\t\t\t\t 6.Star";
	cout<<"\n\n\n\n\t\t Please enter the project number for see this project \n\n\t\t\t";
	cin>>number;
	switch (number)
		{
    case 1:
        //S
    ellipse(60,37,40,270,5,5);ellipse(60,47,200,90,5,5);delay(300);
//A
    line(80,30,70,50);line(80,30,90,50);line(75,40,85,40);delay(300);
//Y
    line(90,30,100,40);line(110,30,100,40);line(100,40,100,50);delay(300);
//E
    line(114,30,114,50);line(114,30,122,30);line(114,40,120,40);line(114,50,122,50);delay(300);
//D
    line(126,30,126,50);
    ellipse(126,40,270,90,10,10);delay(300);
//M
   line(146,30,146,50);line(156,30,156,50);line(146,30,151,35);line(151,35,156,30);delay(300);
//Y
    line(160,30,170,40);line(180,30,170,40);line(170,40,170,50);delay(300);
//N
    line(184,30,184,50);line(184,30,194,50);line(194,30,194,50);delay(300);
//U
    line(198,30,198,45);line(208,30,208,45);delay(300);
    ellipse(203,44,180,360,6,10);
//L
    line(212,30,212,50);line(212,50,222,50);delay(300);
//I
    line(236,30,246,30);line(236,50,246,50);line(241,30,241,50);
//S
    ellipse(254,37,40,270,5,5);ellipse(254,47,200,90,5,5);delay(300);
//L
    line(264,30,264,50);line(264,50,274,50);delay(300);
//A
    line(288,30,278,50);line(288,30,298,50);line(283,40,293,40);delay(300);
//M
   line(302,30,302,50);line(312,30,312,50);line(302,30,307,35);line(307,35,312,30);delay(300);
//A
    line(332,30,322,50);line(332,30,342,50);line(327,40,337,40);delay(300);
//P
    line(346,30,346,50);ellipse(346,35,270,90,10,5);delay(300);
//U
    line(360,30,360,45);line(370,30,370,45);
     ellipse(365,44,180,360,6,10);
     //ID
       //C
   ellipse(60,70,50,300,5,6);
    //s
  ellipse(68,68,40,270,3,3);
  ellipse(68,73,200,90,3,3);delay(300);
    //E
    line(74,65,74,75);line(74,65,80,65);delay(300);
    line(74,70,78,70);line(74,75,80,75);
    //2delay(300);delay(300);
         ellipse(91,68,0,180,4,4);
         line(95,68,87,75);delay(300);
         line(87,75,95,75);
         //0
         ellipse(101,70,0,360,4,6);delay(300);
         //0delay(300);
         ellipse(111,70,0,360,4,6);
         //1delay(300);
         line(118,65,118,75);delay(300);
              //0
         ellipse(128,70,0,360,4,6);delay(300);
                  //1
         line(135,65,135,75); delay(300);
         //9
    circle(142,68,3);delay(300);
    ellipse(143,72,240,60,3,5);
    line(140,77,142,77);delay(300);
                  //1
         line(150,65,150,75);
         //6
      ellipse(158,70,80,270,4,6);delay(300);
      circle(159,74,2);
      line(158,64,159,64);delay(300);
      //8
       circle(167,68,3);delay(300);
    circle(167,74,3);

//emoji:
     setcolor(14);

   circle(200,270,120);
   ellipse(240,230,0,360,20,30);
   ellipse(160,230,0,360,20,30);
   setfillstyle(1,14);
   floodfill(130,200,14);

   setcolor(0);
   ellipse(200,370,30,150,70,65);
   ellipse(200,371,30,150,70,65);
   ellipse(200,369,30,150,70,65);


    getch();
    closegraph();
        break;

              case 2:
        //S
    ellipse(60,37,40,270,5,5);ellipse(60,47,200,90,5,5);delay(300);
//A
    line(80,30,70,50);line(80,30,90,50);line(75,40,85,40);delay(300);
//Y
    line(90,30,100,40);line(110,30,100,40);line(100,40,100,50);delay(300);
//E
    line(114,30,114,50);line(114,30,122,30);line(114,40,120,40);line(114,50,122,50);delay(300);
//D
    line(126,30,126,50);
    ellipse(126,40,270,90,10,10);delay(300);
//M
   line(146,30,146,50);line(156,30,156,50);line(146,30,151,35);line(151,35,156,30);delay(300);
//Y
    line(160,30,170,40);line(180,30,170,40);line(170,40,170,50);delay(300);
//N
    line(184,30,184,50);line(184,30,194,50);line(194,30,194,50);delay(300);
//U
    line(198,30,198,45);line(208,30,208,45);delay(300);
    ellipse(203,44,180,360,6,10);
//L
    line(212,30,212,50);line(212,50,222,50);delay(300);
//I
    line(236,30,246,30);line(236,50,246,50);line(241,30,241,50);
//S
    ellipse(254,37,40,270,5,5);ellipse(254,47,200,90,5,5);delay(300);
//L
    line(264,30,264,50);line(264,50,274,50);delay(300);
//A
    line(288,30,278,50);line(288,30,298,50);line(283,40,293,40);delay(300);
//M
   line(302,30,302,50);line(312,30,312,50);line(302,30,307,35);line(307,35,312,30);delay(300);
//A
    line(332,30,322,50);line(332,30,342,50);line(327,40,337,40);delay(300);
//P
    line(346,30,346,50);ellipse(346,35,270,90,10,5);delay(300);
//U
    line(360,30,360,45);line(370,30,370,45);
     ellipse(365,44,180,360,6,10);
     //ID
       //C
   ellipse(60,70,50,300,5,6);
    //s
  ellipse(68,68,40,270,3,3);
  ellipse(68,73,200,90,3,3);delay(300);
    //E
    line(74,65,74,75);line(74,65,80,65);delay(300);
    line(74,70,78,70);line(74,75,80,75);
    //2delay(300);delay(300);
         ellipse(91,68,0,180,4,4);
         line(95,68,87,75);delay(300);
         line(87,75,95,75);
         //0
         ellipse(101,70,0,360,4,6);delay(300);
         //0delay(300);
         ellipse(111,70,0,360,4,6);
         //1delay(300);
         line(118,65,118,75);delay(300);
              //0
         ellipse(128,70,0,360,4,6);delay(300);
                  //1
         line(135,65,135,75); delay(300);
         //9
    circle(142,68,3);delay(300);
    ellipse(143,72,240,60,3,5);
    line(140,77,142,77);delay(300);
                  //1
         line(150,65,150,75);
         //6
      ellipse(158,70,80,270,4,6);delay(300);
      circle(159,74,2);
      line(158,64,159,64);delay(300);
      //8
       circle(167,68,3);delay(300);
    circle(167,74,3);


    setcolor(8);
    line(180,120,500,120);delay(300);
    line(180,230,500,230);
    ellipse(180,175,270,90,12,56);delay(300);
    line(500,120,500,230);
    rectangle(165,444,191,448);delay(300);
    rectangle(170,440,185,444);delay(300);
    rectangle(176,113,180,440);delay(300);

    circle(340,175,40);
    setfillstyle(SOLID_FILL,2);delay(300);
    floodfill(450,200,8);
        setfillstyle(SOLID_FILL,7);delay(300);
    floodfill(166,445,8);  setfillstyle(SOLID_FILL,7);delay(300);
    floodfill(171,441,8);
      setfillstyle(SOLID_FILL,3);delay(300);
    floodfill(177,114,8);
    setfillstyle(SOLID_FILL,4);delay(300);
    floodfill(340,175,8);delay(300);
    getch();
    closegraph();
break;
      case 3:
        //S
    ellipse(60,37,40,270,5,5);ellipse(60,47,200,90,5,5);delay(300);
//A
    line(80,30,70,50);line(80,30,90,50);line(75,40,85,40);delay(300);
//Y
    line(90,30,100,40);line(110,30,100,40);line(100,40,100,50);delay(300);
//E
    line(114,30,114,50);line(114,30,122,30);line(114,40,120,40);line(114,50,122,50);delay(300);
//D
    line(126,30,126,50);
    ellipse(126,40,270,90,10,10);delay(300);
//M
   line(146,30,146,50);line(156,30,156,50);line(146,30,151,35);line(151,35,156,30);delay(300);
//Y
    line(160,30,170,40);line(180,30,170,40);line(170,40,170,50);delay(300);
//N
    line(184,30,184,50);line(184,30,194,50);line(194,30,194,50);delay(300);
//U
    line(198,30,198,45);line(208,30,208,45);delay(300);
    ellipse(203,44,180,360,6,10);
//L
    line(212,30,212,50);line(212,50,222,50);delay(300);
//I
    line(236,30,246,30);line(236,50,246,50);line(241,30,241,50);
//S
    ellipse(254,37,40,270,5,5);ellipse(254,47,200,90,5,5);delay(300);
//L
    line(264,30,264,50);line(264,50,274,50);delay(300);
//A
    line(288,30,278,50);line(288,30,298,50);line(283,40,293,40);delay(300);
//M
   line(302,30,302,50);line(312,30,312,50);line(302,30,307,35);line(307,35,312,30);delay(300);
//A
    line(332,30,322,50);line(332,30,342,50);line(327,40,337,40);delay(300);
//P
    line(346,30,346,50);ellipse(346,35,270,90,10,5);delay(300);
//U
    line(360,30,360,45);line(370,30,370,45);
     ellipse(365,44,180,360,6,10);
     //ID
       //C
   ellipse(60,70,50,300,5,6);
    //s
  ellipse(68,68,40,270,3,3);
  ellipse(68,73,200,90,3,3);delay(300);
    //E
    line(74,65,74,75);line(74,65,80,65);delay(300);
    line(74,70,78,70);line(74,75,80,75);
    //2delay(300);delay(300);
         ellipse(91,68,0,180,4,4);
         line(95,68,87,75);delay(300);
         line(87,75,95,75);
         //0
         ellipse(101,70,0,360,4,6);delay(300);
         //0delay(300);
         ellipse(111,70,0,360,4,6);
         //1delay(300);
         line(118,65,118,75);delay(300);
              //0
         ellipse(128,70,0,360,4,6);delay(300);
                  //1
         line(135,65,135,75); delay(300);
         //9
    circle(142,68,3);delay(300);
    ellipse(143,72,240,60,3,5);
    line(140,77,142,77);delay(300);
                  //1
         line(150,65,150,75);
         //6
      ellipse(158,70,80,270,4,6);delay(300);
      circle(159,74,2);
      line(158,64,159,64);delay(300);
      //8
       circle(167,68,3);delay(300);
    circle(167,74,3);
setcolor(15);
line(582,380,620,380);
line(601,300,620,380);
delay(300);
line(601,300,582,380);
line(596,380,596,450);
delay(300);
line(606,380,606,450);
line(596,450,606,450);
delay(300);
line(50,450,565,450);
rectangle(150,310,470,450);
//door
line(240,450,240,375);line(385,450,385,375);
ellipse(313,379,7,175,73,40);
line(245,450,245,375);line(380,450,380,377);ellipse(313,379,3,175,68,35);
delay(300);
rectangle(245,375,380,450);line(310,377,310,450);
circle(318,410,3); circle(302,410,3);
delay(300);
line(565,450,565,313);line(465,310,515,286);line(574,312,515,286);
delay(300);
line(469,315,515,292);line(574,318,515,292);line(574,312,574,318);
rectangle(490,325,545,435);
line(519,325,519,435);
delay(300);
line(490,355,545,355);
//Left
 line(50,450,50,314);line(40,312,95,286);line(150,310,95,286);line(40,318,95,292);line(150,317,95,292);line(40,312,40,318);
rectangle(70,325,126,435);
delay(300);
 line(99,325,99,435); line(70,355,126,355);
 delay(300);
//UPPER
rectangle(150,200,470,300);
line(150,300,150,310);line(470,300,470,310);
delay(300);
rectangle(240,290,375,300);
delay(300);
//balkuni
line(245,290,245,260);line (249,290,249,260);line(269,290,269,260);line(273,290,273,260);
delay(300);
line(294,290,294,260);line(298,290,298,260);line(321,290,321,260);line(325,290,325,260);
delay(300);
line (346, 290, 346, 260);line (350,290,350,260);line(366,290, 366, 260);line(370,290,370,260);
delay(300);
rectangle(242,259,374,256);rectangle(260,220,353,256);rectangle(264,224,349,256);
delay(300);
//chall
line (130,207,310,140);line(130,200,310,130);line(130, 207, 136, 200);line( 310, 140, 488, 207);line(310, 130, 488,200);
line(488,207, 488, 200);line(60, 201, 60, 303);line( 40, 200, 129, 200);
delay(300);
rectangle(80,230,130,280);rectangle(85,235,125,275);
delay(300);
line (556, 201, 556, 303);line(577, 200, 487,200); rectangle(487, 230, 538, 280);rectangle(492,235, 533,275);
line (60, 143, 275, 143);line(345,143,555,143);
line(60,143,40,200);line(556,143,577,200);rectangle(490, 117, 520, 143);rectangle(485,111, 525, 117);
delay(300);
//MOON
circle(605,55,25);
delay(300);
//all STAr
outtextxy(500,30,"*");
delay(300);
outtextxy(50,110,"*");
delay(300);
outtextxy(550,50,"*");
delay(300);
outtextxy(430,90,"*");
delay(300);
outtextxy(220,90,"*");
delay(300);
outtextxy(120,100,"*");
delay(300);
outtextxy(400,30,"*");
delay(300);
outtextxy(330,90,"*");
setfillstyle(SOLID_FILL,15);
 floodfill(591,47,15);

            setfillstyle(SOLID_FILL,8);
    floodfill(100,350,15);
              setfillstyle(SOLID_FILL,3);
    floodfill(70,150,15);
              setfillstyle(SOLID_FILL,3);
    floodfill(550,150,15);
                setfillstyle(SOLID_FILL,7);
    floodfill(160,220,15);
                    setfillstyle(SOLID_FILL,7);
    floodfill(140,220,15);
                    setfillstyle(SOLID_FILL,7);
    floodfill(480,280,15);
                setfillstyle(SOLID_FILL,8);
    floodfill(100,380,15);
                    setfillstyle(SOLID_FILL,8);
    floodfill(80,380,15);
                setfillstyle(SOLID_FILL,8);
    floodfill(80,350,15);
            setfillstyle(SOLID_FILL,8);
    floodfill(300,400,15);
    delay(300);
            setfillstyle(SOLID_FILL,7);
    floodfill(475,400,15);
    delay(300);
            setfillstyle(SOLID_FILL,8);
    floodfill(241,380,15);
    delay(300);
            setfillstyle(SOLID_FILL,7);
    floodfill(180,420,15);
            setfillstyle(SOLID_FILL,7);
    floodfill(60,430,15);
    delay(300);
             setfillstyle(SOLID_FILL,8);
    floodfill(300,370,15);
    delay(300);
     setfillstyle(SOLID_FILL,8);
    floodfill(540,430,15);
    delay(300);            setfillstyle(SOLID_FILL,8);
    floodfill(500,330,15);setfillstyle(SOLID_FILL,8);
    floodfill(500,430,15);
    setfillstyle(SOLID_FILL,8);
    floodfill(530,330,15);
    delay(300);
              setfillstyle(SOLID_FILL,6);
    floodfill(250,190,15);
              setfillstyle(SOLID_FILL,11);
    floodfill(86,236,15);
              setfillstyle(SOLID_FILL,8);
    floodfill(493,112,15);          setfillstyle(SOLID_FILL,8);
    floodfill(488,232,15);
              setfillstyle(SOLID_FILL,11);
    floodfill(493,236,15);setfillstyle(SOLID_FILL,8);
    floodfill(81,231,15);
    setfillstyle(SOLID_FILL,2);
    floodfill(598,378,15);
    setfillstyle(SOLID_FILL,6);
    floodfill(597,449,15);
        getch();
    closegraph();
     break;
         case 4:
        //S
    ellipse(60,37,40,270,5,5);ellipse(60,47,200,90,5,5);delay(300);
//A
    line(80,30,70,50);line(80,30,90,50);line(75,40,85,40);delay(300);
//Y
    line(90,30,100,40);line(110,30,100,40);line(100,40,100,50);delay(300);
//E
    line(114,30,114,50);line(114,30,122,30);line(114,40,120,40);line(114,50,122,50);delay(300);
//D
    line(126,30,126,50);
    ellipse(126,40,270,90,10,10);delay(300);
//M
   line(146,30,146,50);line(156,30,156,50);line(146,30,151,35);line(151,35,156,30);delay(300);
//Y
    line(160,30,170,40);line(180,30,170,40);line(170,40,170,50);delay(300);
//N
    line(184,30,184,50);line(184,30,194,50);line(194,30,194,50);delay(300);
//U
    line(198,30,198,45);line(208,30,208,45);delay(300);
    ellipse(203,44,180,360,6,10);
//L
    line(212,30,212,50);line(212,50,222,50);delay(300);
//I
    line(236,30,246,30);line(236,50,246,50);line(241,30,241,50);
//S
    ellipse(254,37,40,270,5,5);ellipse(254,47,200,90,5,5);delay(300);
//L
    line(264,30,264,50);line(264,50,274,50);delay(300);
//A
    line(288,30,278,50);line(288,30,298,50);line(283,40,293,40);delay(300);
//M
   line(302,30,302,50);line(312,30,312,50);line(302,30,307,35);line(307,35,312,30);delay(300);
//A
    line(332,30,322,50);line(332,30,342,50);line(327,40,337,40);delay(300);
//P
    line(346,30,346,50);ellipse(346,35,270,90,10,5);delay(300);
//U
    line(360,30,360,45);line(370,30,370,45);
     ellipse(365,44,180,360,6,10);
     //ID
       //C
   ellipse(60,70,50,300,5,6);
    //s
  ellipse(68,68,40,270,3,3);
  ellipse(68,73,200,90,3,3);delay(300);
    //E
    line(74,65,74,75);line(74,65,80,65);delay(300);
    line(74,70,78,70);line(74,75,80,75);
    //2delay(300);delay(300);
         ellipse(91,68,0,180,4,4);
         line(95,68,87,75);delay(300);
         line(87,75,95,75);
         //0
         ellipse(101,70,0,360,4,6);delay(300);
         //0delay(300);
         ellipse(111,70,0,360,4,6);
         //1delay(300);
         line(118,65,118,75);delay(300);
              //0
         ellipse(128,70,0,360,4,6);delay(300);
                  //1
         line(135,65,135,75); delay(300);
         //9
    circle(142,68,3);delay(300);
    ellipse(143,72,240,60,3,5);
    line(140,77,142,77);delay(300);
                  //1
         line(150,65,150,75);
         //6
      ellipse(158,70,80,270,4,6);delay(300);
      circle(159,74,2);
      line(158,64,159,64);delay(300);
      //8
       circle(167,68,3);delay(300);
    circle(167,74,3);

    //MAIN CODE
    rectangle(10,90,625,470);  //full box
         setcolor(BROWN);
     rectangle(10,260,625,280);      //brown box
    setfillstyle(SOLID_FILL,BROWN);
        floodfill(11,279,BROWN);            //brown box
    delay(300);
       setcolor(GREEN);                                         //baground green
          rectangle(10,170,625,259);
                   setfillstyle(INTERLEAVE_FILL,GREEN);
    floodfill(11,258,GREEN);                                //baground green
    delay(300);
         rectangle(10,90,625,259);                            //back black colour
     setcolor(BLACK);
                    setfillstyle(SOLID_FILL,BLACK);
    floodfill(11,91,BLACK);                                   //back black colour
    delay(300);
    setcolor(15);
    line(157,260,457,260);delay(300);                                // under line
        line(307,260,307,100);delay(300);                               //Middle line
         //middle left to left
    line(282,260,307,100);
                  setfillstyle(SOLID_FILL,8);
    floodfill(287,257,15);
    line(257,260,307,110);delay(300);
                   setfillstyle(SOLID_FILL,8);
    floodfill(268,257,15);
    line(232,260,307,120);delay(300);
    setfillstyle(SOLID_FILL,8);delay(300);
    floodfill(239,257,15);
    line(207,260,307,130);delay(300);
     floodfill(216,257,15);  setfillstyle(SOLID_FILL,8);
    line(182,260,307,140);
        floodfill(190,257,15);    setfillstyle(SOLID_FILL,8);delay(300);
    line(157,260,307,150);delay(300);
   setfillstyle(SOLID_FILL,8);
    floodfill(168,257,15);
      //middle right to right start
    line(332,260,307,100);delay(300);
          setfillstyle(SOLID_FILL,8);
    floodfill(320,257,15);
    line(357,260,307,110);
                setfillstyle(SOLID_FILL,8);delay(300);
   floodfill(350,257,15);
    line(382,260,307,120);
                setfillstyle(SOLID_FILL,8);delay(300);
    floodfill(370,257,15);
    line(407,260,307,130);

            setfillstyle(SOLID_FILL,8);
    floodfill(400,257,15);
    line(432,260,307,140);delay(300);
              setfillstyle(SOLID_FILL,8);delay(300);
    floodfill(420,257,15);
    line(457,260,307,150);
             setfillstyle(SOLID_FILL,8);
    floodfill(450,257,15);
//line(10,280,625,280);delay(300);
//right side big rectangle
    setcolor(8);
    rectangle(452,280,625,470);
    setfillstyle(SOLID_FILL,8);
floodfill(455,290,8);
//right side small rectangle
 setcolor(GREEN);
    rectangle(472,310,595,440);
    setfillstyle(INTERLEAVE_FILL,GREEN);
    floodfill(482,320,GREEN);delay(300);
    //left side big rectangle
        setcolor(8);
    rectangle(10,280,172,470);
                     setfillstyle(SOLID_FILL,8);
    floodfill(15,290,8);
    //left side small rectangle
    setcolor(GREEN);
    rectangle(40,310,152,440);
    setfillstyle(INTERLEAVE_FILL,GREEN);delay(300);
    floodfill(44,320,GREEN);
       // left side rectangle c 7
        setcolor(8);
    rectangle(172,280,202,470);
        setfillstyle(SOLID_FILL,7);delay(300);
    floodfill(179,290,8);delay(300);
    // right side rectangle c 7
            setcolor(8);
    rectangle(452,280,422,470);
        setfillstyle(SOLID_FILL,7);delay(300);
    floodfill(430,290,8);
    // middle side rectangle c 3
                setcolor(8);
    rectangle(277,310,337,470);delay(300);
                     setfillstyle(SOLID_FILL,3);
    floodfill(297,320,8);
   // upper
    rectangle(202,280,422,310);
                            setfillstyle(SOLID_FILL,8);
    floodfill(205,290,8);
     //right
        rectangle(202,310,277,470);
                  setfillstyle(SOLID_FILL,8);delay(300);
    floodfill(205,320,8);
     //left
   rectangle(337,310,422,470);
              setfillstyle(SOLID_FILL,8);
    floodfill(342,320,8);
    //flag start
     //base
    rectangle(297,460,317,470);
     setfillstyle(SOLID_FILL,8);
    floodfill(299,465,8);
    //kathi
      rectangle(304,360,310,460);
                   setfillstyle(SOLID_FILL,14);delay(300);
    floodfill(306,370,8);
    //red circle in flag
    setcolor(2);delay(300);
    circle(340,380,10);
             setfillstyle(SOLID_FILL,4);
    floodfill(340,380,2);delay(300);
    //flag green
             setcolor(2);
     rectangle(310,360,370,400);
        setfillstyle(SOLID_FILL,2);
    floodfill(315,370,2);
    //star
         setcolor(15);
    outtextxy(500,30,"*");
delay(300);
outtextxy(50,110,"*");
delay(300);
outtextxy(550,50,"*");
delay(300);
outtextxy(430,90,"*");
delay(300);
outtextxy(220,90,"*");
delay(300);
outtextxy(120,100,"*");
delay(300);
outtextxy(400,30,"*");
delay(300);
outtextxy(330,90,"*");
//moon
circle(600,120,25);
         setfillstyle(SOLID_FILL,15);
    floodfill(600,120,15);
delay(300);

         getch();
     closegraph();
        break;
    case 5:
    initwindow (1250,700);
    midy=getmaxy()/2;                   //midle position of the yxies

        //S
    ellipse(60,37,40,270,5,5);ellipse(60,47,200,90,5,5);delay(300);
//A
    line(80,30,70,50);line(80,30,90,50);line(75,40,85,40);delay(300);
//Y
    line(90,30,100,40);line(110,30,100,40);line(100,40,100,50);delay(300);
//E
    line(114,30,114,50);line(114,30,122,30);line(114,40,120,40);line(114,50,122,50);delay(300);
//D
    line(126,30,126,50);
    ellipse(126,40,270,90,10,10);delay(300);
//M
   line(146,30,146,50);line(156,30,156,50);line(146,30,151,35);line(151,35,156,30);delay(300);
//Y
    line(160,30,170,40);line(180,30,170,40);line(170,40,170,50);delay(300);
//N
    line(184,30,184,50);line(184,30,194,50);line(194,30,194,50);delay(300);
//U
    line(198,30,198,45);line(208,30,208,45);delay(300);
    ellipse(203,44,180,360,6,10);
//L
    line(212,30,212,50);line(212,50,222,50);delay(300);
//I
    line(236,30,246,30);line(236,50,246,50);line(241,30,241,50);
//S
    ellipse(254,37,40,270,5,5);ellipse(254,47,200,90,5,5);delay(300);
//L
    line(264,30,264,50);line(264,50,274,50);delay(300);
//A
    line(288,30,278,50);line(288,30,298,50);line(283,40,293,40);delay(300);
//M
   line(302,30,302,50);line(312,30,312,50);line(302,30,307,35);line(307,35,312,30);delay(300);
//A
    line(332,30,322,50);line(332,30,342,50);line(327,40,337,40);delay(300);
//P
    line(346,30,346,50);ellipse(346,35,270,90,10,5);delay(300);
//U
    line(360,30,360,45);line(370,30,370,45);
     ellipse(365,44,180,360,6,10);
     //ID
       //C
   ellipse(60,70,50,300,5,6);
    //s
  ellipse(68,68,40,270,3,3);
  ellipse(68,73,200,90,3,3);delay(300);
    //E
    line(74,65,74,75);line(74,65,80,65);delay(300);
    line(74,70,78,70);line(74,75,80,75);
    //2delay(300);delay(300);
         ellipse(91,68,0,180,4,4);
         line(95,68,87,75);delay(300);
         line(87,75,95,75);
         //0
         ellipse(101,70,0,360,4,6);delay(300);
         //0delay(300);
         ellipse(111,70,0,360,4,6);
         //1delay(300);
         line(118,65,118,75);delay(300);
              //0
         ellipse(128,70,0,360,4,6);delay(300);
                  //1
         line(135,65,135,75); delay(300);
         //9
    circle(142,68,3);delay(300);
    ellipse(143,72,240,60,3,5);
    line(140,77,142,77);delay(300);
                  //1
         line(150,65,150,75);
         //6
      ellipse(158,70,80,270,4,6);delay(300);
      circle(159,74,2);
      line(158,64,159,64);delay(300);
      //8
       circle(167,68,3);delay(300);
    circle(167,74,3);

  pieslice(0,500,0,90,30);          //wheel
    while(1)                        //it is for mooving the car
    {
        i++;
        if(i>1000)
        {
            i=0;
        }
        setcolor(7);
        setfillstyle(SOLID_FILL,7);
        //First wheel
         pieslice (0+i,500,0-i,90-i,30);                //+i use for line left to right
         pieslice (0+i, 500, 180-i, 270-i,30);          //-i use for rotate the wheel all angel
        circle(0+i, 500, 30);
        arc(0+i, 500, 0, 180,40);
//Second wheel
       pieslice (300 + i, 500, 0-i,90-i,30);
         pieslice (300+i, 500, 180-i, 270-i,30);
         circle (300+i,500,30);
         arc (300+i, 500, 0, 180, 40);
//car
         line (40+i, 500, 260+i,500);       //center
        line (-200+i, 500, -40+i, 500);     //back side of car
        line (340 +i, 500, 540+i, 500);     //frond line of car
        line (-200+i, 500,-200+i,400);      //hight of the back side
        line (-200+i,400, -110+i, 380);     //back side body
         line (-110+i,380,-30+i,270);        //back side body

        line (-30+i, 270, 210+i,270);           //upper side of car
        line (210+i, 270, 320+i,380);           //frond  of car
        line (320+i,380,500+ i,410);            //frond line of car
        line (500+i,410,540+i,500);

    floodfill(5+i,midy+20,7);               //color of whole car
//back side glass
      setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);

line (-90+i, 380, -20+i, 280);
line (-20+i, 280, 80+i, 280);
line (80+i, 280, 80+i, 380);
line (-90+i, 380, 80+i, 380);
floodfill(30+i,midy-20, BLACK);
//frond side glass
line (200+ i, 280, 300+i, 380);
 line (100+i, 280, 200+i, 280);
line (100+ i, 280, 100+i, 380);
 line(100+i, 380, 300+i, 380);
floodfill (230+i, midy-20, BLACK);

setcolor (7);
//road
line (0,531,1260,531);
line (0,400,1260,400);

         delay(30);
         cleardevice();
    }
       getch();
    closegraph();
        break;
         case 6:
        //S
    ellipse(60,37,40,270,5,5);ellipse(60,47,200,90,5,5);delay(300);
//A
    line(80,30,70,50);line(80,30,90,50);line(75,40,85,40);delay(300);
//Y
    line(90,30,100,40);line(110,30,100,40);line(100,40,100,50);delay(300);
//E
    line(114,30,114,50);line(114,30,122,30);line(114,40,120,40);line(114,50,122,50);delay(300);
//D
    line(126,30,126,50);
    ellipse(126,40,270,90,10,10);delay(300);
//M
   line(146,30,146,50);line(156,30,156,50);line(146,30,151,35);line(151,35,156,30);delay(300);
//Y
    line(160,30,170,40);line(180,30,170,40);line(170,40,170,50);delay(300);
//N
    line(184,30,184,50);line(184,30,194,50);line(194,30,194,50);delay(300);
//U
    line(198,30,198,45);line(208,30,208,45);delay(300);
    ellipse(203,44,180,360,6,10);
//L
    line(212,30,212,50);line(212,50,222,50);delay(300);
//I
    line(236,30,246,30);line(236,50,246,50);line(241,30,241,50);
//S
    ellipse(254,37,40,270,5,5);ellipse(254,47,200,90,5,5);delay(300);
//L
    line(264,30,264,50);line(264,50,274,50);delay(300);
//A
    line(288,30,278,50);line(288,30,298,50);line(283,40,293,40);delay(300);
//M
   line(302,30,302,50);line(312,30,312,50);line(302,30,307,35);line(307,35,312,30);delay(300);
//A
    line(332,30,322,50);line(332,30,342,50);line(327,40,337,40);delay(300);
//P
    line(346,30,346,50);ellipse(346,35,270,90,10,5);delay(300);
//U
    line(360,30,360,45);line(370,30,370,45);
     ellipse(365,44,180,360,6,10);
     //ID
       //C
   ellipse(60,70,50,300,5,6);
    //s
  ellipse(68,68,40,270,3,3);
  ellipse(68,73,200,90,3,3);delay(300);
    //E
    line(74,65,74,75);line(74,65,80,65);delay(300);
    line(74,70,78,70);line(74,75,80,75);
    //2
         ellipse(91,68,0,180,4,4);
         line(95,68,87,75);delay(300);
         line(87,75,95,75);
        //0
         ellipse(101,70,0,360,4,6);delay(300);
        //0delay(300);
         ellipse(111,70,0,360,4,6);
        //1delay(300);
         line(118,65,118,75);delay(300);
        //0
         ellipse(128,70,0,360,4,6);delay(300);
        //1
         line(135,65,135,75); delay(300);
         //9
    circle(142,68,3);delay(300);
    ellipse(143,72,240,60,3,5);
    line(140,77,142,77);delay(300);
                  //1
         line(150,65,150,75);
         //6
      ellipse(158,70,80,270,4,6);delay(300);
      circle(159,74,2);
      line(158,64,159,64);delay(300);
      //8
       circle(167,68,3);delay(300);
    circle(167,74,3);
    delay(300);delay(300);
    delay(300);delay(300);
    setcolor(15);
    line(300,150,200,300);delay(300);
    line(300,150,400,300);delay(300);
    line(200,300,400,300);delay(300);
    line(300,350,200,200);delay(300);
    line(300,350,400,200);delay(300);
    line(200,200,400,200);delay(300);

   setfillstyle(SOLID_FILL,3);
    floodfill(300,155,15);delay(300);
    setfillstyle(SOLID_FILL,9);
    floodfill(205,205,15);delay(300);
    setfillstyle(SOLID_FILL,10);
    floodfill(395,205,15);delay(300);
    setfillstyle(SOLID_FILL,11);
    floodfill(205,295,15);delay(300);
    setfillstyle(SOLID_FILL,12);
    floodfill(300,340,15);delay(300);
    setfillstyle(SOLID_FILL,13);
    floodfill(395,295,15);delay(300);
    setfillstyle(SOLID_FILL,15);
    floodfill(300,210,15);delay(300);

    getch();
    closegraph();
        break;
     default:
          cout<<"\t\t\t\t\t**********Sorry you enter the Wrong Number**********";
          break;

    }

return 0;
	}
