#include <iostream>

template <class T>
class BSTNode{
public:
	T data;
	BSTNode<T> * left;
	BSTNode<T> * right;
	BSTNode<T> * parent;
 
	BSTNode(const T & new_data){
		data = new_data;
		left = NULL;
		right = NULL;
		parent = NULL;
	}
};

template <class T>
class BST{
private:
	BSTNode<T> * root;
public:

	BST();

	// These functions will be implemented recursively. The following are driver functions
	// for the programmer to use.
	void insert(const T &);
	void print_alphabetical() const;
	void print_smaller(const T &) const;
	int get_depth() const;


private:

	void insert(const T&, BSTNode<T> *);
	void print_alphabetical(BSTNode<T> *) const;
	void print_smaller(const T&, BSTNode<T> *) const;
	int get_depth(BSTNode<T> *) const;
};



template<class T>
BST<T>::BST(){
	root = NULL;
}


template<class T>
void BST<T>::insert(const T& new_data){
	if(root == NULL){
		root = new BSTNode<T>(new_data);
	}else{
		insert(new_data, root);
	}
}


template<class T>
void BST<T>::insert(const T& new_data, BSTNode<T> * node){
	if(new_data < node->data){
		if(node->left){
			insert(new_data, node->left);
		}
		else{
			node->left = new BSTNode<T>(new_data);
			node->left->parent = node;
		}
	}else{
		if(node->right){
			insert(new_data, node->right);
		}
		else{
			node->right = new BSTNode<T>(new_data);
			node->right->parent = node;
		}
	}
}


template<class T>
void BST<T>::print_alphabetical() const{
	print_alphabetical(root);
	std::cout << std::endl;
}

template<class T>
void BST<T>::print_alphabetical(BSTNode<T> * node) const{
	if(node){
		print_alphabetical(node->left);
		std::cout << node->data << " ";
		print_alphabetical(node->right);
	}
}


template<class T>
void BST<T>::print_smaller(const T& n) const{
	print_smaller(n, root);
	std::cout << std::endl;
}


template<class T>
void BST<T>::print_smaller(const T& n, BSTNode<T> * node) const{
	if(node){
		print_smaller(n, node->left);
		if(node->data < n){
			std::cout << node->data << " ";
			print_smaller(n, node->right);
		}
	}
}


template<class T>
int BST<T>::get_depth() const{
	return get_depth(root);
}

template<class T>
int BST<T>::get_depth(BSTNode<T> * node) const{
	if(!node)
		return 0;
	int left_depth = get_depth(node->left);
	int right_depth = get_depth(node->right);

	if(right_depth > left_depth)
		return right_depth + 1;
	else
		return left_depth + 1;
}