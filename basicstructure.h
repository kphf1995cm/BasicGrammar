#ifndef _BASICSTRUCTURE_H_
#define _BASICSTRUCTURE_H_
#include <vector>

template<typename T>
class Stack {
private:
	int capacity;
	int index;
	std::vector<T> values;
public:
	Stack(int n) {
		capacity = n;
		values.resize(n);
		index = 0;
	}
	void push(T val) {
		if (index<capacity)
			values[index++] = val;
	}
	void pop() {
		if (index>0)
			index--;
	}
	T top() {
		if (index > 0)
			return values[index - 1];
		else
			return T(0);
	}
	bool empty() {
		return index == 0;
	}
};

#endif
