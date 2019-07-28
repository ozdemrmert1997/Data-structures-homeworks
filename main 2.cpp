#include <iostream>
#include "graph.h"
using namespace std;
int main() {
	graph g1(7);
	g1.insert(6, 4);
	g1.insert(4, 5);
	g1.insert(4, 3);
	g1.insert(4, 2);
	g1.insert(2, 1);
	g1.insert(3, 1);
	g1.DFS(6);
}
