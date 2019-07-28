template <class T>
T DLLLike<T>::deleteFromHead(){
	int sizeFront,sizeBack;
    int i;
	sizeFront = front.size();
	sizeBack = back.size();
	T valueHead;

	if(sizeFront>0){
			valueHead = front.top();
			front.pop();
		}
    
	else if( sizeBack > 0){
        
		for(i=0;i<sizeBack;i++){
				addToHead(back.top());
				back.pop();
            
			}
		valueHead = front.top();
		front.pop();
        
		for(i=0;i<sizeBack-1;i++){
				addToTail(front.top());
				front.pop();
			}		
		}
    
	return valueHead;
    
}

