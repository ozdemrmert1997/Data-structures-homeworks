template <class T>
int DLLLike<T>::count(const T & el){
	int count=0,sizeFront,sizeBack;
    int i;
	sizeBack = back.size();
	sizeFront = front.size();
	
	if(sizeFront+sizeBack <= 0){
			return 0;
		}
	
	for(i=0;i<sizeBack;i++){
        
			if(back.top()==el){
                count++;
            }
			addToHead(back.top());
			back.pop();
		}
    
    
	for(i=0;i<sizeBack;i++){
			addToTail(front.top());
			front.pop();
        
		}
	

	for(i=0;i<sizeFront;i++){
            if(front.top()==el){
                count++;
            }
			addToTail(front.top());
			front.pop();
		}
    
	for(i=0;i<sizeFront;i++){
			addToHead(back.top());
			back.pop();
		}
	
	return count;
}
