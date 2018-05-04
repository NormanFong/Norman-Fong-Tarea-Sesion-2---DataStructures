#include<iostream>
#include<windows.h>
#include <cstdlib>
#include <string>
#include <stdio.h>
#include <time.h>
using namespace std;

int main(){
	
	cout<<"Reading all log entries...";
	clock_t start = clock();
	int i=0;
	for(i=0; i<=1000; i++){
		Sleep( 2 *1000/80 );
	}
		printf("Number of lines:  %f",i );
	printf("Tiempo transcurrido: %f", ((double)clock() - start) / CLOCKS_PER_SEC);
	return EXIT_SUCCESS;
}
