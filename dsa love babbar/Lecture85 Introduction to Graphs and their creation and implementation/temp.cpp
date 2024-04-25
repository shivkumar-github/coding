// // // /*

// // // */

// // // #include <iostream>
// // // #include <vector>
// // // using namespace std;

// // // vector<vector<int>> adjList(int n, int m, vector<vector<int>> &edges)
// // // {
// // //     vector<vector<int>> ans(n);
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         ans[i].push_back(i);
// // //     }

// // //     for (int i = 0; i < m; i++)
// // //     {
// // //         int u = edges[i][0];
// // //         int v = edges[i][1];
// // //         ans[u].push_back(v);
// // //         ans[v].push_back(u);
// // //     }
// // // }

// // // int main()
// // // {

// // //     return 0;
// // // }

// // /*

// // */

// // #include <iostream>
// // #include <unordered_map>
// // #include <list>
// // using namespace std;

// // template <typename T>
// // class graph
// // {
// // public:
// //     unordered_map<T, list<T>> adjList;
// //     void adjEdges(T u, T v, bool direction)
// //     {
// //         adjList[u].push_back(v);
// //         if (!direction)
// //         {
// //             adjList[v].push_back(u);
// //         }
// //     }

// //     void print()
// //     {
// //         for (auto i : adjList)
// //         {
// //             cout << i.first << " - > ";
// //             for (auto j : i.second)
// //             {
// //                 cout << j << " ";
// //             }
// //             cout << endl;
// //         }
// //     }
// // };

// // int main()
// // {
// //     int edges;
// //     cout << "Enter number of edges : " << endl;
// //     cin >> edges;
// //     graph<int> g;
// //     for (int i = 0; i < edges; i++)
// //     {
// //         int u,v;
// //         cin >> u >> v ;
// //         g.adjEdges(u,v,0);
// //     }
// //     g.print();
// //     return 0;
// // }

// /*

// */

// #include <iostream>
// #include <unordered_map>
// #include <vector>
// #include <list>
// #include <queue>
// using namespace std;

// void prepareAdjList(unordered_map<int, list<int>> &adjList, vector<vector<int>> edges)
// {
//     for (int i = 0; i < edges.size(); i++)
//     {
//         adjList[edges[i][0]].push_back(edges[i][1]);
//     }
// }

// void bfs(vector<int> &ans, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adjList, int node)
// {
//     queue q<int>;
//     q.push(node);
//     visited[node]=1;
//     for (int i = 0; i < adjList[node].size(); i++)
//     {

//     }

// }

// vector<int> bfsTraversal(int n, vector<vector<int>> edges)
// {
//     unordered_map<int, list<int>> adjList;
//     unordered_map<int, bool> visited;
//     vector<int> ans;
//     prepareAdjList(adjList, edges);
//     for (int i = 0; i < n; i++)
//     {
//         if (!visited[i])
//         {
//             bfs(ans, visited, adjList);
//         }
//     }
// }

// int main()
// {

//     return 0;
// }

/*

*/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(vector<vector<int>> adjList, int start)
{
    queue<int> q;
    q.push(start);
    vector<bool> visited(n, 0);
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        for (int i = 0; i < adjList[temp].size(); i++)
        {
            if (visited[adjList[temp][i]])
            {
                q.push(adjList[temp][i]);
                visited[adjList[temp][i]] = true;
                cout << temp << " ";
            }
        }
    }
    cout << endl;
}

int main()
{
    vector<vector<int>> adjList = {{1, 2}, {6, 4, 5}, {7}, {}, {}, {}, {8}, {}, {}};
    bfs(adjList, 0);
    return 0;
}