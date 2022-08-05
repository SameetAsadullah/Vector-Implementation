#include<iostream>
#include"Vector.h"
using namespace std;

int main() {
	Vector<int> v;
	v.insert(5);
	v.insert(10);
	v.insert(15);
	v[2] = 12;
	cout << "First Vector: ";
	v.print();

	Vector<int> v1;
	v1.insert(2);
	v1.insert(6);
	v = v1;
	cout << "Second Vector copied into First Vector: ";
	v.print();
}