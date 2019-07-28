#include <iostream>
#include "intSLList.h"
int list_sum(IntSLList &list){
		int top=0,var;
		IntSLList list_eleman;
    if(list.isEmpty()){
        return 0;
    }
    else{
        while(!list.isEmpty()){
                var=list.deleteFromTail();
                list_eleman.addToHead(var);
                top=top+var;
            }
		return top;
	}
}

