#include <iostream>
#include "tiempo.h"

using namespace std;

int main (int argc, char *argv[]){
   
    int N = atoi(argv[1]), size = 0;
	size = N;
	int k; 
	int i=0, j=0; 
	int div= N; 
	int aux; 
	bool flag; 
	int *vector = new int [N]; 
	double utime0, stime0, wtime0,utime1, stime1, wtime1; 
	
	while(cin>>k && i<size){ 
		vector[i]= k;
		i++;
	}
	
	uswtime(&utime0, &stime0, &wtime0); 

	while(div>1){	
		div= div/2;	
		flag= true; 
		while(flag==true){	
			flag= false;	
			i=0;		
			while(i+div <N){	
				if(vector[i]>vector[i+div]){	
					aux= vector[i];	 
					vector[i]=vector[i+div];
					vector[i+div]= aux;
					flag= true;	
				}
				i++;  	
			}				
		}
	}
	
	uswtime(&utime1, &stime1, &wtime1); 
    
    cout<<"Para "<<N<< "Numeros"<<", "<<endl;
    
	printf("\n");
	printf("real (Tiempo total)  %.10f s\n",  wtime1 - wtime0);
	printf("user (Tiempo de procesamiento en CPU) %.10f s\n",  utime1 - utime0);
	printf("sys (Tiempo en acciónes de E/S)  %.10f s\n",  stime1 - stime0);
	printf("CPU/Wall   %.10f %% \n",100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));
	printf("\n");
	
	//Mostrar los tiempos en formato exponecial
	printf("\n");
	printf("real (Tiempo total)  %.10e s\n",  wtime1 - wtime0);
	printf("user (Tiempo de procesamiento en CPU) %.10e s\n",  utime1 - utime0);
	printf("sys (Tiempo en acciónes de E/S)  %.10e s\n",  stime1 - stime0);
	printf("CPU/Wall   %.10f %% \n",100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));
	printf("\n");
	//----------------------------------------------------------------------------------------------------------------------------//
	
	return 0;
}
