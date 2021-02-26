#include <stdio.h>
#include <iostream>
#include <time.h>
#include <chrono>
#include "TestaPrimo.h"

using namespace std;
using namespace std::chrono; 

int main(){

	
	int i;
	int primo;
	int n = 2147483647;
	
	chrono::time_point<std::chrono::high_resolution_clock> start, end;
    start = chrono::high_resolution_clock::now();
	
	for(i=0;i<1;i++){
		primo = TestaPrimo(n);
	}

    end = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsed_seconds = end - start;
    auto x = chrono::duration_cast<chrono::milliseconds>(elapsed_seconds);
    
    if( primo == 1 )
		cout << n << " Eh primo." << endl;
	else
		cout << n << " Nao eh primo." << endl;

    //to_string
    string result = to_string(x.count());
	
	cout << result <<" MS" << endl;
	
	return 0;
}
