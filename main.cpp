# include <iostream>
# include "constructor.h"
# include "pointer.h"
# include "cplusplus11.h"
# include "multithread.h"
# include "basicstructure.h"

void testConstructor() {
	A a;
}

void testPointer() {
	WildPointer wp;
	wp.generate3();
}

void testC11Feature() {
	C11Feature c11;
	c11.traverse();
	c11.testAuto();
}

void testThread() {
	ThreadTask task;
	task.test();
}

int main() {
	testThread();
	return 0;
}