#include <iostream>
#include "tiempo.h"

using namespace std;

int main (int argc, char *argv[]){
    
    
     int N= atoi(argv[1]);
	int k=0; 
	int i=0, j=0; 
	int aux; 
	int *vector = new int [N]; 
    double utime0, stime0, wtime0,utime1, stime1, wtime1; 

	while(cin>>k && i<N){ 
		vector[i]= k;
		i++;
	}
	
	uswtime(&utime0, &stime0, &wtime0); 
	
	for (i=0; i<N; i++){
		for(j=0; j<N-1; j++){
			if(vector[j]>vector[j+1]){
				aux= vector[j];
				vector[j]= vector[j+1];
				vector[j+1]=aux;
			}
		}
	}
	
	uswtime(&utime1, &stime1, &wtime1); 
    
    cout<<"Para"<<N <<" numeros"<<endl;
    
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
	printf("\n");*/
    
	//--------------------------------------------------------------------------------------------------------------//
	
    return 0;
}
