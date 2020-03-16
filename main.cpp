# include <iostream>
# include "constructor.h"
# include "pointer.h"
# include "cplusplus11.h"
# include "multithread.h"

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
	std::thread t1(func, 1);
	std::thread t2([]() {
		std::cout << "hello " << std::this_thread::get_id() << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
		std::cout << "world " << std::this_thread::get_id() << std::endl;
	});
	ThreadTask task(1, 2);
	std::thread t3(task);

	t1.join();
	t2.join();
	t3.join();
}

int main() {
	testThread();
	return 0;
}