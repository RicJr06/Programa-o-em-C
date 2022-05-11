#include <stdio.h>
#include <conio.h>
#include <locale.h> 
int main(){
	setlocale(LC_ALL, "portuguese");
	int cont=0;
	float n1, n2, n3, media;
	while (cont<3){
		printf ("Digite as três notas:\n");
		scanf ("%f%f%f", &n1, &n2, &n3);
		media=(n1+n2+n3)/3;
		cont++;
		printf ("\n\nA média e igual a %0.2f", media);
	}
	getch();
	return 0;
}
