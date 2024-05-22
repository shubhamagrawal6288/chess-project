#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<chess.h>

void main() {
	char goti[10];
	int board[8][8] = {{81, 82, 83, 84, 85, 86, 87, 88},
	{71, 72, 73, 74, 75, 76, 77, 78},
	{61, 62, 63, 64, 65, 66, 67, 68},
	{51, 52, 53, 54, 55, 56, 57, 58},
	{41, 42, 43, 44, 45, 46, 47, 48},
	{31, 32, 33, 34, 35, 36, 37, 38},
	{21, 22, 23, 24, 25, 26, 27, 28},
	{11, 12, 13, 14, 15, 16, 17, 18}};
	int x, y, i, j;
	clrscr();

	printf("This is 8 X 8 chess board \n\nThis chess game will tell you all possible cordinates off the moves\n\n");
	for(i = 0; i < 8; i++){
		for(j = 0; j < 8; j++){
			printf("%d\t",board[i][j]);
		}
		printf("\n");
	}
	printf("\nenter the name of goti from the following list\n1.Ghora\t 2.Hati\t 3.Uut\t 4.Mantri\t 5.Raja\t 6.Sipahi\n\n");
	scanf("%s",&goti);
	printf("enter the cordinates of goti\n");
	scanf("%d%d", &x, &y);




	if (strcmp (goti, "ghora") == 0){
		ghora(x, y);
	}
	else if (strcmp (goti, "hati") == 0){
		hati(x, y);
	}
	else if (strcmp (goti, "raja") == 0){
		raja(x, y);
	}
	else if (strcmp (goti, "uut") == 0){
		uut(x, y);
	}
	else if (strcmp (goti, "mantri") == 0){
		mantri(x, y);
	}
	else if (strcmp (goti, "sipahi") == 0){
		sipahi(x, y);
	}
	else{
		printf("Please Enter the goti name correctly");
	}
	getch();
}