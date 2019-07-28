#include <iostream>
using namespace std;

#include "intSLList.h"

int list_sum(IntSLList & list);


int main() {

	IntSLList list;
	int answer = 0;
	for (int i = 0; i < 50; i++) {
		answer += i;
		list.addToTail(i);
	}

	int sum = list_sum(list);
	list.printAll();
	cout << endl << "Sum is: " << sum << endl;


}