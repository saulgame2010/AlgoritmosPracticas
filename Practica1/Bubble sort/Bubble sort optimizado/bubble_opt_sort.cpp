#include <iostream>
#include "tiempo.h"

using namespace std;

int main (int argc, char *argv[]){

   
    int N= atoi(argv[1]), size = 0;
    size = N;
	int *array= new int [N];
	int k=0; 
	int i=0, j=0; 
	bool flag= true;
	int aux=0; 
	double utime0, stime0, wtime0,utime1, stime1, wtime1; 
	
	while(cin>>k && N--){ 
		array[i]= k;
		i++;
	}
    
	i=0;
    
    uswtime(&utime0, &stime0, &wtime0); 
    
	while(i<size && flag==true){
		flag= false;
		for (j=0;  j<size-1;  j++){
			if(array[j] > array[j+1]){
				aux= array[j];
				array[j]= array[j+1];
				array[j+1]= aux;
				flag= true;
			}
		}
		i++;
	}
	
	uswtime(&utime1, &stime1, &wtime1); 
	/**
	for(i=0; i<size; i++){
		cout << array[i] << endl;
	}**/
	

     cout<<"Para "<<size<<" numeros"<<endl;
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
