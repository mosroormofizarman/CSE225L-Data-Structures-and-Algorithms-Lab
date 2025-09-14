#include "graphtype.cpp"
#include "quetype.h"
using namespace std;


int main()
{
    GraphType <char> g;
    g.AddVertex('A');
    g.AddVertex('B');
    g.AddVertex('C');
    g.AddVertex('D');
    g.AddVertex('E');
    g.AddVertex('F');
    g.AddVertex('G');
    g.AddVertex('H');
    g.AddEdge('A', 'B', 1);
    g.AddEdge('A', 'D', 1);
    g.AddEdge('A', 'C', 1);
    g.AddEdge('B', 'A', 1);
    g.AddEdge('D', 'A', 1);
    g.AddEdge('D', 'E', 1);
    g.AddEdge('D', 'G', 1);
    g.AddEdge('F', 'H', 1);
    g.AddEdge('G', 'F', 1);
    g.AddEdge('H', 'E', 1);
    cout << g.outDegree('D') << endl;

    if (g.foundEdge('A', 'D'))
    {
        cout << "There is an edge" << endl;
    }
    else
    {
        cout << "There is no edge" << endl;
    }
    cout << endl;

    if(g.foundEdge('B', 'D'))
    {
        cout << "There is an edge" << endl;
    }
    else
    {
           cout << "There is no edge" << endl;
    }
    cout << endl;

    g.DepthFirstSearch('B', 'E');
    cout << endl;

    g.DepthFirstSearch('E', 'B');
    cout << endl;

    g.BreadthFirstSearch('B', 'E');
    cout << endl;

    g.BreadthFirstSearch('E', 'B');

    cout << g.modifiedBFS('B', 'E') << endl;

 return 0;
}
