# ifndef _CPLUSPLUS11_H
# define _CPLUSPLUS11_H
# include<iostream>
# include<vector>
# include<thread>
class C11Feature {
public:
	// foreach sentence
	void traverse() {
		int nArr[5] = {1,2,3,4,5};
		for (int &x : nArr) {
			x *= 2;
		}
		for (int x : nArr) {
			std::cout << x << " ";
		}
		std::cout << std::endl;
	}

	// auto
	void testAuto() {
		std::vector<int> vecs(10, 2);
		for (auto i = vecs.begin(); i != vecs.end(); i++) {
			std::cout << *i << " ";
		}
		std::cout << std::endl;
	}
};
# endif