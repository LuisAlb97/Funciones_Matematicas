//HCLA_P#3
//22-02-2020
//Luis Alberto Hernandz Cozatl
//En esta practica le sacaremos el fibonacci a un numero de tal manera que si ponemos 4 el resultado seria 0,1,1,2,3
//despues le sacaremos el factorial a un numero ,y por el ultimo contaremos cuantos digitos tendra el digito que ingresaremos.

#include<stdio.h>
#include<stdlib.h>

void fibonaci(void);
void factorial(void);
void digitos(void);


int main()
{
	int op;
	do{	
	system("cls");
	printf("******************* Menu ******************\n");
	printf("1.-FIBONACCI.\n");
	printf("2.-FACTORIAL.\n");
	printf("3.-CANTIDAD DE DIGITOS.\n");
	printf("4.-Salir\n\n");
	printf("Selecciones una opcion:\n");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1: fibonaci();
				break;
		case 2: factorial();
				break;
		case 3: digitos();
				break;
	
	}
    }while(op!= 4);
    system("pause");
}

void fibonaci(void)
{
  system ("cls");
   int cantidad, f, numan=0, numac=1, i;
     printf("************ Fibonacci ********************\n\n");
    printf("Ingrese la cantidad de la serie: \n");
	scanf("%d",&cantidad);

	  printf("\n%d \n%d", numan, numac);

	 for(i=1;  i<cantidad;  i++)
	 {
	 	f=numan+numac; 

	 	printf("\n%d ", f);
	    numan=numac; //Numero anterior toma valor del numero actual
	 	 numac=f; //Numero actual toma el valor de la suma de numan y numac
	 }
		     	printf("\n\n");

   system("pause");
}


