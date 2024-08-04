// #include<iostream>
// #include<unordered_map>
// #include<list>
// using namespace std;

// class graph
// {
//     public:
//     unordered_map <int, list<int> > adj;

//     void addEdge(int u, int v, bool direction)
//     {
//         // direction = 0 -> undirected
//         // direction = 1 -> directed

//         // create an edge from u to v
//         adj[u].push_back(v);

//         if(direction == 0)
//         {
//             adj[v].push_back(u);
//         }
//     }
      
//       void printAdjList()
//       {
//         for(auto i:adj)
//         {
//             cout << i.first << " -> ";
//             for(auto j: i.second)
//             {
//                 cout << j << ", ";
//             }
//             cout << endl;
//         }
//       }

// };


// int main()
// {

//     // inputs 
//     // node = 5                                
//     // edges = 6
//    // 0 1
//    // 1 2
//    // 2 3
//    // 3 1
//    // 3 4
//    // 0 4
//     int n;
//     cout << " enter the number of nodes " << endl;
//     cin >> n;

//     int m;
//     cout << " enter the number of edges" << endl;
//     cin >> m;

//     graph g;

//     for(int i=0; i<m; i++)
//     {
//         int u,v;
//         cin >> u >> v;
//         // creating an undirected graph
//         g.addEdge(u, v, 0);
//     }

//     // printing graph
//     g.printAdjList();
    

//     return 0; 
// }


#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph
{
    public:
    unordered_map <int, list<int> > adj;

    void addEdges(int u, int v, bool direction)
    {
        adj[u].push_back(v);

        if(direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printAdjlist()
    {
        for(auto i:adj)
        {
            cout << i.first << " -> ";
            for(auto j: i.second)
            {
                cout << j << endl;
            } cout << endl;
        }
    }

};


int main()
{
    int m;
    cout << " enter the number of nodes " << endl;
    cin >> m;

    int n;
    cout << " enter the numbers of edges " << endl;
    cin >> n;

    graph g;

    for(int i=0; i<m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdges(u, v, 0);
        
    }
    

    g.printAdjlist();

    return 0;
}


















