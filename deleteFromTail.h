template <class T>
T DLLLike<T>::deleteFromTail(){
	int sizeFront,sizeBack;
    int i;
	sizeFront = front.size();
	sizeBack = back.size();
	T valueTail;

	if(sizeBack>0){
			valueTail = back.top();
			back.pop();
        
    }
    
	else if(sizeFront>0){
        
		for(i=0;i<sizeFront;i++){
				addToTail(front.top());
				front.pop();
			}
        
		valueTail = back.top();
		back.pop();
		for(i=0;i<sizeFront-1;i++){
				addToHead(back.top());
				back.pop();
			}
        
    }
    
	return valueTail;
    
}
