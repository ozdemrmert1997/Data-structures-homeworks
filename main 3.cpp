#include "dlllike.h"


int main(){

	DLLLike<int> st;

	for(int i = 100; i < 120; i++){
		if( i % 2 ){
			st.addToHead(i % 8);
		}else{
			st.addToTail(i % 7);
		}
	}

	st.printAll();	// Should print 	7 5 3 1 7 5 3 1 7 5 2 4 6 1 3 5 0 2 4 6
	cout << endl;

	int c4 = st.count(4);
	cout << "Count of 4's: " << c4 << endl;	// Should be 2

	for(int i = 0; i < 20; i++){
		st.deleteFromTail();
		st.printAll();
	}

}
