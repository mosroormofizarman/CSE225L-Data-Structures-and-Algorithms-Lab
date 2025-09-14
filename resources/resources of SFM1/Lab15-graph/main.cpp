#include <bits/stdc++.h>
#include "graphtype.cpp"

using namespace std;

int main()
{
    GraphType<char> gt(10);
    for(char a= 'A'; a<='H'; a++){
        //cout<<a<<endl;
        gt.AddVertex(a) ;
    }

    cout<<gt.IsEmpty()<<endl;
    //connected edges
    gt.AddEdge('A','B',1);
    gt.AddEdge('B','A',1);
    gt.AddEdge('A','C',1);
    gt.AddEdge('A','D',1);
    gt.AddEdge('D','A',1);
    gt.AddEdge('D','G',1);
    gt.AddEdge('D','E',1);
    gt.AddEdge('H','E',1);
    gt.AddEdge('F','H',1);
    gt.AddEdge('G','F',1);

    //found edge
    if(gt.FoundEdge('A','D'))
    {
        cout<<"There is an edge"<<endl;
    }
    //DFS
    gt.DepthFirstSearch('B','E');
    gt.DepthFirstSearch('E','B');

    //BFS
    gt.BreadthFirstSearch('B','E');
    //gt.BreadthFirstSearch('E','B');


}
