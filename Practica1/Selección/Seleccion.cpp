#include<stdio.h>
#include "tiempo.h"
#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{

	double utime0, stime0, wtime0,utime1, stime1, wtime1; 
	int n; 	
	int i; 

	
	if (argc!=2) 
	{
		printf("\nIndique el tamanio del algoritmo - Ejemplo: [user@equipo]$ %s 100\n",argv[0]);
		exit(1);
	} 
	
	else
	{
		n=atoi(argv[1]);
	}
	
		
	uswtime(&utime0, &stime0, &wtime0);
	
    int k = 0, j = 0;
    int aux,min,m;
    int *numeros = new int [n];
    
    while(cin >> m && n--)
    {
        numeros[k] = m;
        k++;
    }
    
    for(k = 0; k < 5; k++)
    {
        min = k;
        for(j = k + 1; j < 5; j++)
        {
            if(numeros[j] < numeros[min])
            {
               min = j; 
            }
        }
        aux = numeros[k];
        numeros[k] = numeros[min];
        numeros[min] = aux;
    }
    
	uswtime(&utime1, &stime1, &wtime1);
	cout<<"Para "<<n<<" numeros"<<endl;
	
	printf("\n");
	printf("real (Tiempo total)  %.10f s\n",  wtime1 - wtime0);
	printf("user (Tiempo de procesamiento en CPU) %.10f s\n",  utime1 - utime0);
	printf("sys (Tiempo en acciónes de E/S)  %.10f s\n",  stime1 - stime0);
	printf("CPU/Wall   %.10f %% \n",100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));
	printf("\n");
	
	printf("\n");
	printf("real (Tiempo total)  %.10e s\n",  wtime1 - wtime0);
	printf("user (Tiempo de procesamiento en CPU) %.10e s\n",  utime1 - utime0);
	printf("sys (Tiempo en acciónes de E/S)  %.10e s\n",  stime1 - stime0);
	printf("CPU/Wall   %.10f %% \n",100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));
	printf("\n");
	
    return 0;
}
