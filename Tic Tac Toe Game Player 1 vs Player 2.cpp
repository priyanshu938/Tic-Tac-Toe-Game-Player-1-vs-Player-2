 

#include <stdio.h>

#include <conio.h>

#include <string.h>



void display(char M[3][3])

{

int i,j;printf("\t\t");

for(i=0;i<3;i++){for(j=0;j<3;j++){printf("%c\t",M[i][j]);}printf("\n\t\t");}

}

int fulldotcheck(char M[3][3]){



int i,j;

for(i=0;i<3;i++){for(j=0;j<3;j++){if(M[i][j]=='.')return 0;}}

return 1;

}

int check(char M[3][3],char cp)

{

if(M[0][0]==cp&&M[0][1]==cp&&M[0][2]==cp

||M[0][0]==cp&&M[1][0]==cp&&M[2][0]==cp

||M[0][0]==cp&&M[1][1]==cp&&M[2][2]==cp

||M[0][1]==cp&&M[1][1]==cp&&M[2][1]==cp

||M[0][2]==cp&&M[1][2]==cp&&M[2][2]==cp

||M[0][2]==cp&&M[1][1]==cp&&M[2][0]==cp

||M[1][0]==cp&&M[1][1]==cp&&M[1][2]==cp

||M[2][0]==cp&&M[2][1]==cp&&M[2][2]==cp)

return 1;

return 0;

}int main()

{

char n1[20],n2[20],N1,N2,M[3][3],c[20],cp;

int i,j,x,y,r=1,ch;

clrscr();printf("\n\n\n\n\n");

printf("\t\t\t");printf("TIC - TAC - TOE\n\n\n");printf("\t\tHello guys! I am Drax.\n\t\tMaster Priyanshu has sent me to guide you \n\t\twhile playing this TIC - TAC -TOE game.");

printf("\n\t\tEnter your names one by one :\n");

printf("\t\t");gets(n1);printf("\t\t");gets(n2);

printf("\n\t\tOkhie...Best of luck %s and %s !\n\t\t Let's start the game !\n\t\tPress any key to start....",n1,n2);getch();

man:

N1='X';N2='O';

for(i=0;i<3;i++){for(j=0;j<3;j++){M[i][j]='.';}}

strcpy(c,n1);cp=N1;

clrscr();printf("\n\n\n\n\n");

printf("\t\t\t");printf("TIC - TAC - TOE\n\n\n");

while(1)

{

printf("\n\t\t%s your turn.\n\t\tEnter cell coordinates :\n",c);

read:fflush(stdin);printf("\t\t");scanf("%d",&x);printf("\t\t");scanf("%d",&y);

if(M[x][y]!='.'||!(0<=x&&x<=2&&0<=y&&y<=2)){printf("\n\t\tInappropriate entry.\n\t\tRe-enter coordinates:\n");goto read;}

M[x][y]=cp;

if(check(M,cp)){clrscr();printf("\n\n\n\n\n");

printf("\t\t\t");printf("TIC - TAC - TOE\n\n\n");display(M);

printf("\n\n\t\tGAME OVER ! %s is the winner.",c);break;}

if(fulldotcheck(M)){clrscr();printf("\n\n\n\n\n");

printf("\t\t\t");printf("TIC - TAC - TOE\n\n\n");display(M);

printf("\n\n\t\tKhichdi!!");break;}

r++;clrscr();printf("\n\n\n\n\n");

printf("\t\t\t");printf("TIC - TAC - TOE\n\n\n");

display(M);printf("\n");

if(r%2==0){strcpy(c,n2);cp=N2;}

else{strcpy(c,n1);cp=N1;}

}printf("\n\t\tPress any key to continue....");getch();

clrscr();printf("\n\n\n\n\n");

printf("\t\t\t");printf("TIC - TAC - TOE\n\n\n");

printf("\n\t\tPress 1 if both of you want to play once more \n\t\tor any other key to Quit the game respectively....");

printf("\n\t\t");scanf("%d",&ch);

if(ch==1){r=1;goto man;}

else

exit(0);

getch();return 0;

}

