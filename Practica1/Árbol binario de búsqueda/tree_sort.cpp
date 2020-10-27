#include <iostream>

#include "binary_tree.cpp"
#include "tiempo.h"

using namespace std;

int main(int argc, char* argv[]){
  

    double utime0, stime0, wtime0,utime1, stime1, wtime1;

    BinaryTree binaryTree = NULL;

    int n;

    int N = 0, size = 0;
    

	if (argc!=2) {
		printf("\nIndique el tamanio del algoritmo - Ejemplo: [user@equipo]$ %s 100\n",argv[0]);
		exit(1);
	} 

	else{
		N=atoi(argv[1]);
	}
	
	size = N;
	
	uswtime(&utime0, &stime0, &wtime0);
    
	
        while(cin>>n && N--){
                insert(binaryTree, n);
        }
    inorder(binaryTree);
    
 
	uswtime(&utime1, &stime1, &wtime1);
	cout<<"-------------------------- Para "<<size<<" Números -----------------------------------"<<endl;
	//Cálculo del tiempo de ejecución del programa
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
	//******************************************************************
}
