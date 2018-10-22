#include "intpp.h"
#include <cstdlib>
#include <iostream>

using namespace std;

Integer::Integer(int x) {
	this->val = x;
}
Integer::~Integer() {}
// char* Integer::to_str() {
// 	char arr[MAX_STR_SIZE];
// 	itoa(this->val, arr, 10);
// 	return arr;
// }

string Integer::to_str() {
	char arr[MAX_STR_SIZE];
	itoa(this->val, arr, 10);
	string s(arr);
	delete arr;
	return s;
}

Integer operator+(Integer &a, Integer &b) {
	Integer i(a.val + b.val);
	return i;
}
Integer operator-(Integer &a, Integer &b) {
	Integer i(a.val - b.val);
	return i;
}
Integer operator*(Integer &a, Integer &b) {
	Integer i(a.val * b.val);
	return i;
}
Integer operator/(Integer &a, Integer &b) {
	Integer i(a.val / b.val);
	return i;
}
/**** BITWISE ****/
Integer operator&(Integer &a, Integer &b) {
	Integer i(a.val & b.val);
	return i;
}
Integer operator|(Integer &a, Integer &b) {
	Integer i(a.val | b.val);
	return i;
}
Integer operator~(Integer &a) {
	Integer i(~(a.val));
	return i;
}
Integer operator^(Integer &a, Integer &b) {
	Integer i(a.val ^ b.val);
	return i;
}
Integer operator>>(Integer &a, Integer &b) {
	Integer i(a.val >> b.val);
	return i;
}
Integer operator<<(Integer &a, Integer &b) {
	Integer i(a.val << b.val);
	return i;
}

int main(int argc, char const *argv[])
{
	Integer a(10);
	Integer b(11);
	//printf("A: %s\nB: %s\n", a.to_str(), b.to_str());
	cout << "A: " << a.to_str() << endl;
	cout << "B: " << b.to_str() << endl;
	cout << "A + B: " << (a+b).to_str() << endl;
	cout << "A - B: " << (a-b).to_str() << endl;
	cout << "A * B: " << (a*b).to_str() << endl;
	cout << "A / B: " << (a/b).to_str() << endl;
	return 0;
}
