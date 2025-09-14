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

    g.AddEdge('A', 'B', 1);
    g.AddEdge('A', 'C', 1);
    g.AddEdge('B', 'D', 1);
    g.AddEdge('B', 'E', 1);
    g.AddEdge('C', 'F', 1);
    g.AddEdge('D', 'E', 1);
    g.AddEdge('F', 'H', 1);
    g.AddEdge('G', 'F', 1);
    g.AddEdge('H', 'E', 1);

    g.BreadthFirstSearch('A', 'E');
    return 0;
}
