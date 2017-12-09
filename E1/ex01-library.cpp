#include <iostream>
#include <vector>
#include "ex01-library.h"

using namespace std;

// Exercise 1 (a)
// Check and correct if necessary
void display(double * * A, unsigned int n){
    for(unsigned int i = 0; i < n; i++){
        for(unsigned int j = 0; j < n; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

// Exercise 1 (b)
// Implement this function
void reset(double * * A, unsigned int n, double x){
	for (unsigned int i = 0; i < n; i++) {
		for (unsigned int j = 0; j < n; j++) {
			A[i][j] = x;
		}
	}
}

// Exercise 1 (c)
// Implement this function
vector<double> sumRows(double * * A, unsigned int n){
	vector<double> v(n, 0); 

	int temp;
	for (unsigned int i = 0; i < n; i++) {
		temp = 0;
		for (unsigned int j = 0; j < n; j++) 
			temp += A[i][j];
		v.push_back(temp);
	}
	return v;
}

// Exercise 1 (d)
// Implement this function
vector<double> sumCols(double * * A, unsigned int n){
    // Put your code here
}

// Exercise 1 (e)
// Implement this function
void reduce(double * * A, unsigned int n){
    // Put your code here
}

// Do not modify
void print(vector<double> & v){
    for(unsigned int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}