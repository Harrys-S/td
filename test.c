#include <stdio.h>
#include <stdlib.h>

void exo_1(){
	int a=0, b=0;
	printf("Taper A: ");
	scanf("%d", &a);
	printf("Taper B: ");
	scanf("%d", &b);
	printf("A * B= %d", a*b);
}

void exo_2(){
	int a=0, b=0, c=0;
	printf("Taper A: ");
	scanf("%d", &a);
	printf("Taper B: ");
	scanf("%d", &b);
	c=a;
	a=b;
	b=c;
	printf("Au début on avait a=%d et b=%d. Mais maintenant...BIMMM!!! a=%d et b=%d.", c, a, a, b);
}

void exo_3(){
	char a = 0;
	printf("Taper une lettre ou un chiffre: ");
	scanf("%c", &a);
	printf("%c %d  0x%x",a,a,a);
}

void exo_4(){
	int a=0;
	printf("Taper A: ");
	scanf("%d", &a);
	if(a % 2 == 0){
		printf("%d est pair!", a);
	}
	else{
		printf("%d est impair!", a);
	}
}

void exo_5(){
	int a=0, b=0, c=0;
	printf("Taper A: ");
	scanf("%d", &a);
	printf("Taper B: ");
	scanf("%d", &b);
	printf("Taper C: ");
	scanf("%d", &c);
	if(a > b){
		a=a;
	}
	else{
		a=b;
	}
	if(a < c){
		a=c;
	}
	printf("\nLe plus grand est %d", a);
}

void exo_6(){
	int a=1, min=0, max=0, i=0;
	while(a != 0){
		printf("Taper un nombre: ");
		scanf("%d", &a);
		i++;
		if(max < a){
			max=a;
		}
		if(i==1 || i >= 2 && a < min && a!=0){
			min=a;
		}
	}
	printf("Le minimum est %d et le maximum %d", min, max);
}

void exo_7(){
	int i=0, a=0;
	printf("Taper A: ");
	scanf("%d", &a);
	if(a < 0){
		printf("Entrer un nombre supérieur à 0");
	}
	else{
		for(i = 1; i < a+1; i++){
			if(a % i==0 && i!=1){
				printf("\n%d",i);
			}
		}
	}
}

void exo_8(){
	int i=0, a=0, b=0, c=0;
	do{
		printf("Taper A: ");
		scanf("%d", &a);
		printf("Taper B: ");
		scanf("%d", &b);	
	} while(a<0 || b<0);
	if (a < b){
		c=a;
		a=b;
		b=c;
	}
	do{
	a=a-b;
	i++;
	}while(a > b);
	printf("\nLe quotient de la division du plus grand nombre par le plus petit est: %d. Le reste est: %d", i, a);
}

void exo_9(){
	int a=0, b=0;
	do{
		printf("Taper A: ");
		scanf("%d", &a);
		printf("Taper B: ");
		scanf("%d", &b);	
	} while(a<0 || b<0);
	while(b != 0){
		if(b % 2 ==0){
			(2*a)*(b/2)
		}
		else{
			printf("\nLa multiplication suivant le principe récursif donne: %d",a*(b-1)+a);
		}
	}
}

int main(){
	int exo=1;
	int a, b, max, c;
	printf("Choisissez un exercice de 1 à 10: ");
	scanf("%d",&exo);
	switch (exo){
		case 1:
			exo_1();
			break;
			
		case 2:
			exo_2();
			break;
			
		case 3:
			exo_3();
			break;
			
		case 4:
			exo_4();
			break;
		
		case 5:
			exo_5();
			break;
			
		case 6:
			exo_6();
			break;
			
		case 7:
			exo_7();
			break;
			
		case 8:
			exo_8();
			break;
			
		case 9: 
			exo_9();
			break;
			
		default: 
			printf("\nSorry! There isn't an exercise %d", exo);
			break;
	}
	return 0;
}
