#include"naman.h"
#define color1 160
#define color2 32
int chess[8][8]={4,5,3,1,2,3,5,4,
                 6,6,6,6,6,6,6,6,
				 0,0,0,0,0,0,0,0,
				 0,0,0,0,0,0,0,0,
				 0,0,0,0,0,0,0,0,
				 0,0,0,0,0,0,0,0,
				 16,16,16,16,16,16,16,16,
				 14,15,13,12,11,13,15,14};
int out1[8][2]={0,0,
                0,0,
				0,0,
				0,0,
				0,0,
				0,0,
                0,0,
				0,0};
int out2[8][2]={0,0,
                0,0,
				0,0,
				0,0,
				0,0,
				0,0,
                0,0,
				0,0};



int check(){

	int i,j,kingx=9,kingy=9;


	for(i=0;i<8;i++)
	{for(j=0;j<8;j++)
	{if(chess[i][j]==1){
		kingx=i;kingy=j;
		break;}}}
	if((kingx==9)&&(kingy==9))	return 0;



	//checkby horse
	if((kingx+2<8)&&(kingy+1<8)&&(kingx+2>=0)&&(kingy+1>=0))
	{if(chess[kingx+2][kingy+1]==15)return 1;}

    if((kingx+2<8)&&(kingy-1<8)&&(kingx+2>=0)&&(kingy-1>=0))
	{if(chess[kingx+2][kingy-1]==15)return 1;}

	if((kingx-2<8)&&(kingy+1<8)&&(kingx-2>=0)&&(kingy+1>=0))
	{if(chess[kingx-2][kingy+1]==15)return 1;}

	if((kingx-2<8)&&(kingy-1<8)&&(kingx-2>=0)&&(kingy-1>=0))
	{if(chess[kingx-2][kingy-1]==15)return 1;}

	if((kingx+1<8)&&(kingy+2<8)&&(kingx+1>=0)&&(kingy+2>=0))
	{if(chess[kingx+1][kingy+2]==15)return 1;}

	if((kingx+1<8)&&(kingy-2<8)&&(kingx+1>=0)&&(kingy-2>=0))
	{if(chess[kingx+1][kingy-2]==15)return 1;}

	if((kingx-1<8)&&(kingy+2<8)&&(kingx-1>=0)&&(kingy+2>=0))
	{if(chess[kingx-1][kingy+2]==15)return 1;}

	if((kingx-1<8)&&(kingy-2<8)&&(kingx-1>=0)&&(kingy-2>=0))
	{if(chess[kingx-1][kingy-2]==15)return 1;}





    //check by pawn
    if((kingx+1<8)&&(kingy+1<8)&&(kingx+1>=0)&&(kingy+1>=0))
	{if(chess[kingx+1][kingy+1]==16)return 1;}

    if((kingx+1<8)&&(kingy-1<8)&&(kingx+1>=0)&&(kingy-1>=0))
	{if(chess[kingx+1][kingy-1]==16)return 1;}


	//check by king

	if((kingx+1<8)&&(kingy+1<8)&&(kingx+1>=0)&&(kingy+1>=0))
	{if(chess[kingx+1][kingy+1]==11)return 1;}

    if((kingx+1<8)&&(kingy-1<8)&&(kingx+1>=0)&&(kingy-1>=0))
	{if(chess[kingx+1][kingy-1]==11)return 1;}

	if((kingx-1<8)&&(kingy+1<8)&&(kingx+1>=0)&&(kingy+1>=0))
	{if(chess[kingx-1][kingy+1]==11)return 1;}

    if((kingx-1<8)&&(kingy-1<8)&&(kingx+1>=0)&&(kingy-1>=0))
	{if(chess[kingx-1][kingy-1]==11)return 1;}



	if((kingy+1<8)&&(kingy+1>=0))
	{if(chess[kingx][kingy+1]==11)return 1;}

    if((kingy-1<8)&&(kingy-1>=0))
	{if(chess[kingx][kingy-1]==11)return 1;}

	if((kingx+1<8)&&(kingx+1>=0))
	{if(chess[kingx+1][kingy]==11)return 1;}

    if((kingx-1<8)&&(kingx-1>=0))
	{if(chess[kingx-1][kingy]==11)return 1;}


	//check by tank & queen


	for(j=kingy+1;j<8;j++){
		if((chess[kingx][j]==14)||(chess[kingx][j]==12))return 1;
		if(chess[kingx][j]!=0)break;}

	for(j=kingy-1;j>=0;j--){
		if((chess[kingx][j]==14)||(chess[kingx][j]==12))return 1;
		if(chess[kingx][j]!=0)break;}

	for(j=kingx+1;j<8;j++){
		if((chess[j][kingy]==14)||(chess[j][kingy]==12))return 1;
		if(chess[j][kingy]!=0)break;}

	for(j=kingx-1;j>=0;j--){
		if((chess[j][kingy]==14)||(chess[j][kingy]==12))return 1;
		if(chess[j][kingy]!=0)break;}


	//check by bishop & queen


	for(i=kingx+1,j=kingy+1;(i<8)&&(j<8);i++,j++){
		if((chess[i][j]==13)||(chess[i][j]==12))return 1;
		if(chess[i][j]!=0)break;}

	for(i=kingx+1,j=kingy-1;(i<8)&&(j>=0);i++,j--){
		if((chess[i][j]==13)||(chess[i][j]==12))return 1;
		if(chess[i][j]!=0)break;}

	for(i=kingx-1,j=kingy+1;(i>=0)&&(j<8);i--,j++){
		if((chess[i][j]==13)||(chess[i][j]==12))return 1;
		if(chess[i][j]!=0)break;}

	for(i=kingx-1,j=kingy-1;(i>=0)&&(j>=0);i--,j--){
	    if((chess[i][j]==13)||(chess[i][j]==12))return 1;
		if(chess[i][j]!=0)break;}





  return 0;}


	int check1(){

	int i,j,kingx=9,kingy=9;


	for(i=0;i<8;i++)
	{for(j=0;j<8;j++)
	{if(chess[i][j]==11){
		kingx=i;kingy=j;
		break;}}}

	if((kingx==9)&&(kingy==9))	return 0;
	//checkby horse
	if((kingx+2<8)&&(kingy+1<8)&&(kingx+2>=0)&&(kingy+1>=0))
	{if(chess[kingx+2][kingy+1]==5)return 1;}

    if((kingx+2<8)&&(kingy-1<8)&&(kingx+2>=0)&&(kingy-1>=0))
	{if(chess[kingx+2][kingy-1]==5)return 1;}

	if((kingx-2<8)&&(kingy+1<8)&&(kingx-2>=0)&&(kingy+1>=0))
	{if(chess[kingx-2][kingy+1]==5)return 1;}

	if((kingx-2<8)&&(kingy-1<8)&&(kingx-2>=0)&&(kingy-1>=0))
	{if(chess[kingx-2][kingy-1]==5)return 1;}

	if((kingx+1<8)&&(kingy+2<8)&&(kingx+1>=0)&&(kingy+2>=0))
	{if(chess[kingx+1][kingy+2]==5)return 1;}

	if((kingx+1<8)&&(kingy-2<8)&&(kingx+1>=0)&&(kingy-2>=0))
	{if(chess[kingx+1][kingy-2]==5)return 1;}

	if((kingx-1<8)&&(kingy+2<8)&&(kingx-1>=0)&&(kingy+2>=0))
	{if(chess[kingx-1][kingy+2]==5)return 1;}

	if((kingx-1<8)&&(kingy-2<8)&&(kingx-1>=0)&&(kingy-2>=0))
	{if(chess[kingx-1][kingy-2]==5)return 1;}





    //check by pawn
    if((kingx-1<8)&&(kingy+1<8)&&(kingx-1>=0)&&(kingy+1>=0))
	{if(chess[kingx-1][kingy+1]==6)return 1;}

    if((kingx-1<8)&&(kingy-1<8)&&(kingx-1>=0)&&(kingy-1>=0))
	{if(chess[kingx-1][kingy-1]==6)return 1;}


	//check by king

	if((kingx+1<8)&&(kingy+1<8)&&(kingx+1>=0)&&(kingy+1>=0))
	{if(chess[kingx+1][kingy+1]==1)return 1;}

    if((kingx+1<8)&&(kingy-1<8)&&(kingx+1>=0)&&(kingy-1>=0))
	{if(chess[kingx+1][kingy-1]==1)return 1;}

	if((kingx-1<8)&&(kingy+1<8)&&(kingx+1>=0)&&(kingy+1>=0))
	{if(chess[kingx-1][kingy+1]==1)return 1;}

    if((kingx-1<8)&&(kingy-1<8)&&(kingx+1>=0)&&(kingy-1>=0))
	{if(chess[kingx-1][kingy-1]==1)return 1;}



	if((kingy+1<8)&&(kingy+1>=0))
	{if(chess[kingx][kingy+1]==1)return 1;}

    if((kingy-1<8)&&(kingy-1>=0))
	{if(chess[kingx][kingy-1]==1)return 1;}

	if((kingx+1<8)&&(kingx+1>=0))
	{if(chess[kingx+1][kingy]==1)return 1;}

    if((kingx-1<8)&&(kingx-1>=0))
	{if(chess[kingx-1][kingy]==1)return 1;}


	//check by tank & queen


	for(j=kingy+1;j<8;j++){
		if((chess[kingx][j]==4)||(chess[kingx][j]==2))return 1;
		if(chess[kingx][j]!=0)break;}

	for(j=kingy-1;j>=0;j--){
		if((chess[kingx][j]==4)||(chess[kingx][j]==2))return 1;
		if(chess[kingx][j]!=0)break;}

	for(j=kingx+1;j<8;j++){
		if((chess[j][kingy]==4)||(chess[j][kingy]==2))return 1;
		if(chess[j][kingy]!=0)break;}

	for(j=kingx-1;j>=0;j--){
		if((chess[j][kingy]==4)||(chess[j][kingy]==2))return 1;
		if(chess[j][kingy]!=0)break;}


	//check by bishop & queen

	for(i=kingx+1,j=kingy-1;(i<8)&&(j>=0);i++,j--){
		if((chess[i][j]==3)||(chess[i][j]==2))return 1;
		if(chess[i][j]!=0)break;}

	for(i=kingx+1,j=kingy+1;(i<8)&&(j<8);i++,j++){
		if((chess[i][j]==3)||(chess[i][j]==2))return 1;
		if(chess[i][j]!=0)break;}

	for(i=kingx-1,j=kingy+1;(i>=0)&&(j<8);i--,j++){
		if((chess[i][j]==3)||(chess[i][j]==2))return 1;
		if(chess[i][j]!=0)break;}

	for(i=kingx-1,j=kingy-1;(i>=0)&&(j>=0);i--,j--){
	    if((chess[i][j]==3)||(chess[i][j]==2))return 1;
		if(chess[i][j]!=0)break;}



	return 0;}

void printpawn(int i,int j,int c)
{   if((i+j)%2==0)SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color1+c);
		    else SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color2+c);
    i= (i-1)*4+4;j=(j)*8+3;

	gotoxy(i+3,j);
	printf("O");
	gotoxy(i+4,j);
	printf("%c",207);

}
void printbishop(int i,int j,int c)
{    if((i+j)%2==0)SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color1+c);
		    else SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color2+c);
i= (i-1)*4+4;j=(j)*8+3;
    gotoxy(i+2,j);
	printf("%c",237);
	gotoxy(i+3,j);
	printf("%c",206);
	gotoxy(i+4,j);
	printf("%c",207);

}
void printking(int i,int j,int c)
{
if((i+j)%2==0)SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color1+c);
		    else SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color2+c);
			  i= (i-1)*4+4;j=(j)*8+3;

	gotoxy(i+1,j);
	printf("%c",153);
	gotoxy(i+2,j);
	printf("%c",206);
	gotoxy(i+3,j);
	printf("%c",206);
	gotoxy(i+4,j);
	printf("%c",207);

}
void printhorse(int i,int j,int c)
{  if((i+j)%2==0)SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color1+c);
		    else SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color2+c);
			 i= (i-1)*4+4;j=(j)*8+3;

	gotoxy(i+3,j);
	printf("<%c",238);
	gotoxy(i+4,j);
	printf(" %c",207);
}
void printtank(int i,int j,int c)
{ if((i+j)%2==0)SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color1+c);
		    else SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color2+c);
			i= (i-1)*4+4;j=(j)*8+3;

	gotoxy(i+2,j);
	printf("%c",234);
	gotoxy(i+3,j);
	printf("%c",219);
	gotoxy(i+4,j);
	printf("%c",207);


}
void printqueen(int i,int j,int c)
{ if((i+j)%2==0)SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color1+c);
		    else SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color2+c);
		 i= (i-1)*4+4;j=(j)*8+3;

	gotoxy(i+1,j);
	printf("%c",235);
	gotoxy(i+2,j);
	printf("%c",206);
	gotoxy(i+3,j);
	printf("%c",206);
	gotoxy(i+4,j);
	printf("%c",207);

} void printpawn1(int i,int j,int c)
{  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),c);
    i= (i-1)*4+4;

	gotoxy(i+3,j);
	printf("O");
	gotoxy(i+4,j);
	printf("%c",207);

}
void printbishop1(int i,int j,int c)
{  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),c);
i= (i-1)*4+4;
    gotoxy(i+2,j);
	printf("%c",237);
	gotoxy(i+3,j);
	printf("%c",206);
	gotoxy(i+4,j);
	printf("%c",207);

}
void printking1(int i,int j,int c)
{ SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),c);
			  i= (i-1)*4+4;

	gotoxy(i+1,j);
	printf("%c",153);
	gotoxy(i+2,j);
	printf("%c",206);
	gotoxy(i+3,j);
	printf("%c",206);
	gotoxy(i+4,j);
	printf("%c",207);

}
void printhorse1(int i,int j,int c)
{ SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),c);
			 i= (i-1)*4+4;

	gotoxy(i+3,j);
	printf("<%c",238);
	gotoxy(i+4,j);
	printf(" %c",207);
}
void printtank1(int i,int j,int c)
{   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),c);
			i= (i-1)*4+4;
	gotoxy(i+2,j);
	printf("%c",234);
	gotoxy(i+3,j);
	printf("%c",219);
	gotoxy(i+4,j);
	printf("%c",207);


}
void printqueen1(int i,int j,int c)
{ SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),c);
		 i= (i-1)*4+4;

	gotoxy(i+1,j);
	printf("%c",235);
	gotoxy(i+2,j);
	printf("%c",206);
	gotoxy(i+3,j);
	printf("%c",206);
	gotoxy(i+4,j);
	printf("%c",207);

}   void board(){int i,j;
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
		   	if((i+j)%2==0)SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color1);
		    else SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color2);
			gotoxy((i+1)*4+1,(j+1)*8+2);printf("  ");
			gotoxy((i+1)*4+2,(j+1)*8+2);printf("  " );
			gotoxy((i+1)*4+3,(j+1)*8+2);printf("  ");
			gotoxy((i+1)*4+4,(j+1)*8+2);printf("  " );


			gotoxy((i+1)*4+1,(j+1)*8-1);printf("        ");
			gotoxy((i+1)*4+2,(j+1)*8-1);printf("        ");
			gotoxy((i+1)*4+3,(j+1)*8-1);printf("        ");
			gotoxy((i+1)*4+4,(j+1)*8-1);printf("        ");
             if (chess[i][j]==1)printking(i+1,j+1,0);
		    if (chess[i][j]==2)printqueen(i+1,j+1,0);
		    if (chess[i][j]==3)printbishop(i+1,j+1,0);
		    if (chess[i][j]==4)printtank(i+1,j+1,0);
		    if (chess[i][j]==5)printhorse(i+1,j+1,0);
		    if (chess[i][j]==6)printpawn(i+1,j+1,0);


		    if (chess[i][j]==11)printking(i+1,j+1,15);
		    if (chess[i][j]==12)printqueen(i+1,j+1,15);
		    if (chess[i][j]==13)printbishop(i+1,j+1,15);
		    if (chess[i][j]==14)printtank(i+1,j+1,15);
		    if (chess[i][j]==15)printhorse(i+1,j+1,15);
		    if (chess[i][j]==16)printpawn(i+1,j+1,15);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
		}SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	}
	for(i=0;i<8;i++)
	{for(j=0;j<2;j++)
	{       if (out1[i][j]==1)printking1(i+1,73+2*j+1,16+0);
		    if (out1[i][j]==2)printqueen1(i+1,73+2*j+1,16+0);
		    if (out1[i][j]==3)printbishop1(i+1,73+2*j+1,16+0);
		    if (out1[i][j]==4)printtank1(i+1,73+2*j+1,16+0);
		    if (out1[i][j]==5)printhorse1(i+1,73+2*j+1,16+0);
		    if (out1[i][j]==6)printpawn1(i+1,73+2*j+1,16+0);
}}

	for(i=0;i<8;i++)
	{for(j=0;j<2;j++)
	{
		    if (out2[i][j]==11)printking1(i+1,2*j,16+15);
		    if (out2[i][j]==12)printqueen1(i+1,2*j,16+15);
		    if (out2[i][j]==13)printbishop1(i+1,2*j,16+15);
		    if (out2[i][j]==14)printtank1(i+1,2*j,16+15);
		    if (out2[i][j]==15)printhorse1(i+1,2*j,16+15);
		    if (out2[i][j]==16)printpawn1(i+1,2*j,16+15);}}

		if(check()==1)checksel1();if(check1()==1)checksel2();		}
	int getkey(){
	long int a=arrow();
	if(a==224072) return 1;
    if(a==224080) return 2;
	if(a==224075) return 3;
	if(a==224077) return 4;
	if(a==13) return 5;
	return 0;
}
void sel(int i,int j){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),276);

gotoxy(i,j);printf("|");gotoxy(i,j+7);printf("|");
gotoxy(i+1,j);printf("|");gotoxy(i+1,j+7);printf("|");
gotoxy(i+2,j);printf("|");gotoxy(i+2,j+7);printf("|");
gotoxy(i+3,j);printf("|");gotoxy(i+3,j+7);printf("|");
}
int checksel1(){



	{int i,j,kingx,kingy;
	for(i=0;i<8;i++)
	{for(j=0;j<8;j++)
	{if(chess[i][j]==1){
		kingx=i;kingy=j;
		break;}}}

i= (kingx+1)*4+1;j=(kingy+1)*8-1;
gotoxy(i,j);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12*16);
printf("        ");
gotoxy(i+1,j);printf("        ");
gotoxy(i+2,j);printf("        ");
gotoxy(i+3,j);printf("        ");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12*16+0);
	gotoxy(i,j+4);
	printf("%c",153);
	gotoxy(i+1,j+4);
	printf("%c",206);
	gotoxy(i+2,j+4);
	printf("%c",206);
	gotoxy(i+3,j+4);
	printf("%c",207);
}}

int checksel2(){

{int i,j,kingx,kingy;
for(i=0;i<8;i++)
	{for(j=0;j<8;j++)
	{if(chess[i][j]==11){
		kingx=i;kingy=j;
		break;}}}


i= (kingx+1)*4+1;j=(kingy+1)*8-1;
gotoxy(i,j);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12*16);
printf("        ");
gotoxy(i+1,j);printf("        ");
gotoxy(i+2,j);printf("        ");
gotoxy(i+3,j);printf("        ");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12*16+15);
	gotoxy(i,j+4);
	printf("%c",153);
	gotoxy(i+1,j+4);
	printf("%c",206);
	gotoxy(i+2,j+4);
	printf("%c",206);
	gotoxy(i+3,j+4);
	printf("%c",207);
}}
int main(){int j,i=1,x=5,y=8,c=0,turn=0,a[2][2]={0,0,0,0},v;
   int k1=0,l1=0,k2=0,l2=1;
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),16);

   system("cls");
   delay(30000);delay(30000);
   gotoxy(38,35);SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),16+14);printf("player1");gotoxy(3,35);printf("player2");


   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);gotoxy(40,30);printf("player1's   turn");
	 board();sel((y)*4+1,(x)*8-1);
	wait:		if(kbhit){
		 	int v=getkey();
		 	if(v==1)goto up;
		 	if(v==3)goto left;
		 	if(v==4)goto right;
			if(v==5)goto move;
			  goto wait;}
	left:
		{if(x!=1)		 	if(v==2)goto down;

		 x=x-1;board();

		 if((a[0][0]!=0)&&(a[0][1]!=0)){sel((a[0][0])*4+1,(a[0][1])*8-1);}
		 sel((y)*4+1,(x)*8-1);

		 if(kbhit){
		 	int v=getkey();
		 	if(v==1)goto up;
		 	if(v==2)goto down;
		 	if(v==3)goto left;
		 	if(v==4)goto right;
		 	if(v==5)goto move;}
		 goto wait;

		}
	up:
		{if(y!=1)
		 y=y-1;board();


		  if((a[0][0]!=0)&&(a[0][1]!=0)){sel((a[0][0])*4+1,(a[0][1])*8-1);}sel((y)*4+1,(x)*8-1);

		 if(kbhit){
		 	int v=getkey();
		 	if(v==1)goto up;
		 	if(v==2)goto down;
		 	if(v==3)goto left;
		 	if(v==4)goto right;
		 	if(v==5)goto move;}
		 goto wait;

		}
	down:
		{if(y!=8)
		 y=y+1;board();


		  if((a[0][0]!=0)&&(a[0][1]!=0)){sel((a[0][0])*4+1,(a[0][1])*8-1);}sel((y)*4+1,(x)*8-1);

		 if(kbhit){
		 	int v=getkey();
		 	if(v==1)goto up;
		 	if(v==2)goto down;
		 	if(v==3)goto left;
		 	if(v==4)goto right;
		 	if(v==5)goto move;}
		 goto wait;

		}

	right:
		{if(x!=8)
		 x=x+1;board();


		  if((a[0][0]!=0)&&(a[0][1]!=0)){sel((a[0][0])*4+1,(a[0][1])*8-1);}sel((y)*4+1,(x)*8-1);

		 if(kbhit){
		 	int v=getkey();
		 	if(v==1)goto up;
		 	if(v==2)goto down;
		 	if(v==3)goto left;
		 	if(v==4)goto right;
		 	if(v==5)goto move; }

		    goto wait;
		}

	move:a[c][1]=x;a[c][0]=y;int flag;
         c=(c+1)%2;
         if(turn%2==0){if((chess[a[0][0]-1][a[0][1]-1]>0)&&(chess[a[0][0]-1][a[0][1]-1]<7)){flag=1;goto flag;}}
         else {if((chess[a[0][0]-1][a[0][1]-1]>10)&&(chess[a[0][0]-1][a[0][1]-1]<17)){flag=1;goto flag;}}
		  flag=0;
         if((a[0][0]!=0)&&(a[0][1]!=0)&&(a[1][0]!=0)&&(a[1][1]!=0)){
         	if((chess[a[0][0]-1][a[0][1]-1]==0)||(((a[0][0]==a[1][0])&&((a[1][1]==a[0][1])))))flag=1;

         	//king1
			 if(chess[a[0][0]-1][a[0][1]-1]==1){flag=1;
         		if(((abs(a[0][0]-a[1][0])<=1)&&(abs(a[0][1]-a[1][1])<=1))&&((chess[a[1][0]-1][a[1][1]-1]==0)||(chess[a[1][0]-1][a[1][1]-1]>10)))flag=0;else flag=1;}
			//king2
			 if(chess[a[0][0]-1][a[0][1]-1]==11){flag=1;
         		if(((abs(a[0][0]-a[1][0])<=1)&&(abs(a[0][1]-a[1][1])<=1))&&((chess[a[1][0]-1][a[1][1]-1]==0)||(chess[a[1][0]-1][a[1][1]-1]<7)))flag=0;else flag=1;}

         	//horse1
         	if(chess[a[0][0]-1][a[0][1]-1]==5){flag=1;
         	   if((((abs(a[0][0]-a[1][0])==2)&&(abs(a[0][1]-a[1][1])==1))||((abs(a[0][0]-a[1][0])==1)&&(abs(a[0][1]-a[1][1])==2)))&&((chess[a[1][0]-1][a[1][1]-1]==0)||(chess[a[1][0]-1][a[1][1]-1]>10)))flag=0;else flag=1;}

         	//horse2
         	if(chess[a[0][0]-1][a[0][1]-1]==15){flag=1;
         	   if((((abs(a[0][0]-a[1][0])==2)&&(abs(a[0][1]-a[1][1])==1))||((abs(a[0][0]-a[1][0])==1)&&(abs(a[0][1]-a[1][1])==2)))&&((chess[a[1][0]-1][a[1][1]-1]==0)||(chess[a[1][0]-1][a[1][1]-1]<7)))flag=0;else flag=1;}

         	//pawn1
         	if(chess[a[0][0]-1][a[0][1]-1]==6){flag=1;
         		if(chess[a[1][0]-1][a[1][1]-1]==0)
         		{if((((a[1][0]-a[0][0])==1)&&(a[0][1]==a[1][1]))||((a[0][0]==2)&&((a[1][0]-a[0][0])==2)&&(a[0][1]==a[1][1])&&(chess[a[0][0]][a[0][1]-1]==0)))flag=0;}
         		if(chess[a[1][0]-1][a[1][1]-1]>10)
         	    {if(((a[1][0]-a[0][0])==1)&&(abs(a[0][1]-a[1][1])==1))flag=0;}}
            //pawn2
         	if(chess[a[0][0]-1][a[0][1]-1]==16){flag=1;
         		if(chess[a[1][0]-1][a[1][1]-1]==0)
         		{if((((a[0][0]-a[1][0])==1)&&(a[0][1]==a[1][1]))||((a[0][0]==7)&&((a[0][0]-a[1][0])==2)&&(a[0][1]==a[1][1])&&(chess[a[0][0]-2][a[0][1]-1]==0)))flag=0;}
         		if(((chess[a[1][0]-1][a[1][1]-1]<10))&&(chess[a[1][0]-1][a[1][1]-1]>0))
         	    {if(((a[0][0]-a[1][0])==1)&&(abs(a[0][1]-a[1][1])==1))flag=0;}}

         	//tank1
        	if(chess[a[0][0]-1][a[0][1]-1]==4){flag=1;
        	   if((a[1][0]==a[0][0])||(a[1][1]==a[0][1]))
        	   {if((chess[a[1][0]-1][a[1][1]-1]==0)||(chess[a[1][0]-1][a[1][1]-1]>6))
        	   {if(a[1][0]>a[0][0])
        	   {flag=0;for(i=a[0][0]+1;i<a[1][0];i++)if((chess[i-1][a[1][1]-1]>0)){flag=1;break;}}
        	   if(a[1][0]<a[0][0])
        	   {flag=0;for(i=a[0][0]-1;i>a[1][0];i--)if((chess[i-1][a[1][1]-1]>0)){flag=1;break;}}
        	   if(a[1][1]>a[0][1])
        	   {flag=0;for(i=a[0][1]+1;i<a[1][1];i++)if((chess[a[0][0]-1][i-1]>0)){flag=1;break;}}
        	   if(a[1][1]<a[0][1])
        	   {flag=0;for(i=a[0][1]-1;i>a[1][1];i--)if((chess[a[0][0]-1][i-1]>0)){flag=1;break;}}}}}



        	//tank2
        	if(chess[a[0][0]-1][a[0][1]-1]==14){flag=1;
        	   if((a[1][0]==a[0][0])||(a[1][1]==a[0][1]))
        	   {if((chess[a[1][0]-1][a[1][1]-1]<7))
        	   {if(a[1][0]>a[0][0])
        	   {flag=0;for(i=a[0][0]+1;i<a[1][0];i++)if((chess[i-1][a[1][1]-1]>0)){flag=1;break;}}
        	   if(a[1][0]<a[0][0])
        	   {flag=0;for(i=a[0][0]-1;i>a[1][0];i--)if((chess[i-1][a[1][1]-1]>0)){flag=1;break;}}
        	   if(a[1][1]>a[0][1])
        	   {flag=0;for(i=a[0][1]+1;i<a[1][1];i++)if((chess[a[0][0]-1][i-1]>0)){flag=1;break;}}
        	   if(a[1][1]<a[0][1])
        	   {flag=0;for(i=a[0][1]-1;i>a[1][1];i--)if((chess[a[0][0]-1][i-1]>0)){flag=1;break;}}}}}



        	//bishop1
        	if(chess[a[0][0]-1][a[0][1]-1]==3){flag=1;
        	   if(abs(a[1][0]-a[0][0])==abs(a[1][1]-a[0][1]))
        	   {if((chess[a[1][0]-1][a[1][1]-1]>7)||(chess[a[1][0]-1][a[1][1]-1]==0))
        	   {if((a[1][0]>a[0][0])&&(a[1][1]>a[0][1]))
        	   {flag=0;for(i=a[0][0]+1,j=a[0][1]+1;i<a[1][0],j<a[1][1];i++,j++)if((chess[i-1][j-1]>0)){flag=1;break;}}
        	   if((a[1][0]>a[0][0])&&(a[1][1]<a[0][1]))
        	   {flag=0;for(i=a[0][0]+1,j=a[0][1]-1;i<a[1][0],j>a[1][1];i++,j--)if((chess[i-1][j-1]>0)){flag=1;break;}}
			   if((a[1][0]<a[0][0])&&(a[1][1]>a[0][1]))
        	   {flag=0;for(i=a[0][0]-1,j=a[0][1]+1;i>a[1][0],j<a[1][1];i--,j++)if((chess[i-1][j-1]>0)){flag=1;break;}}
			   if((a[1][0]<a[0][0])&&(a[1][1]<a[0][1]))
        	   {flag=0;for(i=a[0][0]-1,j=a[0][1]-1;i>a[1][0],j>a[1][1];i--,j--)if((chess[i-1][j-1]>0)){flag=1;break;}}}}}


			 //bishop2
        	if(chess[a[0][0]-1][a[0][1]-1]==13){flag=1;
        	   if(abs(a[1][0]-a[0][0])==abs(a[1][1]-a[0][1]))
        	   {if((chess[a[1][0]-1][a[1][1]-1]<7)||(chess[a[1][0]-1][a[1][1]-1]==0))
        	   {if((a[1][0]>a[0][0])&&(a[1][1]>a[0][1]))
        	   {flag=0;for(i=a[0][0]+1,j=a[0][1]+1;i<a[1][0],j<a[1][1];i++,j++)if((chess[i-1][j-1]>0)){flag=1;break;}}
        	   if((a[1][0]>a[0][0])&&(a[1][1]<a[0][1]))
        	   {flag=0;for(i=a[0][0]+1,j=a[0][1]-1;i<a[1][0],j>a[1][1];i++,j--)if((chess[i-1][j-1]>0)){flag=1;break;}}
			   if((a[1][0]<a[0][0])&&(a[1][1]>a[0][1]))
        	   {flag=0;for(i=a[0][0]-1,j=a[0][1]+1;i>a[1][0],j<a[1][1];i--,j++)if((chess[i-1][j-1]>0)){flag=1;break;}}
			   if((a[1][0]<a[0][0])&&(a[1][1]<a[0][1]))
        	   {flag=0;for(i=a[0][0]-1,j=a[0][1]-1;i>a[1][0],j>a[1][1];i--,j--)if((chess[i-1][j-1]>0)){flag=1;break;}}}}}




        //queen1
            if(chess[a[0][0]-1][a[0][1]-1]==2){flag=1;
              if((a[1][0]==a[0][0])||(a[1][1]==a[0][1]))
        	   {if((chess[a[1][0]-1][a[1][1]-1]==0)||(chess[a[1][0]-1][a[1][1]-1]>6))
        	   {if(a[1][0]>a[0][0])
        	   {flag=0;for(i=a[0][0]+1;i<a[1][0];i++)if((chess[i-1][a[1][1]-1]>0)){flag=1;break;}}
        	   if(a[1][0]<a[0][0])
        	   {flag=0;for(i=a[0][0]-1;i>a[1][0];i--)if((chess[i-1][a[1][1]-1]>0)){flag=1;break;}}
        	   if(a[1][1]>a[0][1])
        	   {flag=0;for(i=a[0][1]+1;i<a[1][1];i++)if((chess[a[0][0]-1][i-1]>0)){flag=1;break;}}
        	   if(a[1][1]<a[0][1])
        	   {flag=0;for(i=a[0][1]-1;i>a[1][1];i--)if((chess[a[0][0]-1][i-1]>0)){flag=1;break;}}}}

			   if(abs(a[1][0]-a[0][0])==abs(a[1][1]-a[0][1]))
        	   {if((chess[a[1][0]-1][a[1][1]-1]>7)||(chess[a[1][0]-1][a[1][1]-1]==0))
        	   {if((a[1][0]>a[0][0])&&(a[1][1]>a[0][1]))
        	   {flag=0;for(i=a[0][0]+1,j=a[0][1]+1;i<a[1][0],j<a[1][1];i++,j++)if((chess[i-1][j-1]>0)){flag=1;break;}}
        	   if((a[1][0]>a[0][0])&&(a[1][1]<a[0][1]))
        	   {flag=0;for(i=a[0][0]+1,j=a[0][1]-1;i<a[1][0],j>a[1][1];i++,j--)if((chess[i-1][j-1]>0)){flag=1;break;}}
			   if((a[1][0]<a[0][0])&&(a[1][1]>a[0][1]))
        	   {flag=0;for(i=a[0][0]-1,j=a[0][1]+1;i>a[1][0],j<a[1][1];i--,j++)if((chess[i-1][j-1]>0)){flag=1;break;}}
			   if((a[1][0]<a[0][0])&&(a[1][1]<a[0][1]))
        	   {flag=0;for(i=a[0][0]-1,j=a[0][1]-1;i>a[1][0],j>a[1][1];i--,j--)if((chess[i-1][j-1]>0)){flag=1;break;}}}}}




        //queen2
            if(chess[a[0][0]-1][a[0][1]-1]==12){flag=1;
              if((a[1][0]==a[0][0])||(a[1][1]==a[0][1]))
        	   {if((chess[a[1][0]-1][a[1][1]-1]==0)||(chess[a[1][0]-1][a[1][1]-1]<7))
        	   {if(a[1][0]>a[0][0])
        	   {flag=0;for(i=a[0][0]+1;i<a[1][0];i++)if((chess[i-1][a[1][1]-1]>0)){flag=1;break;}}
        	   if(a[1][0]<a[0][0])
        	   {flag=0;for(i=a[0][0]-1;i>a[1][0];i--)if((chess[i-1][a[1][1]-1]>0)){flag=1;break;}}
        	   if(a[1][1]>a[0][1])
        	   {flag=0;for(i=a[0][1]+1;i<a[1][1];i++)if((chess[a[0][0]-1][i-1]>0)){flag=1;break;}}
        	   if(a[1][1]<a[0][1])
        	   {flag=0;for(i=a[0][1]-1;i>a[1][1];i--)if((chess[a[0][0]-1][i-1]>0)){flag=1;break;}}}}

			   if(abs(a[1][0]-a[0][0])==abs(a[1][1]-a[0][1]))
        	   {if((chess[a[1][0]-1][a[1][1]-1]<7)||(chess[a[1][0]-1][a[1][1]-1]==0))
        	   {if((a[1][0]>a[0][0])&&(a[1][1]>a[0][1]))
        	   {flag=0;for(i=a[0][0]+1,j=a[0][1]+1;i<a[1][0],j<a[1][1];i++,j++)if((chess[i-1][j-1]>0)){flag=1;break;}}
        	   if((a[1][0]>a[0][0])&&(a[1][1]<a[0][1]))
        	   {flag=0;for(i=a[0][0]+1,j=a[0][1]-1;i<a[1][0],j>a[1][1];i++,j--)if((chess[i-1][j-1]>0)){flag=1;break;}}
			   if((a[1][0]<a[0][0])&&(a[1][1]>a[0][1]))
        	   {flag=0;for(i=a[0][0]-1,j=a[0][1]+1;i>a[1][0],j<a[1][1];i--,j++)if((chess[i-1][j-1]>0)){flag=1;break;}}
			   if((a[1][0]<a[0][0])&&(a[1][1]<a[0][1]))
        	   {flag=0;for(i=a[0][0]-1,j=a[0][1]-1;i>a[1][0],j>a[1][1];i--,j--)if((chess[i-1][j-1]>0)){flag=1;break;}}}}}

    flag:     	if(flag==0)
         	{
			if(turn%2==0){out1[k1%8][l1]=chess[a[1][0]-1][a[1][1]-1];
         	  if(chess[a[1][0]-1][a[1][1]-1]!=0)k1=k1+1;if(k1>7){l1=1;}}

			  else{out2[k2%8][l2]=chess[a[1][0]-1][a[1][1]-1];
         	  if(chess[a[1][0]-1][a[1][1]-1]!=0)k2=k2+1;if(k2>7){l2=0;}}
			 chess[a[1][0]-1][a[1][1]-1]=chess[a[0][0]-1][a[0][1]-1];
		    chess[a[0][0]-1][a[0][1]-1]=0;



		    	for(j=0;j<8;j++)
		    	{if(chess[0][j]==16){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),270);

		    		gotoxy(25,35);
		    		printf(" ____________________________________________________________________");
		    		gotoxy(26,35);
		    		printf("|                       Want to promote it to :                      |");
		    		gotoxy(27,35);
		    		printf("|          QUEEN         BISHOP        ROOK          KNIGHT          |");
		    		gotoxy(28,35);
		    		printf("|____________________________________________________________________|");
		    		int n=2;SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),245);
		    		gotoxy(27,46);printf("QUEEN");

				w2:
					 if(kbhit){
			int v=getkey();
		 	if(v==3)goto left1;
		 	if(v==4)goto right1;
		 	if(v==5)goto enter; }
			right1:
		          {if(n!=5)
		           n=n+1;
		           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),270);

		    		gotoxy(25,35);
		    		printf(" ____________________________________________________________________");
		    		gotoxy(26,35);
		    		printf("|                       Want to promote it to :                      |");
		    		gotoxy(27,35);
		    		printf("|          QUEEN         BISHOP        ROOK          KNIGHT          |");
		    		gotoxy(28,35);
		    		printf("|____________________________________________________________________|");
		    		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),245);
		           gotoxy(27,32+14*(n-1));
				   if(n==2)printf("QUEEN");
				   if(n==3)printf("BISHOP");
				   if(n==4)printf("ROOK");
				   if(n==5)printf("KNIGHT");
		           if(kbhit){
		 	int v=getkey();
		 	if(v==3)goto left1;
		 	if(v==4)goto right1;
		 	if(v==5)goto enter; }}

		 	goto w2;

		 	left1:
		          {if(n!=2)
		           n=n-1;
		           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),270);

		    		gotoxy(25,35);
		    		printf(" ____________________________________________________________________");
		    		gotoxy(26,35);
		    		printf("|                       Want to promote it to :                      |");
		    		gotoxy(27,35);
		    		printf("|          QUEEN         BISHOP        ROOK          KNIGHT          |");
		    		gotoxy(28,35);
		    		printf("|____________________________________________________________________|");
		    		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),245);
		           gotoxy(27,32+14*(n-1));
				   if(n==2)printf("QUEEN");
				   if(n==3)printf("BISHOP");
				   if(n==4)printf("ROOK");
				   if(n==5)printf("KNIGHT");
		           if(kbhit){
		 	int v=getkey();
		 	if(v==3)goto left1;
		 	if(v==4)goto right1;
		 	if(v==5)goto enter; }}

			goto w2;



			enter:

			chess[0][j]=10+n;SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),16);system("cls");break;}}



        for(j=0;j<8;j++)
		    	{if(chess[7][j]==6){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),270);

		    		gotoxy(25,35);
		    		printf(" ____________________________________________________________________");
		    		gotoxy(26,35);
		    		printf("|                       Want to promote it to :                      |");
		    		gotoxy(27,35);
		    		printf("|          QUEEN         BISHOP        ROOK          KNIGHT          |");
		    		gotoxy(28,35);
		    		printf("|____________________________________________________________________|");
		    		int n=2;SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),245);
		    		gotoxy(27,46);printf("QUEEN");

				w3:
					 if(kbhit){
			int v=getkey();
		 	if(v==3)goto left2;
		 	if(v==4)goto right2;
		 	if(v==5)goto enter1; }
			right2:
		          {if(n!=5)
		           n=n+1;
		           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),270);

		    		gotoxy(25,35);
		    		printf(" ____________________________________________________________________");
		    		gotoxy(26,35);
		    		printf("|                       Want to promote it to :                      |");
		    		gotoxy(27,35);
		    		printf("|          QUEEN         BISHOP        ROOK          KNIGHT          |");
		    		gotoxy(28,35);
		    		printf("|____________________________________________________________________|");
		    		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),245);
		           gotoxy(27,32+14*(n-1));
				   if(n==2)printf("QUEEN");
				   if(n==3)printf("BISHOP");
				   if(n==4)printf("ROOK");
				   if(n==5)printf("KNIGHT");

		           if(kbhit){
		 	int v=getkey();
		 	if(v==3)goto left2;
		 	if(v==4)goto right2;
		 	if(v==5)goto enter1; }}

		 	goto w3;

		 	left2:
		          {if(n!=2)
		           n=n-1;
		           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),270);

		    		gotoxy(25,35);
		    		printf(" ____________________________________________________________________");
		    		gotoxy(26,35);
		    		printf("|                       Want to promote it to :                      |");
		    		gotoxy(27,35);
		    		printf("|          QUEEN         BISHOP        ROOK          KNIGHT          |");
		    		gotoxy(28,35);
		    		printf("|____________________________________________________________________|");
		    		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),245);
		           gotoxy(27,32+14*(n-1));
				   if(n==2)printf("QUEEN");
				   if(n==3)printf("BISHOP");
				   if(n==4)printf("ROOK");
				   if(n==5)printf("KNIGHT");

		           if(kbhit){
		 	int v=getkey();
		 	if(v==3)goto left2;
		 	if(v==4)goto right2;
		 	if(v==5)goto enter1; }}

			goto w3;



			enter1:

			chess[7][j]=n;SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),16);system("cls");break;}}

		    int win1=0,win2=0;SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
		    for(i=0;i<8;i++){
		    	for(j=0;j<8;j++)
		    	{if(chess[i][j]==1)win1=1;}}
		    if(win1==0){gotoxy(40,30);printf("player1 wins    ");board();gotoxy(40,30);exit(1);}

		    for(i=0;i<8;i++){
		    	for(j=0;j<8;j++)
		    	{if(chess[i][j]==11)win2=1;}}
		    if(win2==0){gotoxy(40,30);printf("player2 wins     ");board();gotoxy(40,30);exit(1);}



			turn++;SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
		    if(turn%2==0){gotoxy(40,30);printf("player1's   turn");x=5;y=8;sel((y)*4+1,(x)* 8-1);gotoxy((y)*4+1,(x)*8-1);}
		    else {gotoxy(40,30);printf("player2's   turn");x=4;y=1;sel((y)*4+1,(x)* 8-1);gotoxy((y)*4+1,(x)*8-1);}
			}


			board();sel((y)*4+1,(x)* 8-1);


			 }

 		  if(c==0)
         {
		  a[1][1]=0;a[1][0]=0;a[0][0]=0;a[0][1]=0;}
		if(kbhit){
		 	int v=getkey();
		 	if(v==1)goto up;
		 	if(v==2)goto down;
		 	if(v==3)goto left;
		 	if(v==4)goto right;
		 	if(v==5)goto move; }

		    goto wait;
}


       /* int playallcomb()
        {int temp[8][8],a[2][2];



            for(i=0;i<8;i++){
        	for(j=0;j<8;j++){
        		temp[i][j]=chess[i][j;]}}

            for(i=0;i<8;i++)
	         {for(j=0;j<8;j++)
	         {if(chess[i][j]==11){
		        kingx=i;kingy=j;
		        break;}}}
		        a[0][0]=kingx+1;a[0][1]=kingy+1;

			//king2
			 if(chess[a[0][0]-1][a[0][1]-1]==11){
         		if(((abs(a[0][0]-a[1][0])<=1)&&(abs(a[0][1]-a[1][1])<=1))&&((chess[a[1][0]-1][a[1][1]-1]==0)||(chess[a[1][0]-1][a[1][1]-1]<7))){
				 }}

         	//horse1
         	if(chess[a[0][0]-1][a[0][1]-1]==5){flag=1;
         	   if((((abs(a[0][0]-a[1][0])==2)&&(abs(a[0][1]-a[1][1])==1))||((abs(a[0][0]-a[1][0])==1)&&(abs(a[0][1]-a[1][1])==2)))&&((chess[a[1][0]-1][a[1][1]-1]==0)||(chess[a[1][0]-1][a[1][1]-1]>10)))flag=0;else flag=1;}

         	//horse2
         	if(chess[a[0][0]-1][a[0][1]-1]==15){flag=1;
         	   if((((abs(a[0][0]-a[1][0])==2)&&(abs(a[0][1]-a[1][1])==1))||((abs(a[0][0]-a[1][0])==1)&&(abs(a[0][1]-a[1][1])==2)))&&((chess[a[1][0]-1][a[1][1]-1]==0)||(chess[a[1][0]-1][a[1][1]-1]<7)))flag=0;else flag=1;}

         	//pawn1
         	if(chess[a[0][0]-1][a[0][1]-1]==6){flag=1;
         		if(chess[a[1][0]-1][a[1][1]-1]==0)
         		{if((((a[1][0]-a[0][0])==1)&&(a[0][1]==a[1][1]))||((a[0][0]==2)&&((a[1][0]-a[0][0])==2)&&(a[0][1]==a[1][1])&&(chess[a[0][0]][a[0][1]-1]==0)))flag=0;}
         		if(chess[a[1][0]-1][a[1][1]-1]>10)
         	    {if(((a[1][0]-a[0][0])==1)&&(abs(a[0][1]-a[1][1])==1))flag=0;}}
            //pawn2
         	if(chess[a[0][0]-1][a[0][1]-1]==16){flag=1;
         		if(chess[a[1][0]-1][a[1][1]-1]==0)
         		{if((((a[0][0]-a[1][0])==1)&&(a[0][1]==a[1][1]))||((a[0][0]==7)&&((a[0][0]-a[1][0])==2)&&(a[0][1]==a[1][1])&&(chess[a[0][0]-2][a[0][1]-1]==0)))flag=0;}
         		if(((chess[a[1][0]-1][a[1][1]-1]<10))&&(chess[a[1][0]-1][a[1][1]-1]>0))
         	    {if(((a[0][0]-a[1][0])==1)&&(abs(a[0][1]-a[1][1])==1))flag=0;}}

         	//tank1
        	if(chess[a[0][0]-1][a[0][1]-1]==4){flag=1;
        	   if((a[1][0]==a[0][0])||(a[1][1]==a[0][1]))
        	   {if((chess[a[1][0]-1][a[1][1]-1]==0)||(chess[a[1][0]-1][a[1][1]-1]>6))
        	   {if(a[1][0]>a[0][0])
        	   {flag=0;for(i=a[0][0]+1;i<a[1][0];i++)if((chess[i-1][a[1][1]-1]>0)){flag=1;break;}}
        	   if(a[1][0]<a[0][0])
        	   {flag=0;for(i=a[0][0]-1;i>a[1][0];i--)if((chess[i-1][a[1][1]-1]>0)){flag=1;break;}}
        	   if(a[1][1]>a[0][1])
        	   {flag=0;for(i=a[0][1]+1;i<a[1][1];i++)if((chess[a[0][0]-1][i-1]>0)){flag=1;break;}}
        	   if(a[1][1]<a[0][1])
        	   {flag=0;for(i=a[0][1]-1;i>a[1][1];i--)if((chess[a[0][0]-1][i-1]>0)){flag=1;break;}}}}}



        	//tank2
        	if(chess[a[0][0]-1][a[0][1]-1]==14){flag=1;
        	   if((a[1][0]==a[0][0])||(a[1][1]==a[0][1]))
        	   {if((chess[a[1][0]-1][a[1][1]-1]<7))
        	   {if(a[1][0]>a[0][0])
        	   {flag=0;for(i=a[0][0]+1;i<a[1][0];i++)if((chess[i-1][a[1][1]-1]>0)){flag=1;break;}}
        	   if(a[1][0]<a[0][0])
        	   {flag=0;for(i=a[0][0]-1;i>a[1][0];i--)if((chess[i-1][a[1][1]-1]>0)){flag=1;break;}}
        	   if(a[1][1]>a[0][1])
        	   {flag=0;for(i=a[0][1]+1;i<a[1][1];i++)if((chess[a[0][0]-1][i-1]>0)){flag=1;break;}}
        	   if(a[1][1]<a[0][1])
        	   {flag=0;for(i=a[0][1]-1;i>a[1][1];i--)if((chess[a[0][0]-1][i-1]>0)){flag=1;break;}}}}}



        	//bishop1
        	if(chess[a[0][0]-1][a[0][1]-1]==3){flag=1;
        	   if(abs(a[1][0]-a[0][0])==abs(a[1][1]-a[0][1]))
        	   {if((chess[a[1][0]-1][a[1][1]-1]>7)||(chess[a[1][0]-1][a[1][1]-1]==0))
        	   {if((a[1][0]>a[0][0])&&(a[1][1]>a[0][1]))
        	   {flag=0;for(i=a[0][0]+1,j=a[0][1]+1;i<a[1][0],j<a[1][1];i++,j++)if((chess[i-1][j-1]>0)){flag=1;break;}}
        	   if((a[1][0]>a[0][0])&&(a[1][1]<a[0][1]))
        	   {flag=0;for(i=a[0][0]+1,j=a[0][1]-1;i<a[1][0],j>a[1][1];i++,j--)if((chess[i-1][j-1]>0)){flag=1;break;}}
			   if((a[1][0]<a[0][0])&&(a[1][1]>a[0][1]))
        	   {flag=0;for(i=a[0][0]-1,j=a[0][1]+1;i>a[1][0],j<a[1][1];i--,j++)if((chess[i-1][j-1]>0)){flag=1;break;}}
			   if((a[1][0]<a[0][0])&&(a[1][1]<a[0][1]))
        	   {flag=0;for(i=a[0][0]-1,j=a[0][1]-1;i>a[1][0],j>a[1][1];i--,j--)if((chess[i-1][j-1]>0)){flag=1;break;}}}}}


			 //bishop2
        	if(chess[a[0][0]-1][a[0][1]-1]==13){flag=1;
        	   if(abs(a[1][0]-a[0][0])==abs(a[1][1]-a[0][1]))
        	   {if((chess[a[1][0]-1][a[1][1]-1]<7)||(chess[a[1][0]-1][a[1][1]-1]==0))
        	   {if((a[1][0]>a[0][0])&&(a[1][1]>a[0][1]))
        	   {flag=0;for(i=a[0][0]+1,j=a[0][1]+1;i<a[1][0],j<a[1][1];i++,j++)if((chess[i-1][j-1]>0)){flag=1;break;}}
        	   if((a[1][0]>a[0][0])&&(a[1][1]<a[0][1]))
        	   {flag=0;for(i=a[0][0]+1,j=a[0][1]-1;i<a[1][0],j>a[1][1];i++,j--)if((chess[i-1][j-1]>0)){flag=1;break;}}
			   if((a[1][0]<a[0][0])&&(a[1][1]>a[0][1]))
        	   {flag=0;for(i=a[0][0]-1,j=a[0][1]+1;i>a[1][0],j<a[1][1];i--,j++)if((chess[i-1][j-1]>0)){flag=1;break;}}
			   if((a[1][0]<a[0][0])&&(a[1][1]<a[0][1]))
        	   {flag=0;for(i=a[0][0]-1,j=a[0][1]-1;i>a[1][0],j>a[1][1];i--,j--)if((chess[i-1][j-1]>0)){flag=1;break;}}}}}




        //queen1
            if(chess[a[0][0]-1][a[0][1]-1]==2){flag=1;
              if((a[1][0]==a[0][0])||(a[1][1]==a[0][1]))
        	   {if((chess[a[1][0]-1][a[1][1]-1]==0)||(chess[a[1][0]-1][a[1][1]-1]>6))
        	   {if(a[1][0]>a[0][0])
        	   {flag=0;for(i=a[0][0]+1;i<a[1][0];i++)if((chess[i-1][a[1][1]-1]>0)){flag=1;break;}}
        	   if(a[1][0]<a[0][0])
        	   {flag=0;for(i=a[0][0]-1;i>a[1][0];i--)if((chess[i-1][a[1][1]-1]>0)){flag=1;break;}}
        	   if(a[1][1]>a[0][1])
        	   {flag=0;for(i=a[0][1]+1;i<a[1][1];i++)if((chess[a[0][0]-1][i-1]>0)){flag=1;break;}}
        	   if(a[1][1]<a[0][1])
        	   {flag=0;for(i=a[0][1]-1;i>a[1][1];i--)if((chess[a[0][0]-1][i-1]>0)){flag=1;break;}}}}

			   if(abs(a[1][0]-a[0][0])==abs(a[1][1]-a[0][1]))
        	   {if((chess[a[1][0]-1][a[1][1]-1]>7)||(chess[a[1][0]-1][a[1][1]-1]==0))
        	   {if((a[1][0]>a[0][0])&&(a[1][1]>a[0][1]))
        	   {flag=0;for(i=a[0][0]+1,j=a[0][1]+1;i<a[1][0],j<a[1][1];i++,j++)if((chess[i-1][j-1]>0)){flag=1;break;}}
        	   if((a[1][0]>a[0][0])&&(a[1][1]<a[0][1]))
        	   {flag=0;for(i=a[0][0]+1,j=a[0][1]-1;i<a[1][0],j>a[1][1];i++,j--)if((chess[i-1][j-1]>0)){flag=1;break;}}
			   if((a[1][0]<a[0][0])&&(a[1][1]>a[0][1]))
        	   {flag=0;for(i=a[0][0]-1,j=a[0][1]+1;i>a[1][0],j<a[1][1];i--,j++)if((chess[i-1][j-1]>0)){flag=1;break;}}
			   if((a[1][0]<a[0][0])&&(a[1][1]<a[0][1]))
        	   {flag=0;for(i=a[0][0]-1,j=a[0][1]-1;i>a[1][0],j>a[1][1];i--,j--)if((chess[i-1][j-1]>0)){flag=1;break;}}}}}




        //queen2
            if(chess[a[0][0]-1][a[0][1]-1]==12){flag=1;
              if((a[1][0]==a[0][0])||(a[1][1]==a[0][1]))
        	   {if((chess[a[1][0]-1][a[1][1]-1]==0)||(chess[a[1][0]-1][a[1][1]-1]<7))
        	   {if(a[1][0]>a[0][0])
        	   {flag=0;for(i=a[0][0]+1;i<a[1][0];i++)if((chess[i-1][a[1][1]-1]>0)){flag=1;break;}}
        	   if(a[1][0]<a[0][0])
        	   {flag=0;for(i=a[0][0]-1;i>a[1][0];i--)if((chess[i-1][a[1][1]-1]>0)){flag=1;break;}}
        	   if(a[1][1]>a[0][1])
        	   {flag=0;for(i=a[0][1]+1;i<a[1][1];i++)if((chess[a[0][0]-1][i-1]>0)){flag=1;break;}}
        	   if(a[1][1]<a[0][1])
        	   {flag=0;for(i=a[0][1]-1;i>a[1][1];i--)if((chess[a[0][0]-1][i-1]>0)){flag=1;break;}}}}

			   if(abs(a[1][0]-a[0][0])==abs(a[1][1]-a[0][1]))
        	   {if((chess[a[1][0]-1][a[1][1]-1]<7)||(chess[a[1][0]-1][a[1][1]-1]==0))
        	   {if((a[1][0]>a[0][0])&&(a[1][1]>a[0][1]))
        	   {flag=0;for(i=a[0][0]+1,j=a[0][1]+1;i<a[1][0],j<a[1][1];i++,j++)if((chess[i-1][j-1]>0)){flag=1;break;}}
        	   if((a[1][0]>a[0][0])&&(a[1][1]<a[0][1]))
        	   {flag=0;for(i=a[0][0]+1,j=a[0][1]-1;i<a[1][0],j>a[1][1];i++,j--)if((chess[i-1][j-1]>0)){flag=1;break;}}
			   if((a[1][0]<a[0][0])&&(a[1][1]>a[0][1]))
        	   {flag=0;for(i=a[0][0]-1,j=a[0][1]+1;i>a[1][0],j<a[1][1];i--,j++)if((chess[i-1][j-1]>0)){flag=1;break;}}
			   if((a[1][0]<a[0][0])&&(a[1][1]<a[0][1]))
        	   {flag=0;for(i=a[0][0]-1,j=a[0][1]-1;i>a[1][0],j>a[1][1];i--,j--)if((chess[i-1][j-1]>0)){flag=1;break;}}}}}


		}*/
























