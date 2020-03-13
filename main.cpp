# include <iostream>
# include "constructor.h"
# include "pointer.h"
using namespace std;

void testConstructor() {
	A a;
}

void testPointer() {
	WildPointer wp;
	wp.generate3();
}

int main() {
	testPointer();
	return 0;
}