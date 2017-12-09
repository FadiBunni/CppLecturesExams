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

	for (unsigned int i = 0; i < n; i++) {
		for (unsigned int j = 0; j < n; j++) {
			v[i] += A[i][j];
		}
	}
	return v;
}

// Exercise 1 (d)
// Implement this function
vector<double> sumCols(double * * A, unsigned int n){
	vector<double> v(n, 0);

	for (unsigned int i = 0; i < n; i++) {
		for (unsigned int j = 0; j < n; j++) {
			v[j] += A[i][j];
		}
	}
	return v;
}

// Exercise 1 (e)
// Implement this function
void reduce(double * * A, unsigned int n){
	double * * B = new double *[n];

	for (unsigned int i = 0; i<n; i++) {
		B[i] = new double[n];
	}

	int left, right, up, down;

	for (unsigned int i = 0; i < n; i++) {
		for (unsigned int j = 0; j < n; j++) {

			if (i > 0) {
				
				up = A[i - 1][j];
			}
			else {
				up = 0;
			}
			if (j > 0) {
				left = A[i][j - 1];
			}
			else {
				left = 0;
			}
			if (i < n - 1) {
				down = A[i + 1][j];
			}
			else {
				down = 0;
			}
			if (j < n - 1) {
				right = A[i][j + 1];

			}
			else {
				right = 0;
			}
			B[i][j] = left + right + up + down;
		}
	}

	for (unsigned int i = 0; i < n; i++) {
		for (unsigned int j = 0; j < n; j++) {
			A[i][j] = B[i][j];
		}
	}
	delete B;
}

// Do not modify
void print(vector<double> & v){
    for(unsigned int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}