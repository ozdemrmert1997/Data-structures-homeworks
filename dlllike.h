#include <iostream>
#include <stack>
using std::stack;
using std::cout;
using std::endl;


template <class T>
class DLLLike{
private:
	stack <T> front;
	stack <T> back;

public:

	void addToHead(const T & el){
		front.push(el);
	}

	void addToTail(const T & el){
		back.push(el);
	}

	void printAll();		// Not mandatory, but can be useful for debugging
	T deleteFromHead();
	T deleteFromTail();
	int count(const T & el);

};


#include "printAll.h"
#include "count.h"
#include "deleteFromHead.h"
#include "deleteFromTail.h"