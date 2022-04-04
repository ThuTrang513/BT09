#include<iostream>
using namespace std;
int main(){
	int * p = new int;
	int a = 3;
	p = &a;
	delete p;
	cout << a;
}
