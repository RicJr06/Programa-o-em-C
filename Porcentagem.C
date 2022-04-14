#include <stdio.h>

main(){
	
	int a, b , c, d;
	printf("total de votos do municipio a: ");
	scanf("%i", &a);
	
    printf("total de votos em brancos b: ");
	scanf("%i", &b);
	
	printf("total de votos nulos c: ");
	scanf("%i", &c);
	
	printf("total de votos validos d: ");
	scanf("%i", &d);
	
	
	b=a*b/100*0.01;
	c=a*c/100*0.01;
	d=a*d/100*0.01;
	
	
	printf(" o resultado de b é= %i" ,b );
	printf(" o resultado de c é= %i" ,c );
	printf(" o resultado de d é= %i" ,d );
    
	
} 
