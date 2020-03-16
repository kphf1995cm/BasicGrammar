#ifndef _MULTITHREAD_H_
#define _MULTITHREAD_H_
#include <thread>
#include <iostream>

class ThreadTask
{
public:
	ThreadTask(int a, int b)
		: a_(a), b_(b)
	{  }

	void operator()()
	{
		std::cout << "hello " << std::this_thread::get_id() << std::endl;
		std::cout << "a + b = " << a_ + b_ << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
		std::cout << "world " << std::this_thread::get_id() << std::endl;
	}

private:
	int a_;
	int b_;
};

void func(int a)
{
	std::cout << "hello " << std::this_thread::get_id() << std::endl;
	std::cout << a << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(1));
	std::cout << "world " << std::this_thread::get_id() << std::endl;
}

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
