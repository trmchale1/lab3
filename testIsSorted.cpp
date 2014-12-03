#include <iostream>
#include "isSorted.h"
using namespace std;
int main (){

	int a[2] = {0,1};
	int b[3] = {0,1,2};
	int c[4] = {0,1,2,3};
	int d[5] = {0,1,2,3,4};
	int e[6] = {0,1,2,3,4,5};
	int f[7] = {0,1,2,3,4,5,6};
	int g[8] = {0,1,2,3,4,5,6,7};
	int h[9] = {0,1,2,3,4,5,6,7,8};
	int i[10] = {0,1,2,3,4,5,6,7,8,9};
	int j[25] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
	int k[5] = {-5,-4,-3,-2,-1};
	bool x = 1;
	
	x = isSorted(i,10);
	cout << x << endl;
 	x = isSorted(h,9);
	cout << x << endl;
	x =  isSorted(g,8);
	cout << x << endl;
        x = isSorted(f,7);
	cout << x << endl;
	x = isSorted(e,6);
	cout << x << endl;
	x = isSorted(d,5);
	cout << x << endl;
	x = isSorted(c,4);
	cout << x << endl;
	x = isSorted(b,3);
	cout << x << endl;
	x = isSorted(a,2);
	cout << x << endl;	
	x = isSorted(j,25);
	cout << x << endl;
	x = isSorted(k,5);
	cout << x << endl;

}
