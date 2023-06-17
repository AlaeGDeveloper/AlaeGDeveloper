#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int x , product,n;
	x = 1 ;
	product = 1 ;
	cout << "Enter n : ";
	cin >> n;
	while(x <= n){
	 product = product * x;
	 x += 1;
	}
	cout << "Solution = " << product;
	return 0;
	}
