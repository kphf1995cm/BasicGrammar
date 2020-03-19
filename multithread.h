#ifndef _MULTITHREAD_H_
#define _MULTITHREAD_H_
#include <thread>
#include <iostream>

// https://blog.csdn.net/liuker888/article/details/46848905

void show(const char* str, const int id) {
	std::cout << str << id + 1 << std::endl;
}

class ThreadTask
{
public:
	void test() {
		std::thread t1(show, "t1 thread: ", 0);
		t1.join();
		std::thread t2(show, "t2 thread: ", 1);
		t2.detach();
		auto func = [](const char* str) {std::cout << str << std::endl; };
		std::thread t3(func, "lamda thread t3");
		t3.join();
	}
};

#endif

// A simple case about how to use pthread(Linux的原生线程库)

/*
#include <iostream>
#include <pthread.h>
using namespace std;

#define NUM_THREADS 5

void* say_hello(void* args) {
	cout << "Hello" << endl;
}

int main() {
	pthread_t tids[NUM_THREADS];
	for (int i = 0; i<NUM_THREADS; i++) {
		int ret = pthread_create(&tids[i], NULL, say_hello, NULL);
		if (ret != 0) {
			cout << "pthread_create error" << endl;
		}
	}
	pthread_exit(NULL);
}
*/
