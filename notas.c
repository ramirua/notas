/*desarrolle un algoritmo: calificacion de notas*/
#include <stdio.h>
#include <stdlib.h>


int main()
 {
 	int nota;
 	printf("ingrese la nota del estudiante: ");
 	scanf("%d",&nota);
 	
 	if(nota>=18 && nota<=20)
 	{
 		printf("\t\tSu calificacion es A ");
	 }
	 if(nota>=14 && nota<=17)
	 {
	 	printf("\t\tSu calificacion es B ");
	 }
	  if(nota>=10 && nota<=13)
	 {
	 	printf("\t\tSu calificacion es C ");
	 }
	 if(nota>=1 && nota<=9)
	 {
	 	printf("\t\tSu calificacion es D ");
	 }
	  if(nota<1 || nota>20 )
	  {
	  	printf("\n \t ERROR AL CARGAR LAS NOTAS");
	  }
	
	return 0;
}
