#include "graph.h"
#include <algorithm>
graph::graph(int size)
{
    this->vertexCount = size;
    matrix = new vector<vertex>(size);
    for (int i = 0; i < size; i++) {
        matrix->at(i).value = i;
    }
}

void graph::insert(int x, int y) {
    if (x >= 0 && x < this->vertexCount && y >= 0 && y < this->vertexCount) {
        matrix->at(x).adj.push_back(y);
        matrix->at(y).adj.push_back(x);
    }
}


void graph::DFS(int v)
{
    cout << "DFS starting from " << v << endl;
    bool *visited = new bool[this->vertexCount];
    for (int i = 0; i < this->vertexCount; i++){
        visited[i] = false;
    }
    
    queue<int> que1, que2;
    
    int size = 0;
    
    que1.push(v);
    size++;
    
    while (size != 0)
    {
        if (!que1.empty())
        {
            while (que1.size() != 1)
            {
                que2.push(que1.front());
                que1.pop();
            }
            
            int temp = que1.front();
            que1.pop();
            que2.push(temp);
            queue<int> q = que1;
            que1 = que2;
            que2 = q;
            v = temp;
        }
        if (!que1.empty())
        {
            while (que1.size() != 1)
            {
                que2.push(que1.front());
                que1.pop();
            }
            que1.pop();
            size--;
            queue<int> q = que1;
            que1 = que2;
            que2 = q;
        }
        if (visited[v])
        continue;
        visited[v] = true;
        
        cout << matrix->at(v).value << " ";
        sort(matrix->at(v).adj.begin(), matrix->at(v).adj.end());
        for (vector<int>::reverse_iterator i = matrix->at(v).adj.rbegin(); i != matrix->at(v).adj.rend(); i++)
        {
            if (!visited[*i])
            {
                que1.push(*i);
                size++;
            }
        }
    }
    cout << endl << endl;
}
graph::~graph()
{
    
    for(vector<vertex>::iterator x = matrix->begin(); x != matrix->end(); x++){
        vector<int>().swap(x->adj);
    }
    vector<vertex>().swap(*matrix);
}

