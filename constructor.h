# ifndef _CONSTRUCTOR_H_
# define _CONSTRUCTOR_H_
# include<iostream>

class PPA {
public:
	int ppa;
	PPA() {
		std::cout << "PPA constructor" << std::endl;
	}
	~PPA() {
		std::cout << "PPA destructor" << std::endl;
	}
};

class CPA1 {
public:
	int cpa1;
	CPA1() {
		std::cout << "CPA1 constructor" << std::endl;
	}
	~CPA1() {
		std::cout << "CPA1 destructor" << std::endl;
	}
};

class CPA2 {
public:
	int cpa2;
	CPA2() {
		std::cout << "CPA2 constructor" << std::endl;
	}
	~CPA2() {
		std::cout << "CPA2 destructor" << std::endl;
	}
};

class PA:public PPA {
public:
	int pa;
	CPA1 cpa1;
	CPA2 cpa2;
	PA(int a):PPA(),pa(a),cpa2(),cpa1() {
		std::cout << "PA constructor" << std::endl;
	}
	PA():PPA(),pa(0) {
		std::cout << "PA constructor" << std::endl;
	}
	~PA() {
		std::cout << "PA destructor" << std::endl;
	}
};

class PB {
public:
	int pb;
	PB() {
		std::cout << "PB constructor" << std::endl;
	}
	~PB() {
		std::cout << "PB destructor" << std::endl;
	}
};

class A :public PA, public PB {
public:
	int a;
	A():PB(),PA() {
		std::cout << "A constructor" << std::endl;
	}
	~A() {
		std::cout << "A destructor" << std::endl;
	}
};

# endif
