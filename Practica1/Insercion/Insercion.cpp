
#include<stdio.h>
#include "tiempo.h"
#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{

	double utime0, stime0, wtime0,utime1, stime1, wtime1; //Variables para medición de tiempos
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

    int k = 0;
    int pos, temp,m;
    int j = 0;
    int *numeros = new int [n];

    while(cin >> m && n--)
    {
        numeros[k] = m;
        k++;
    }

    for(k = 0; k < n; k++)
    {
        pos = k;
        temp = numeros[k];
        while(pos > 0 && temp < numeros[pos - 1] )
        {
            numeros[pos] = numeros[pos - 1];
            pos--;
        }
        numeros[pos] = temp;
    }

	uswtime(&utime1, &stime1, &wtime1);
	
    cout<<"Para "<<n<<" números"<<endl;
	
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
