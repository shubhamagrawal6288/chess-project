//header file

// goti 1
void ghora(int x, int y){
int val1, val2;

//option 1
	if(x > 0 && x < 7 && y > 0 && y < 8){
	printf("(%d %d) \n", x + 2, y + 1);}

//option 2
	if(x > 0 && x < 7 && y > 1 && y <= 8){
		printf("(%d %d)\n", x + 2, y - 1);}

//option 3
	if(x > 2 && x <= 8 && y > 0 && y < 8){
		printf("(%d %d)\n", x - 2, y + 1);}

//option 4
	if(x > 2 && x <= 8 &&  y > 1 && y <= 8){
		printf("(%d %d)\n", x - 2, y - 1);}

//option 5
	if(x > 1 && x <= 8 && y > 0 && y < 7){
		printf("(%d %d)\n", x - 1 , y + 2);}

//option 6
	if(x > 1 && x <= 8 && y > 2 && y <= 8){
		printf("(%d %d)\n", x - 1, y - 2);}

//option 7
	if(x > 0 && x < 8 && y > 0 && y < 7){
		printf("(%d %d)\n", x + 1, y + 2);}

//option 8
	val1 = x + 1;
	val2 = y - 2;
	if(x > 0 && x < 8 && y > 2 && y <= 8){
		printf("(%d %d)\n", x + 1, y - 2);}

//last option 
	if(x < 1 || x > 8 || y < 1 || y > 8){
		printf("Enter the coordinates correctly.. \nThere is no possible move with this coordinate...");}

}





//goti 2
void hati (int x, int y){

	int i;
	if(x > 0 && x <= 8 && y <= 8 && y > 0){
		for (i = 1; i <= 8; i++){
		    if(x != i){
				printf("(%d %d)\n", i, y);}}

	}
	if(x > 0 && x <= 8 && y <= 8 && y > 0){
		for(i = 1; i <= 8; i++){
			if(y != i){
				printf("(%d %d)\n", x,i);}}
	}

	if(x > 8 || x < 1 || y > 8 || y < 1 ){
		printf("Enter the coordinates correctly.. \nThere is no possible move with this coordinate...");}
}







//goti 3
void uut (int x, int y){

	int i,a,b,c,d,e,f,g,h;
	a = c = e = g = x;
	b = d = f = h = y;
	//option 1
	for(i = x; i < 8; i++){
		//a= a+1;
		//b= b+1;
		if(a > 0 && a < 8 && b > 0 && b < 8){
			printf ("(%d %d)\t", ++a, ++b);
		}
	}
	printf("\n");

	//option 2
	for(i = x; i < 8; i++){
		//c= c+1;
		//d= d-1;
		if(c > 0 && c < 8 && d > 1 && d <= 8){
			printf ("(%d %d)\t", ++c, --d);
		}

	}
	printf("\n");

	//option 3
	for(i = x; i > 1; i--){
		//e=e-1;
		//f=f+1;
		if(e > 1 && e <= 8 && f > 0  && f <8){
			printf ("(%d %d)\t", --e, ++f);
		}
	}
	printf("\n");

	//option 4
	for(i = x; i > 1; i--){
		//g=g-1;
		//h=h-1;
		if(g > 1 && g <= 8 && h > 1 && h <=8){
			printf ("(%d %d)\t", --g, --h);
		}
	}
	printf("\n");

	if(x > 8 || x < 1 || y > 8 || y < 1 ){
		printf("Enter the coordinates correctly.. \nThere is no possible move with this coordinate...");}
}





// goti 4
void mantri (int x, int y){

	int i, a, b, c, d, e, f, g, h;;
	// straight line
	if(x > 0 && x <= 8 && y <= 8 && y > 0){
		for (i = 1; i <= 8; i++){
		    if(x != i){
				printf("(%d %d)\n", i, y);}}

	}
	if(x > 0 && x <= 8 && y <= 8 && y > 0){
		for(i = 1; i <= 8; i++){
			if(y != i){
				printf("(%d %d)\n", x,i);}}
	}




	// diagonal line
	a = c = e = g = x;
	b = d = f = h = y;
//option 1
	for(i = x; i < 8; i++){
		if(a > 0 && a < 8 && b > 0 && b < 8){
			printf ("(%d %d)\t", ++a, ++b);
		}
	}
	printf("\n");

	//option 2
	for(i = x; i < 8; i++){
		if(c > 0 && c < 8 && d > 1 && d <= 8){
			printf ("(%d %d)\t", ++c, --d);
		}

	}
	printf("\n");

	//option 3
	for(i = x; i > 1; i--){
		if(e > 1 && e <= 8 && f > 0  && f <8){
			printf ("(%d %d)\t", --e, ++f);
		}
	}
	printf("\n");

	//option 4
	for(i = x; i > 1; i--){
		if(g > 1 && g <= 8 && h > 1 && h <=8){
			printf ("(%d %d)\t", --g, --h);
		}
	}
	printf("\n");

	if(x > 8 || x < 1 || y > 8 || y < 1 ){
		printf("Enter the coordinates correctly.. \nThere is no possible move with this coordinate...");}
}







// goti 5
void raja (int x, int y){
	if(x < 8 && x > 0 && y <= 8 && y > 0){
		printf("(%d %d)\n", x+1, y);}
	
	if(x <= 8 && x > 0 && y < 8 && y > 0 ){
	printf("(%d %d)\n", x, y+1);}

	if( x <= 8 && x > 0 && y < 9 && y > 1){
		printf("(%d %d)\n", x, y-1);}

	if(x < 9 && x > 1 && y <= 8 && y > 0){
		printf("(%d %d)\n", x-1, y);}

	if(x > 0 && x < 8 && y > 0 && y < 8 ){
		printf("(%d %d)\n", x+1, y+1);}

	if(x > 0 && x < 8 && y < 9 && y > 1){
		printf("(%d %d)\n", x+1, y-1);}

	if( x < 9 && x > 1 &&  y > 0 && y < 8){
		printf("(%d %d)\n", x-1, y+1);}

	if( x < 9 && x > 1 && y	 < 9 && y > 1){
	printf("(%d %d)\n", x-1, y-1);}

	if(x > 8 || x < 1 || y > 8 || y < 1 ){
		printf("Enter the coordinates correctly.. \nThere is no possible move with this coordinate...");}

}






// goti 6
void sipahi (int x, int y){
	if(x < 8 && x > 0 && y <= 8 && y > 0 ){
		printf("(%d %d)\n", x+1, y);}

	if(x < 8 && y < 8 && x > 0 && y > 0){
    	printf("(%d %d)\n", x+1, y+1);}
	
	if(x < 8 && y > 1 && x > 0 && y <= 8){
		printf("(%d %d)\n", x+1, y-1);}
	
	if(x > 7 || x < 1 || y > 7 || y < 1 ){
		printf("Enter the coordinates correctly.. \nThere is no possible move with this coordinate...");}

}
