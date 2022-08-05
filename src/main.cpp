#include<iostream>
#include"Vector.h"
using namespace std;

int main() {
	Vector<int> v;
	v.insert(5);
	v.insert(10);
	v.insert(15);
	v[2] = 12;
	v.print();
}