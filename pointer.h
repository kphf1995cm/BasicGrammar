# ifndef _POINTER_
# define _POINTER_
# include<iostream>
# include<memory>

class WildPointer {
public:
	void generate1() {
		// uninitialized
		int *p1;
		std::cout << *p1<<std::endl;
	}

	void generate2() {
		// after delete/free, not set NULL
		int *p2 = new int[1];
		int *p3 = p2;
		delete p3;
		std::cout << *p3 << std::endl;
		std::cout << *p2 << std::endl;
	}

	void generate3() {
		// out of scope
		int *p4;
		{
			int a = 2;
			p4 = &a;
		}
		std::cout << *p4 << std::endl;
	}
};

class SmartPointer {
	// shared_ptr,weak_ptr,unique_ptr is supported by c++11
	// to solve problem of memory leak
};

# endif