#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;
template <typename T>
class graph
{
public:
    unordered_map<T, list<T>> adj;
    void addedge(T u, T v, bool direction)
    {
        adj[u].push_back(v);
        // 1->undirected
        // 0->directed
        if (direction)
        {
            adj[v].push_back(u);
        }
    }

    void print()
    {
        for (auto i : adj)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << j << ",";
            }
            cout << endl;
        }
    }
};
int main()
{
    graph<int> g;
    cout << "enter the number nodes and edges" << endl;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addedge(u, v, 1);
    }

    g.print();

    return 0;
}

// second method

vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
    // Write your code here.
    vector<int>ans[n];
    for(int i=0;i<m;i++){
        int u=edges[i][0];
        int v=edges[i][1];
        ans[u].push_back(v);
        ans[v].push_back(u);
    }
   vector < vector < int >>adj(n);
   for(int i=0;i<n;i++){
       adj[i].push_back(i);
      for(int j=0;j<ans[i].size();j++){
          adj[i].push_back(ans[i][j]);
      }

   } 
   return adj;
}