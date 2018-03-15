# include <stdio.h>
# include <stdlib.h>
# include <string.h>

main(int argc, char *argv[]) {
	int cents;
	scanf("%d", &cents);
	rec(cents);
	return 0;		
	}

void rec(int cents){
	if (cents==0){
		exit(EXIT_FAILURE);
	}
	else if (cents>=50){
		cents-=50;
		printf("50, ");
		rec(cents);
	}	
	else if (cents>=20){
		cents-=20;
		printf("20, ");
		rec(cents);
	}	
	else if (cents>=10){
		cents-=10;
		printf("10, ");
		rec(cents);
	}	
	else if (cents>=5){
		cents-=5;
		printf("5, ");
		rec(cents);
	}
	else if (cents>=2){
		cents-=2;
		printf("2, ");
		rec(cents);
	}
	else if (cents>=1){
		cents-=1;
		printf("1, ");
		rec(cents);
	}
}