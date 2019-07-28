#ifndef _GRAP_H_
#define _GRAP_H_
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class graph
{
private:
	struct vertex {
		int value;
		vector<int> adj;
	};
	vector<vertex>* matrix;
	int vertexCount;
public:
	graph(int size);
	void insert(int x, int y);
	void DFS(int v);

	~graph();
};

#endif

