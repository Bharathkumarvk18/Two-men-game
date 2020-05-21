#include<windows.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<GL/glut.h>
#include<string.h>
void mouse(int,int,int,int);
void stringmatch(char,char*);
int ds=0,q=0,score=0,mis=0;
int dif=0;
char let;
char ans[20],p[20];
char *ans1="ampere";
char *ans2="blue",*ans3="python",*ans4="chrome",*ans5="billgates";
char *ans11="six";
char *ans22="anemometer",*ans33="sword",*ans44="dictionary",*ans55="apple";
char *ans111="kashmir";
char *ans222="angelfalls",*ans333="moon",*ans444="neilarmstrong",*ans555="northern";
char *alpha1="1abcdefghijklmnopqrstuvwxyz";

void text(int x,int y,char *s)
{
	int len,i;
	glRasterPos2f(x,y);
	len=(int)strlen(s);
	for(i=0;i<len;i++)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,s[i]);
}

void text2(int x,int y,char s)
{
	glRasterPos2f(x,y);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,s);
}

void text1(int x,int y,char *s)
{
	int len,i;
	glRasterPos2f(x,y);
	len=(int)strlen(s);
	for(i=0;i<len;i++)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,s[i]);
}

void text3(int x,int y,char s)
{
	glRasterPos2f(x,y);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,s);
}

void starter()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.5,0.5);

	text1(95,450,"DAYANANDA SAGAR ACADEMY OF TECHNOLOGY AND MANAGEMENT");
	glColor3f(0.5,0.5,0.5);
	text(270,425,"CG MINI PROJECT");
	text(0,420,"_____________________________________________________________________________________________________________________________________");



	glColor3f(0,0.7,0.7);
	text1(275,370,"PROJECT ON");

	glColor3f(0.5,0.7,0.5);
	text1(235,345,"TWO MEN GAME");
	text(0,325,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");


	glColor3f(0.5,0.5,0.5);
	text(250,260,"PROJECT MEMBERS");
	text(0,255,"______________________________________________________________________________________________________________________________________________________");

	glColor3f(0.9,0.3,0.7);
	text1(50,220,"BHARATH KUMAR");
	text1(430,220,"BHANU REDDY");
	glColor3f(1.0,1.0,1.0);
	text1(85,200,"1DT17CS048");
	text1(442,200,"1DT17CS040");
	glColor3f(1,1,0);
	text(270,100,"Press SPACE to begin");
	glFlush();
	glutSwapBuffers();

}

void instructions()
{

	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.5,0.7,0.3);
	text1(285,430,"TWO POLICE MEN GAME");
	glColor3f(0.7,0.3,0.0);
	text(50,350,"1: Guess the word according to the hint and blank spaces provided");
	text(50,300,"2: Select the letters from the keyboard");
	text(50,250,"3: If the guessed letter is correct it will appear at the right spaces");
	text(50,200,"4: If guessed letter is wrong one body part of the two police men will be hanged");
	text(50,150,"5: There will be 6 chances to guess the word correctly");

	glColor3f(0.5,0,0.3);
	text(50,50,"PRESS tab TO GO BACK TO PREVIOUS MENU");
	glFlush();
	glutSwapBuffers();

}

void drawpixel1(GLint cx,GLint cy)
{
	glPointSize(3);
	glColor3f(1, 1, 1);
	glBegin(GL_POINTS);
	 glVertex2i(cx,cy);
	glEnd();
}

void plotpixels1(GLint h,GLint k,GLint x,GLint y)
{
drawpixel1(x+h,y+k);
drawpixel1(-x+h,y+k);
drawpixel1(x+h,-y+k);
drawpixel1(-x+h,-y+k);
drawpixel1(y+h,x+k);
drawpixel1(-y+h,x+k);
drawpixel1(y+h,-x+k);
drawpixel1(-y+h,-x+k);
}

void circle1(GLint h,GLint k,GLint r)
{
	GLint d=1-r,x=0,y=r;
	while(y>=x)
	{
		plotpixels1(h,k,x,y);
		if(d<0)
		d+=2*x+3;
		else
		{
			d+=2*(x-y)+5;
			--y;
		}
		++x;
	}
	plotpixels1(h,k,x,y);
}



void drawpixel(GLint cx,GLint cy)
{
	glPointSize(3);
	glColor3f(1.0, 0.5, 0.0);
	glBegin(GL_POINTS);
	 glVertex2i(cx,cy);
	glEnd();
}

void plotpixels(GLint h,GLint k,GLint x,GLint y)
{
drawpixel(x+h,y+k);
drawpixel(-x+h,y+k);
drawpixel(x+h,-y+k);
drawpixel(-x+h,-y+k);
drawpixel(y+h,x+k);
drawpixel(-y+h,x+k);
drawpixel(y+h,-x+k);
drawpixel(-y+h,-x+k);
}

void circle(GLint h,GLint k,GLint r)
{
	GLint d=1-r,x=0,y=r;
	while(y>=x)
	{
		plotpixels(h,k,x,y);
		if(d<0)
		d+=2*x+3;
		else
		{
			d+=2*(x-y)+5;
			--y;
		}
		++x;
	}
	plotpixels(h,k,x,y);
}
void mountains()
{
    glColor3f(1.0,0.5,0.0);
	circle(555,435,25);
		circle(555,435,24);

	circle(555,435,23);
		circle(555,435,22);
			circle(555,435,21);


	circle(555,435,20);
		circle(555,435,19);

	circle(555,435,18);
		circle(555,435,17);
			circle(555,435,16);


	circle(555,435,15);
		circle(555,435,14);

	circle(555,435,13);
		circle(555,435,12);
			circle(555,435,11);


	circle(555,435,10);
		circle(555,435,9);
			circle(555,435,8);


	circle(555,435,7);
		circle(555,435,6);

	circle(555,435,5);
		circle(555,435,4);
	circle(555,435,3);
	circle(555,435,2);
	circle(555,435,1);

	circle(555,435,0);

	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(0,300);
	glVertex2i(100,450);
	glVertex2i(250,300);
	glVertex2i(500,450);
	glVertex2i(750,300);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.5,0.5);
	glVertex2i(0,300);
	glVertex2i(0,0);
	glVertex2i(750,0);
	glVertex2i(750,300);
	glEnd();
}

void drawhead()
{
	glColor3f(0.0,0.0,0.0);
	circle(100,310,30);
	glColor3f(1.0,1.0,1.0);
	glPointSize(68.0);
	glBegin(GL_POINTS);
	glVertex2i(100,310);
	glEnd();
	glPointSize(30.0);
	glBegin(GL_POINTS);
	glVertex2i(80,310);
	glVertex2i(120,310);
	glVertex2i(100,290);
	glEnd();
	glPointSize(10.0);
	glBegin(GL_POINTS);
	glVertex2i(75,322);
	glVertex2i(125,322);
	glVertex2i(77,295);
	glVertex2i(76,298);
	glVertex2i(88,285);
	glVertex2i(110,283);
	glVertex2i(112,285);
	glVertex2i(125,300);
	glVertex2i(124,295);
	glEnd();
	glColor3f(0.0,0.5,0.5);
	glBegin(GL_POLYGON);//draw hat base
	glVertex2i(55,325);
	glVertex2i(75,335);
	glVertex2i(125,335);
	glVertex2i(145,325);
	glEnd();
	glColor3f(0,0,0);
	glLineWidth(5.0);
	glBegin(GL_LINES);
	glVertex2i(74,335);
	glVertex2i(124,335);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);//draw hat head
	glVertex2i(75,335);
	glVertex2i(85,365);
	glVertex2i(115,365);
	glVertex2i(125,335);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	text1(82,310,"O");//draw eyes
	text1(110,310,"O");
	glPointSize(8.0);
	glBegin(GL_POINTS);//draw eyebballs
	glVertex2i(87,313);
	glVertex2i(115,313);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);//draw nose
	glVertex2i(100,310);
	glVertex2i(100,300);
	glVertex2i(102,300);
	glVertex2i(102,310);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glLineWidth(2.0);
	glBegin(GL_LINES);
	glVertex2i(110,290);
	glVertex2i(90,290);
	glEnd();
	//draw collor
	glLineWidth(9.0);
	glColor3f(0.8,0.8,0.0);
	glBegin(GL_LINES);
	glVertex2i(100,280);
	glVertex2i(100,260);
	glEnd();
	glFlush();
	glutSwapBuffers();
}
void drawhead2()
{
    glColor3f(0.0,0.0,0.0);
	circle(250,310,30);
	glColor3f(1.0,1.0,1.0);
	glPointSize(68.0);
	glBegin(GL_POINTS);
	glVertex2i(250,310);
	glEnd();
	glPointSize(30.0);
	glBegin(GL_POINTS);
	glVertex2i(230,310);
	glVertex2i(270,310);
	glVertex2i(250,290);
	glEnd();
	glPointSize(10.0);
	glBegin(GL_POINTS);
	glVertex2i(225,322);
	glVertex2i(275,322);
	glVertex2i(227,295);
	glVertex2i(226,298);
	glVertex2i(238,285);
	glVertex2i(260,283);
	glVertex2i(262,285);
	glVertex2i(275,300);
	glVertex2i(274,295);
	glEnd();
	glColor3f(0.0,0.5,0.5);
	glBegin(GL_POLYGON);//draw hat base
	glVertex2i(205,325);
	glVertex2i(225,335);
	glVertex2i(275,335);
	glVertex2i(295,325);
	glEnd();
	glColor3f(0,0,0);
	glLineWidth(5.0);
	glBegin(GL_LINES);
	glVertex2i(224,335);
	glVertex2i(274,335);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);//draw hat head
	glVertex2i(225,335);
	glVertex2i(235,365);
	glVertex2i(265,365);
	glVertex2i(275,335);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	text1(232,310,"O");//draw eyes
	text1(260,310,"O");
	glPointSize(8.0);
	glBegin(GL_POINTS);//draw eyebballs
	glVertex2i(237,313);
	glVertex2i(265,313);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);//draw nose
	glVertex2i(250,310);
	glVertex2i(250,300);
	glVertex2i(252,300);
	glVertex2i(252,310);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glLineWidth(2.0);
	glBegin(GL_LINES);
	glVertex2i(260,290);
	glVertex2i(240,290);
	glEnd();
	//draw collor
	glLineWidth(9.0);
	glColor3f(0.8,0.8,0.0);
	glBegin(GL_LINES);
	glVertex2i(250,280);
	glVertex2i(250,260);
	glEnd();
	glFlush();
	glutSwapBuffers();

}


void drawbody()
{
    glLineWidth(4.0);
	glColor4f(1, 0, 0,0);
    glBegin(GL_POLYGON);//draw shirt
	glVertex2f(72.5,150);
	glVertex2f(127.5,150);
	glVertex2f(112.5,270);
	glVertex2f(87.5,270);
	glEnd();
	//draw buttons
	glColor3f(0.0,0.0,0.4);
	glPointSize(3.0);
	glBegin(GL_POINTS);
	glVertex2i(100,170);
	glVertex2i(100,190);
	glVertex2i(100,210);
	glVertex2i(100,230);
	glVertex2i(100,250);
	glEnd();
	glColor3f(1.0,1.0,1.0);
	text1(95,150,"O");
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(72.5,150);
	glVertex2f(75,160);
	glVertex2f(127.5,150);
	glVertex2f(125,160);
	glEnd();
	glFlush();
	glutSwapBuffers();
}

void drawbody2()
{
    glLineWidth(4.0);
	glColor4f(1, 1, 0.0,0);
    glBegin(GL_POLYGON);//draw shirt
	glVertex2f(222.5,150);
	glVertex2f(277.5,150);
	glVertex2f(262.5,270);
	glVertex2f(237.5,270);
	glEnd();
	//draw buttons
	glColor3f(0.0,0.0,0.4);
	glPointSize(3.0);
	glBegin(GL_POINTS);
	glVertex2i(250,170);
	glVertex2i(250,190);
	glVertex2i(250,210);
	glVertex2i(250,230);
	glVertex2i(250,250);
	glEnd();
	glColor3f(1.0,1.0,1.0);
	text1(245,150,"O");
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(222.5,150);
	glVertex2f(225,160);
	glVertex2f(277.5,150);
	glVertex2f(275,160);
	glEnd();
	glFlush();
	glutSwapBuffers();

}

void drawhand1() //1st person left hand (down)
{
    glColor4f(1.0,1.0,1.0,1.0);
	glBegin(GL_POLYGON);//draw lefhand
	glVertex2f(115,250);
	glVertex2f(117,230);
	glVertex2f(165,210);
	glVertex2f(165,220);
	glEnd();
	glColor4f(1,0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(115,250);
	glVertex2f(117,230);
	glVertex2f(130,222);
	glVertex2f(130,243);
	glEnd();
	glColor3f(0.8,0.8,0.0);//draw fingers
	glLineWidth(5.0);
	glBegin(GL_LINES);
	glVertex2i(165,220);
	glVertex2i(180,225);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(165,216);
	glVertex2i(175,216);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(165,213);
	glVertex2i(180,210);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(165,210);
	glVertex2i(187,205);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glVertex2i(165,220);
	glVertex2i(180,225);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(165,216);
	glVertex2i(175,216);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(165,213);
	glVertex2i(180,210);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(165,210);
	glVertex2i(177,205);
	glEnd();

	glFlush();
	glutSwapBuffers();
}
void drawhand4() // 2nd person lefthand (down)
{
    glColor4f(1.0,1.0,1.0,1.0);
	glBegin(GL_POLYGON);//draw lefhand
	glVertex2f(265,250);
	glVertex2f(267,230);
	glVertex2f(315,210);
	glVertex2f(315,220);
	glEnd();
	glColor4f(1, 1, 0,0);
	glBegin(GL_POLYGON);
	glVertex2f(265,250);
	glVertex2f(267,230);
	glVertex2f(280,222);
	glVertex2f(280,243);
	glEnd();
	glColor3f(0.8,0.8,0.0);//draw fingers
	glLineWidth(5.0);
	glBegin(GL_LINES);
	glVertex2i(315,220);
	glVertex2i(330,225);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(315,216);
	glVertex2i(325,216);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(315,213);
	glVertex2i(330,210);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(315,210);
	glVertex2i(337,205);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glVertex2i(315,220);
	glVertex2i(330,225);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(315,216);
	glVertex2i(325,216);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(315,213);
	glVertex2i(330,210);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(315,210);
	glVertex2i(327,205);
	glEnd();

	glFlush();
	glutSwapBuffers();
}

void drawhand2() //1st person right hand(down)
{
	//glPushMatrix();
   glColor3f(1.0,1.0,1.0);
   // glTranslated(0,0,0);
   // glRotatef(15,1,1,50);
	glBegin(GL_POLYGON);//draw righthand
	glVertex2f(85,250);
	glVertex2f(35,220);
	glVertex2f(35,210);
	glVertex2f(83,230);
	glEnd();
	glColor4f(1, 0, 0,0);
	glBegin(GL_POLYGON);
	glVertex2f(70,243);
	glVertex2f(70,222);
	 glVertex2f(83,230);
	glVertex2f(85,250);
	glEnd();
	//glPopMatrix();
	/*glColor3f(1.0, 1.0, 1.0);///sss
    glPushMatrix();
   // glTranslatef(-.5, .2, 0);
    glRotatef(90,1,1,0);
    glBegin(GL_POLYGON);//draw righthand
	glVertex2f(85,250);
	glVertex2f(35,220);
	glVertex2f(35,210);
	glVertex2f(83,230);
	glEnd();
	glColor4f(1, 0, 0,0);
	glBegin(GL_POLYGON);
	glVertex2f(70,243);
	glVertex2f(70,222);
	 glVertex2f(83,230);
	glVertex2f(85,250);
	glEnd();
    glPopMatrix();*/



	glColor3f(0.8,0.8,0.0);//draw fingers
	glLineWidth(5.0);
	glBegin(GL_LINES);
	glVertex2i(20,205);
	glVertex2i(35,220);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(25,216);
	glVertex2i(35,216);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(20,210);
	glVertex2i(35,213);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(23,205);
	glVertex2i(35,210);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glVertex2i(20,205);
	glVertex2i(35,220);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(25,216);
	glVertex2i(35,216);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(20,210);
	glVertex2i(35,213);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(23,205);
	glVertex2i(35,210);
	glEnd();

	glFlush();
	glutSwapBuffers();
}

void drawhand3() //2nd person right hand(down)
{
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);//draw righthand 2
	glVertex2f(235,250);
	glVertex2f(185,220);
	glVertex2f(185,210);
	glVertex2f(233,230);
	glEnd();
	glColor4f(1, 1,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(220,243);
	glVertex2f(220,222);
	 glVertex2f(233,230);
	glVertex2f(235,250);
	glEnd();

	glColor3f(0.8,0.8,0.0);//draw fingers 2
	glLineWidth(5.0);
	glBegin(GL_LINES);
	glVertex2i(170,205);
	glVertex2i(185,220);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(175,216);
	glVertex2i(185,216);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(170,210);
	glVertex2i(185,213);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(173,205);
	glVertex2i(185,210);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glVertex2i(170,205);
	glVertex2i(185,220);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(175,216);
	glVertex2i(185,216);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(170,210);
	glVertex2i(185,213);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(173,205);
	glVertex2i(185,210);
	glEnd();

	glFlush();
	glutSwapBuffers();
}
void drawhand5() //third person righthand(up)
{
    glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);//draw righthand 2
	glVertex2f(235,250);
	glVertex2f(190,290);
	glVertex2f(190,280);
	glVertex2f(233,230);
	glEnd();
	glColor4f(1, 1, 0,0);
	glBegin(GL_POLYGON);
	glVertex2f(220,243);
    glVertex2f(233,230);
	glVertex2f(235,250);
	glVertex2f(220,266);
	glEnd();


	glColor3f(0.8,0.8,0.0);//draw fingers 2
	glLineWidth(5.0);
	glBegin(GL_LINES);
	glVertex2i(178,307);
	glVertex2i(193,287);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(183,305);
	glVertex2i(193,283);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(178,302);
	glVertex2i(193,280);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(180,296);
	glVertex2i(193,277);
	glEnd();
	glColor3f(0.0,0.0,0.0); // draw finger black
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glVertex2i(178,307);
	glVertex2i(193,287);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(183,305);
	glVertex2i(193,283);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(178,302);
	glVertex2i(193,280);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(180,296);
	glVertex2i(193,277);
	glEnd();

	glFlush();
	glutSwapBuffers();
}
void drawhand6() //third person lefthand(up)
{
    glColor4f(1.0,1.0,1.0,1.0);
	glBegin(GL_POLYGON);//draw lefhand
	glVertex2f(265,250);
	glVertex2f(267,230);
	glVertex2f(315,280);
	glVertex2f(315,290);
	glEnd();
	glColor4f(1, 1, 0,0);
	glBegin(GL_POLYGON);
    glVertex2f(265,250);
	glVertex2f(267,230);
    glVertex2f(280,243);
    glVertex2f(280,266);
	glEnd();
	glColor3f(0.8,0.8,0.0);//draw fingers
	glLineWidth(5.0);
	glBegin(GL_LINES);
	glVertex2i(315,287);
	glVertex2i(330,307);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(315,285);
	glVertex2i(325,305);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(315,282);
	glVertex2i(330,302);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(315,280);
	glVertex2i(337,300);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glVertex2i(315,287);
	glVertex2i(330,307);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(315,285);
	glVertex2i(325,305);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(315,282);
	glVertex2i(330,302);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(315,280);
	glVertex2i(327,300);
	glEnd();

	glFlush();
	glutSwapBuffers();
}
void drawhand7() //fourth person left hand(up)
{
    glColor4f(1.0,1.0,1.0,1.0);
	glBegin(GL_POLYGON);//draw lefhand
	glVertex2f(115,250);
	glVertex2f(117,230);
	glVertex2f(165,280);
	glVertex2f(165,290);
	glEnd();
	glColor4f(1, 0, 0,0);
	glBegin(GL_POLYGON);
	glVertex2f(115,250);
    glVertex2f(117,230);
    glVertex2f(130,243);

	glVertex2f(130,263);
	glEnd();
	glColor3f(0.8,0.8,0.0);//draw fingers
	glLineWidth(5.0);
	glBegin(GL_LINES);
	glVertex2i(165,287);
	glVertex2i(180,307);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(165,285);
	glVertex2i(175,305);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(165,282);
	glVertex2i(180,302);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(165,280);
	glVertex2i(187,300);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glVertex2i(165,287);
	glVertex2i(180,307);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(165,285);
	glVertex2i(175,305);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(165,282);
	glVertex2i(180,302);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(165,280);
	glVertex2i(177,300);
	glEnd();

	glFlush();
	glutSwapBuffers();
}
void drawhand8() // fourth person right hand(up)
{
    glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);//draw righthand
	glVertex2f(85,250);
	glVertex2f(39,290);
	glVertex2f(39,280);
	glVertex2f(83,230);
	glEnd();
	glColor4f(1, 0, 0,0);
	glBegin(GL_POLYGON);
	glVertex2f(83,230);
	glVertex2f(70,243);
	glVertex2f(70,266);

	glVertex2f(85,250);
	glEnd();

	glColor3f(0.8,0.8,0.0);//draw fingers
	glLineWidth(5.0);
	glBegin(GL_LINES);
	glVertex2i(26,307);
	glVertex2i(41,287);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(31,305);
	glVertex2i(40,283);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(25,302);
	glVertex2i(41,280);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(28,296);
	glVertex2i(40,277);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glVertex2i(26,307);
	glVertex2i(41,287);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(31,305);
	glVertex2i(40,283);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(25,302);
	glVertex2i(41,280);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(28,296);
	glVertex2i(40,277);
	glEnd();

	glFlush();
	glutSwapBuffers();
}

void drawleg1()
{
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);//draw right leg
	glVertex2f(75,150);
	glVertex2f(95,150);
	glVertex2f(90,90);
	glVertex2f(80,90);
	glEnd();
	glColor3f(0.8,0.8,0.0);//draw hullu
	glLineWidth(5.0);
	glBegin(GL_LINES);
	glVertex2i(80,90);
	glVertex2i(75,70);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(85,90);
	glVertex2i(81,80);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(90,90);
	glVertex2i(90,70);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(87,90);
	glVertex2i(85,75);
	glEnd();
	glColor3f(0.1f,0.0f,0.0f);
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glVertex2i(80,90);
	glVertex2i(75,70);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(85,90);
	glVertex2i(81,80);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(90,90);
	glVertex2i(90,70);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(87,90);
	glVertex2i(85,75);
	glEnd();
	glFlush();
	glutSwapBuffers();
}
void drawleg4()
{
    glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);//draw right leg
	glVertex2f(225,150);
	glVertex2f(245,150);
	glVertex2f(240,90);
	glVertex2f(230,90);
	glEnd();
	glColor3f(0.8,0.8,0.0);//draw hullu
	glLineWidth(5.0);
	glBegin(GL_LINES);
	glVertex2i(230,90);
	glVertex2i(225,70);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(235,90);
	glVertex2i(231,80);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(240,90);
	glVertex2i(240,70);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(237,90);
	glVertex2i(235,75);
	glEnd();
	glColor3f(0.1f,0.0f,0.0f);
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glVertex2i(230,90);
	glVertex2i(225,70);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(235,90);
	glVertex2i(231,80);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(240,90);
	glVertex2i(240,70);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(237,90);
	glVertex2i(235,75);
	glEnd();
	glFlush();
	glutSwapBuffers();
}

void drawleg2()
{
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);//draw leftleg
	glVertex2f(125,150);
	glVertex2f(105,150);
	glVertex2f(110,90);
	glVertex2f(120,90);
	glEnd();
	glColor3f(0.8,0.8,0.0);//draw fingers
	glLineWidth(5.0);
	glBegin(GL_LINES);
	glVertex2i(110,90);
	glVertex2i(105,70);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(115,90);
	glVertex2i(111,80);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(120,90);
	glVertex2i(120,70);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(117,90);
	glVertex2i(115,75);
	glEnd();
	glColor3f(0.1f,0.1f,0.1f);
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glVertex2i(110,90);
	glVertex2i(105,70);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(115,90);
	glVertex2i(111,80);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(120,90);
	glVertex2i(120,70);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(117,90);
	glVertex2i(115,75);
	glEnd();
	glFlush();
	glutSwapBuffers();
}

void drawleg3()
{
    glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);//draw leftleg
	glVertex2f(275,150);
	glVertex2f(255,150);
	glVertex2f(260,90);
	glVertex2f(270,90);
	glEnd();
	glColor3f(0.8,0.8,0.0);//draw fingers
	glLineWidth(5.0);
	glBegin(GL_LINES);
	glVertex2i(260,90);
	glVertex2i(255,70);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(265,90);
	glVertex2i(261,80);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(270,90);
	glVertex2i(270,70);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(267,90);
	glVertex2i(265,75);
	glEnd();
	glColor3f(0.1f,0.1f,0.1f);
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glVertex2i(260,90);
	glVertex2i(255,70);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(265,90);
	glVertex2i(261,80);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(270,90);
	glVertex2i(270,70);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(267,90);
	glVertex2i(265,75);
	glEnd();
	glFlush();
	glutSwapBuffers();


}

void menu()
{

	glClearColor(0.0,0.6,1.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	mountains();
	drawhead();
	drawhead2();
	drawbody();
	drawbody2();
	drawhand1();
	drawhand4();
	drawhand2();
	drawhand3();
	//drawhand5();
	//drawhand6();
	//drawhand7();
	//drawhand8();
	drawleg1();
	drawleg4();
	drawleg2();
	drawleg3();
	glColor3f(0.0,0.0,0.0);
	text1(350,250,"HERE YOU GO!");
	text(350,225,"1:START NORMAL GAME");
	text(350,200,"2:START INTERMEDIATE GAME");
	text(350,175,"3:START HARD GAME");
	text(350,150,"4:INSTRUCTIONS");
	text(350,125,"ESC:TO QUIT ANYTIME");
	glFlush();
	glutSwapBuffers();

}

void delay(int dtime)
{
	float i,j,k;

	for(i=0;i<dtime;i=i+.1)
	for(j=0;j<dtime;j=j+.1)
	for(k=0;k<dtime;k=k+.1);
}

void load()
{
	glClearColor(0,0,0,0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.4,0.4,0);
	glRecti(250,170,425,145);   //rect
	glColor3f(0.2,0.1,1);
	glRecti(255,165,269,149);   //inner rec
	glColor3f(0.2,0.6,0.3);
	glRecti(272,165,286,149);   //inner rec
	glColor3f(0.3,0.5,0.1);
	glRecti(289,165,303,149);   //inner rec
	glColor3f(0.4,0.5,0.5);
	glRecti(306,165,320,149);   //inner rec
	glColor3f(0.2,0.6,0.3);
	text(200,180,"READY TO GET HANGED...!!");
	glFlush();
	glutSwapBuffers();
}

void hanger()
{
	glClearColor(0.0,0.6,1.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	mountains();
	glColor3f(0.6,0.35,0.05);
	glRecti(10,400,25,10);
	glRecti(25,400,300,385);
	glLineWidth(4); //hang line width
	glColor3f(0,0,0);
	glBegin(GL_LINES);
	glVertex2d(100,385);
	glVertex2d(100,365);
	glVertex2d(250,385);
	glVertex2d(250,365);
	glEnd();
	glLineWidth(2);
	glColor3f(0,0,0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(10,400);
	glVertex2d(10,10);
	glVertex2d(25,10);
	glVertex2d(25,385);
	glVertex2d(300,385);
	glVertex2d(300,400);
	glEnd();
	glFlush();
	glutSwapBuffers();
}
void hang()
{
    glLineWidth(4); //hang line width
	glColor3f(1,1,1);
	glBegin(GL_LINES);
	glVertex2d(68,385);
	glVertex2d(68,277);
	glVertex2d(68,277);
	glVertex2d(95,277);
	glVertex2d(218,385);
	glVertex2d(218,277);
	glVertex2d(218,277);
	glVertex2d(245,277);

	glEnd();
	circle1(100,277,5);
	circle1(250,277,5);

	glFlush();
	glutSwapBuffers();
}

void gameover()
{
	ds=4;
	q=0;
	mis=0;
	glClearColor(0,0,0,0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.5,0.6,0.7);
	text1(200,300,"GAME IS OVER...!!");
	text(200,200,"DO YOU WANT TO TEST YOUR SKILLS AGAIN ? PRESS Y");
	text(200,100,"DO YOU WANT TO IGNORE ? PRESS N");
	glFlush();
	glutSwapBuffers();
}

void mismatch(int mis)
{
switch(mis)
{


	case 1:drawhead();
	       drawhead2();
           drawbody();
	       drawbody2();
           //drawhand1();
	       //drawhand4();
           //drawhand2();
           //drawhand3();
           drawleg1();
	       drawleg4();
           drawleg2();
           drawleg3();

			break;

	case 2:drawhead();
	       drawhead2();
           drawbody();
	       drawbody2();
           drawhand5();
	       drawhand6();
           drawhand7();
           drawhand8();
           drawleg1();
	       drawleg4();
           drawleg2();
           drawleg3();
           break;
    case 3: hang();
			delay(60);
			ds=4;
			gameover();
			break;

	default:
			break;
}

}
void alpha()
{
	glColor3f(0,0,0);
	text1(20,455," Dont make the Two Innocent Men to hang themselves ");
	text1(150,435,"by answering wrong letter");
	/*text1(40,450,"b");
	text1(60,450,"c");
	text1(80,450,"d");
	text1(100,450,"e");
	text1(120,450,"f");
	text1(140,450,"g");
	text1(160,450,"h");
	text1(180,450,"i");
	text1(200,450,"j");
	text1(220,450,"k");
	text1(240,450,"l");
	text1(260,450,"m");
	text1(280,450,"n");
	text1(300,450,"o");
	text1(320,450,"p");
	text1(340,450,"q");
	text1(360,450,"r");
	text1(380,450,"s");
	text1(400,450,"t");
	text1(420,450,"u");
	text1(440,450,"v");
	text1(460,450,"w");
	text1(480,450,"x");
	text1(500,450,"y");
	text1(520,450,"z");*/
}
void ques1()
{
	int i,j;
	q++;
	glClearColor(0,0,0,0);
	glClear(GL_COLOR_BUFFER_BIT);
	hanger();
	alpha();
	for(j=1;j<=mis;j++)
	{
		mismatch(j);
	}
	glColor3f(0,0,0);
	if(q==1)
	{
		text1(300,320,"HINT:unit of current ?");
		text(400,250,"__ __ __ __ __ __");
		for(i=0;i<=(int)strlen(ans1);i++)
		{
				ans[i]=ans1[i];
		}
	}
	if(q==2)
	{
		text1(300,320,"HINT: what color is a Himalayan poppy ?");
		text(400,250,"__ __ __ __");
		for(i=0;i<=(int)strlen(ans2);i++)
		{
				ans[i]=ans2[i];
		}
	}
	if(q==3)
	{
		text1(400,320,"HINT: famous programing language");
		text(400,250,"__ __ __ __ __ __");
		for(i=0;i<=(int)strlen(ans3);i++)
		{
				ans[i]=ans3[i];
		}
	}
	if(q==4)
	{
		text1(400,320,"HINT: web browser ");
		text(400,250,"__ __ __ __ __ __");
		for(i=0;i<=(int)strlen(ans4);i++)
		{
				ans[i]=ans4[i];
		}
	}
	if(q==5)
	{
		text1(400,320,"HINT: microsoft");
		text(400,250,"__ __ __ __ __ __ __ __ __");
		for(i=0;i<=(int)strlen(ans5);i++)
		{
				ans[i]=ans5[i];
		}

	}
	if(q==6)
	{
	ds=4;
	q=0;
	mis=0;
	glClearColor(0,0,0,0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.5,0.6,0.7);
	text1(200,300,"YOU WIN...!!");
	text(200,200,"DO YOU WANT TO TEST YOUR SKILLS AGAIN ? PRESS Y");
	text(200,100,"DO YOU WANT TO IGNORE ? PRESS N");
	glFlush();
	glutSwapBuffers();
	}
}

void ques2()
{
	int i,j;
	q++;
	glClearColor(0,0,0,0);
	glClear(GL_COLOR_BUFFER_BIT);

	hanger();
	alpha();
	for(j=1;j<=mis;j++)
	{
		mismatch(j);
	}
	glColor3f(0,0,0);
	if(q==1)
	{
		text1(400,330,"HINT:  How many players are there");
		text1(400,310, "in an ice hockey team ?");
		text(400,250,"__ __ __");
		for(i=0;i<=(int)strlen(ans11);i++)
		{
				ans[i]=ans11[i];
		}
	}
	if(q==2)
	{
		text1(400,330,"HINT: Instrument used for");
		text1(400,310, " measure for wind speed ?");
		text(400,250,"__ __ __ __ __ __ __ __ __ __");
		for(i=0;i<=(int)strlen(ans22);i++)
		{
				ans[i]=ans22[i];
		}
	}
	if(q==3)
	{
		text1(300,320,"HINT: what kind of weapon is a falchion? ");
		text(400,250,"__ __ __ __ __");
		for(i=0;i<=(int)strlen(ans33);i++)
		{
				ans[i]=ans33[i];
		}
	}
	if(q==4)
	{
		text1(300,320,"HINT: another word for 'lexicon' ? ");
		text(400,250,"__ __ __ __ __ __ __ __ __ __");
		for(i=0;i<=(int)strlen(ans44);i++)
		{
				ans[i]=ans44[i];
		}
	}
	if(q==5)
	{
		text1(400,320,"HINT: Steve Jobs ?");
		text(400,250,"__ __ __ __ __ ");
		for(i=0;i<=(int)strlen(ans55);i++)
		{
				ans[i]=ans55[i];
		}

	}
	if(q==6)
	{
	ds=4;
	q=0;
	mis=0;
	glClearColor(0,0,0,0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.5,0.6,0.7);
	text1(200,300,"GAME IS OVER...!!");
	text(200,200,"DO YOU WANT TO TEST YOUR SKILLS AGAIN ? PRESS Y");
	text(200,100,"DO YOU WANT TO IGNORE ? PRESS N");
	glFlush();
	glutSwapBuffers();
	}
}


void ques3()
{
	int i,j;
	q++;
	glClearColor(0,0,0,0);
	glClear(GL_COLOR_BUFFER_BIT);

	hanger();
	alpha();
	for(j=1;j<=mis;j++)
	{
		mismatch(j);
	}
	glColor3f(0,0,0);
	if(q==1)
	{
		text1(400,330,"HINT: Which place in india ");
		text1(400,310,"is 'heaven on earth' ?");
		text(400,250,"__ __ __ __ __ __ __");
		for(i=0;i<=(int)strlen(ans111);i++)
		{
				ans[i]=ans111[i];
		}
	}
	if(q==2)
	{
		text1(400,320,"HINT: Highest falls in the world?");
		text(400,250,"__ __ __ __ __ __ __ __ __ __");
		for(i=0;i<=(int)strlen(ans222);i++)
		{
				ans[i]=ans222[i];
		}
	}
	if(q==3)
	{
		text1(400,320,"HINT: natural satellite of the Earth ?");
		text(400,250,"__ __ __ __");
		for(i=0;i<=(int)strlen(ans333);i++)
		{
				ans[i]=ans333[i];
		}
	}
	if(q==4)
	{
		text1(400,320,"HINT: first person on the moon ? ");
		text(400,250,"__ __ __ __ __ __ __ __ __ __ __ __ __");
		for(i=0;i<=(int)strlen(ans444);i++)
		{
				ans[i]=ans444[i];
		}
	}
	if(q==5)
	{
		text1(400,340,"HINT: India is located");
		text1(400,320,"in which hemisphere ?");
		text(400,250,"__ __ __ __ __ __ __ __");
		for(i=0;i<=(int)strlen(ans555);i++)
		{
				ans[i]=ans555[i];
		}

	}
	if(q==6)
	{
	ds=4;
	q=0;
	mis=0;
	glClearColor(0,0,0,0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.5,0.6,0.7);
	text1(200,300,"GAME IS OVER...!!");
	text(200,200,"DO YOU WANT TO TEST YOUR SKILLS AGAIN ? PRESS Y");
	text(200,100,"DO YOU WANT TO IGNORE ? PRESS N");
	glFlush();
	glutSwapBuffers();
	}
}

void mouse(int btn,int state,int x,int y)
{int len,i;
    int k;
    if(btn == GLUT_LEFT_BUTTON && state==GLUT_DOWN)
   {
        if(x>=20 & x<=50)
        {
            k='a';
            len=(int)strlen(alpha1);
		glColor3f(0.0,0.6,1.0);
		for(i=1;i<len;i++)
		{
			if(k==alpha1[i])
			{
				text3(20*i,450,k);
			}
		}
		stringmatch(k,ans);
        }
        else if(x>=50 & x<=70)
        {
            k='b';
            len=(int)strlen(alpha1);
		glColor3f(0.0,0.6,1.0);
		for(i=1;i<len;i++)
		{
			if(k==alpha1[i])
			{
				text3(20*i,450,k);
			}
		}
		stringmatch(k,ans);
        }
        else if(x>=90 & x<=100)
        {
            k='c';
            len=(int)strlen(alpha1);
		glColor3f(0.0,0.6,1.0);
		for(i=1;i<len;i++)
		{
			if(k==alpha1[i])
			{
				text3(20*i,450,k);
			}
		}
		stringmatch(k,ans);
        }
        else if(x>=120 & x<=140)
        {
            k='d';
            len=(int)strlen(alpha1);
		glColor3f(0.0,0.6,1.0);
		for(i=1;i<len;i++)
		{
			if(k==alpha1[i])
			{
				text3(20*i,450,k);
			}
		}
		stringmatch(k,ans);
        }
        else if(x>=150 & x<=170)
        {
            k='e';
            len=(int)strlen(alpha1);
		glColor3f(0.0,0.6,1.0);
		for(i=1;i<len;i++)
		{
			if(k==alpha1[i])
			{
				text3(20*i,450,k);
			}
		}
		stringmatch(k,ans);
        }
        else if(x>=180 & x<=200)
        {
            k='f';
            len=(int)strlen(alpha1);
		glColor3f(0.0,0.6,1.0);
		for(i=1;i<len;i++)
		{
			if(k==alpha1[i])
			{
				text3(20*i,450,k);
			}
		}
		stringmatch(k,ans);
        }
        else if(x>=210 & x<=230)
        {
            k='g';
            len=(int)strlen(alpha1);
		glColor3f(0.0,0.6,1.0);
		for(i=1;i<len;i++)
		{
			if(k==alpha1[i])
			{
				text3(20*i,450,k);
			}
		}
		stringmatch(k,ans);
        }
        else if(x>=240 & x<=260)
        {
            k='h';
            len=(int)strlen(alpha1);
		glColor3f(0.0,0.6,1.0);
		for(i=1;i<len;i++)
		{
			if(k==alpha1[i])
			{
				text3(20*i,450,k);
			}
		}
		stringmatch(k,ans);
        }
        else if(x>=270 & x<=290)
        {
            k='i';
            len=(int)strlen(alpha1);
		glColor3f(0.0,0.6,1.0);
		for(i=1;i<len;i++)
		{
			if(k==alpha1[i])
			{
				text3(20*i,450,k);
			}
		}
		stringmatch(k,ans);
        }
        else if(x>=300 & x<=320)
        {
            k='j';
            len=(int)strlen(alpha1);
		glColor3f(0.0,0.6,1.0);
		for(i=1;i<len;i++)
		{
			if(k==alpha1[i])
			{
				text3(20*i,450,k);
			}
		}
		stringmatch(k,ans);
        }
        else if(x>=330 & x<=350)
        {
            k='k';
            len=(int)strlen(alpha1);
		glColor3f(0.0,0.6,1.0);
		for(i=1;i<len;i++)
		{
			if(k==alpha1[i])
			{
				text3(20*i,450,k);
			}
		}
		stringmatch(k,ans);
        }
        else if(x>=360 & x<=380)
        {
            k='l';
            len=(int)strlen(alpha1);
		glColor3f(0.0,0.6,1.0);
		for(i=1;i<len;i++)
		{
			if(k==alpha1[i])
			{
				text3(20*i,450,k);
			}
		}
		stringmatch(k,ans);
        }
        else if(x>=390 & x<=410)
        {
            k='m';
            len=(int)strlen(alpha1);
		glColor3f(0.0,0.6,1.0);
		for(i=1;i<len;i++)
		{
			if(k==alpha1[i])
			{
				text3(20*i,450,k);
			}
		}
		stringmatch(k,ans);
        }
        else if(x>=420 & x<=450)
        {
            k='n';
            len=(int)strlen(alpha1);
		glColor3f(0.0,0.6,1.0);
		for(i=1;i<len;i++)
		{
			if(k==alpha1[i])
			{
				text3(20*i,450,k);
			}
		}
		stringmatch(k,ans);
        }
        else if(x>=450 & x<=480)
        {
            k='o';
            len=(int)strlen(alpha1);
		glColor3f(0.0,0.6,1.0);
		for(i=1;i<len;i++)
		{
			if(k==alpha1[i])
			{
				text3(20*i,450,k);
			}
		}
		stringmatch(k,ans);
        }
        else if(x>=490 & x<=510)
        {
            k='p';
            len=(int)strlen(alpha1);
		glColor3f(0.0,0.6,1.0);
		for(i=1;i<len;i++)
		{
			if(k==alpha1[i])
			{
				text3(20*i,450,k);
			}
		}
		stringmatch(k,ans);
        }
        else if(x>=520 & x<=540)
        {
            k='q';
            len=(int)strlen(alpha1);
		glColor3f(0.0,0.6,1.0);
		for(i=1;i<len;i++)
		{
			if(k==alpha1[i])
			{
				text3(20*i,450,k);
			}
		}
		stringmatch(k,ans);
        }
        else if(x>=550 & x<=570)
        {
            k='r';
            len=(int)strlen(alpha1);
		glColor3f(0.0,0.6,1.0);
		for(i=1;i<len;i++)
		{
			if(k==alpha1[i])
			{
				text3(20*i,450,k);
			}
		}
		stringmatch(k,ans);
        }
        else if(x>=580 & x<=600)
        {
            k='s';
            len=(int)strlen(alpha1);
		glColor3f(0.0,0.6,1.0);
		for(i=1;i<len;i++)
		{
			if(k==alpha1[i])
			{
				text3(20*i,450,k);
			}
		}
		stringmatch(k,ans);
        }
        else if(x>=600& x<=630)
        {
            k='t';
            len=(int)strlen(alpha1);
		glColor3f(0.0,0.6,1.0);
		for(i=1;i<len;i++)
		{
			if(k==alpha1[i])
			{
				text3(20*i,450,k);
			}
		}
		stringmatch(k,ans);
        }
        else if(x>=620 & x<=640)
        {
            k='u';
            len=(int)strlen(alpha1);
		glColor3f(0.0,0.6,1.0);
		for(i=1;i<len;i++)
		{
			if(k==alpha1[i])
			{
				text3(20*i,450,k);
			}
		}
		stringmatch(k,ans);
        }
        else if(x>=650 & x<=670)
        {
            k='u';
            len=(int)strlen(alpha1);
		glColor3f(0.0,0.6,1.0);
		for(i=1;i<len;i++)
		{
			if(k==alpha1[i])
			{
				text3(20*i,450,k);
			}
		}
		stringmatch(k,ans);
        }
        else if(x>=680 & x<=710)
        {
            k='v';
            len=(int)strlen(alpha1);
		glColor3f(0.0,0.6,1.0);
		for(i=1;i<len;i++)
		{
			if(k==alpha1[i])
			{
				text3(20*i,450,k);
			}
		}
		stringmatch(k,ans);
        }
        else if(x>=720 & x<=740)
        {
            k='w';
            len=(int)strlen(alpha1);
		glColor3f(0.0,0.6,1.0);
		for(i=1;i<len;i++)
		{
			if(k==alpha1[i])
			{
				text3(20*i,450,k);
			}
		}
		stringmatch(k,ans);
        }
        else if(x>=750 & x<=770)
        {
            k='x';
            len=(int)strlen(alpha1);
		glColor3f(0.0,0.6,1.0);
		for(i=1;i<len;i++)
		{
			if(k==alpha1[i])
			{
				text3(20*i,450,k);
			}
		}
		stringmatch(k,ans);
        }
        else if(x>=780 & x<=800)
        {
            k='y';
            len=(int)strlen(alpha1);
		glColor3f(0.0,0.6,1.0);
		for(i=1;i<len;i++)
		{
			if(k==alpha1[i])
			{
				text3(20*i,450,k);
			}
		}
		stringmatch(k,ans);
        }
        else if(x>=810 & x<=820)
        {
            k='z';
            len=(int)strlen(alpha1);
		glColor3f(0.0,0.6,1.0);
		for(i=1;i<len;i++)
		{
			if(k==alpha1[i])
			{
				text3(20*i,450,k);
			}
		}
		stringmatch(k,ans);
        }
        glFlush();
   }
}

void stringmatch(char key,char *ans)
{
	int i,len,pos,flag=1,len1;
	len=(int)strlen(ans);
	for(i=0;i<len;i++)
	{

		if(key==ans[i])
		{
			pos=i;
			p[i]=key;
			glColor3f(0,0,0);
			text3((i*17)+400,250,key);// to place the charachter in the correct position of the ans
			flag=0;
		}
	}

	if(flag)
	{

            mis++;
            mismatch(mis);
            glutPostRedisplay();

    }
	len1=(int)strlen(p);
	if(len1==len && mis<6)
	{
		for(i=0;i<len1;i++)
			p[i]=NULL;
		text1(250,100,"GrEaT jOb...!!");
		glFlush();
		glutSwapBuffers();
		delay(50);
		if(dif==1)
		{
		ques1();
		}
		else if(dif==2)
		{
		    ques2();
		}
		else if(dif==3)
		{
		    ques3();
		}
	}
}
void key(unsigned char k, int x,int y)
{
	int len,i;
	//ds=0 start; ds=1 menu; ds=2 game; ds=3 instructions
	if(k==' '&&ds==0)
	{
		ds=1;
		menu();
	}
	if(ds==1&&k=='1')
	{
	    dif=1;
		ds=2;
		load();
		delay(50);
		ques1();
	}
	if(ds==1&&k=='2')
	{
	    dif=2;
		ds=2;
		load();
		delay(50);
		ques2();
	}
	if(ds==1&&k=='3')
	{
        dif=3;
		ds=2;
		load();
		delay(50);
		ques3();
	}

	if(ds==1&&k=='4')
	{
		ds=3;
		delay(50);
		instructions();
	}
	if(ds==3&&k==' ')
	{
		ds=1;
		menu();
	}
	if(k==27)
	{
		exit(0);
	}
	if(ds==4&&k=='y')
	{
		ds=1;
		menu();
	}
	if(ds==4&&k=='n')
	{
		exit(0);
	}
	if(ds==2&&((k=='a')||(k=='b')||(k=='c')||(k=='d')||(k=='e')||(k=='f')||(k=='g')||(k=='h')||(k=='i')||(k=='j')||(k=='k')||(k=='l')||(k=='m')||(k=='n')||(k=='o')||(k=='p')||(k=='q')||(k=='r')||(k=='s')||(k=='t')||(k=='u')||(k=='v')||(k=='w')||(k=='x')||(k=='y')||(k=='z')))
	{
		len=(int)strlen(alpha1);
		glColor3f(0.0,0.6,1.0);
		for(i=1;i<len;i++)
		{
			if(k==alpha1[i])
			{
				text3(20*i,450,k);
			}
		}
		stringmatch(k,ans);

	}
	glFlush();
	glutSwapBuffers();
}

void init()
{
	glClearColor(0,0,0,0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,640,0,480);
}

void display(void)
{
	if(ds==0)
		starter();
	glFlush();
	glutSwapBuffers();
    //glutFullScreen();
}
int main(int argc, char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1000,700);
	glEnable(GL_SMOOTH);
	glutInitWindowPosition(0,0);
	glutCreateWindow("2D-two men");
	init();
	glutMouseFunc(mouse);
	glutKeyboardFunc(key);
	glutDisplayFunc(display);
	glutMainLoop();
}
