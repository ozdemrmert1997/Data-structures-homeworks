template <class T>
void DLLLike<T>::printAll(){
	int sizeFront, sizeBack;
    int i;
	sizeFront = front.size();
	sizeBack = back.size();
	
	if(sizeFront+sizeBack<=0){
			cout << "Empty";
		}
	
	for(i=0;i<sizeFront;i++){
			cout << front.top() << " ";
			addToTail(front.top());
			front.pop();
		}
    
	for(i=0;i<sizeFront;i++){
			addToHead(back.top());
			back.pop();
		}

	for(i=0;i<sizeBack;i++){
			addToHead(back.top());
			back.pop();
		}
    
	for(i=0;i<sizeBack;i++){
			cout << front.top() << " ";
			addToTail(front.top());
			front.pop();
		}
	
	cout << endl;
}
