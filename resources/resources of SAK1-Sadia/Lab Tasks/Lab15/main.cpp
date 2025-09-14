#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

vector<vector<int> > v;
char row='A';

void display()
{
    cout<<" "<<"A"<<" B"<<" C"<<" D"<<" E"<<" F"<<" G"<<" H"<<endl;
    for(int i=0; i<8; i++)
    {
        cout<<row<<" ";
        for(int j=0; j<8; j++)
        {
            cout<<v[i][j]<<" ";
        }
        row++;
        cout<<endl;
    }
}
void createGraph()
{

    vector<int> vi;
    vi.push_back(0);
    vi.push_back(1);
    vi.push_back(1);
    vi.push_back(1);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    v.push_back(vi);
    vi.clear();

    vi.push_back(1);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    v.push_back(vi);
    vi.clear();

    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    v.push_back(vi);
    vi.clear();

    vi.push_back(1);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(1);
    vi.push_back(0);
    vi.push_back(1);
    vi.push_back(0);
    v.push_back(vi);
    vi.clear();

    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    v.push_back(vi);
    vi.clear();

    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(1);
    v.push_back(vi);
    vi.clear();

    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(1);
    vi.push_back(0);
    vi.push_back(0);
    v.push_back(vi);
    vi.clear();

    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(1);
    vi.push_back(0);
    vi.push_back(0);
    vi.push_back(0);
    v.push_back(vi);
    vi.clear();

}
int outDegree(char vertex)
{
    int edge,count=0;
    if(vertex>='A' && vertex<='H')
    {
        edge= (int) vertex-'A';
    }
    else
    {
        edge =(int) vertex-'a';
    }
    for(int i=0; i<8; i++)
    {
        count+=v[edge][i];
    }
    return count;
}
bool foundEdge(char vertex1,char vertex2)
{
    int edge1,edge2;

    if(vertex1>='A' && vertex1<='H')
    {
        edge1= (int) vertex1-'A';
    }
    else
    {
        edge1 =(int) vertex1-'a';
    }

    if(vertex2>='A' && vertex2<='H')
    {
        edge2= (int) vertex2-'A';
    }
    else
    {
        edge2 =(int) vertex2-'a';
    }
    if(v[edge1][edge2]==0 && v[edge2][edge1]==0)
    {
        return false;
    }
    return true;
}
void DFS(int start,int destination,bool visited[8])
{
    char k;
    bool flag=false;
    stack<int> s;
    vector<char> path;
    s.push(start);
    visited[start] = true;
    while (!s.empty())
    {
        int edge = s.top();
        k='A'+edge;
        if(edge==destination)
        {
            flag=true;
            cout<<k<<" ";
            break;
        }
        cout<<k<<" ";
        s.pop();
        for (int i=0; i<8; i++)
        {
            if (!visited[i] && v[edge][i]==1)
            {
                visited[i] = true;
                s.push(i);
            }
        }
    }
    cout<<endl;
    if(flag==false)
    {
        cout<<"Path not found"<<endl;
    }
}
void convertDfs(char source,char destination)
{
    int edge1,edge2;
    bool visited[8];
    for(int i=0; i<8; i++)
    {
        visited[i]=false;
    }
    if(source>='A' && source<='H')
    {
        edge1= (int) source-'A';
    }
    else
    {
        edge1 =(int) source-'a';
    }
    if(destination>='A' && destination<='H')
    {
        edge2= (int) destination-'A';
    }
    else
    {
        edge2 =(int) destination-'a';
    }
    DFS(edge1,edge2,visited);
}
void BFS(int start,int destination,bool visited[8])
{
    char k;
    int count=0;
    bool flag=false;
    queue<int> q;
    vector<char> path;
    q.push(start);
    visited[start] = true;
    while (!q.empty())
    {
        int edge = q.front();
        k='A'+edge;
        if(edge==destination)
        {
            flag=true;
            cout<<k<<" ";
            break;
        }
        cout<<k<<" ";
        q.pop();
        count++;
        for (int i=0; i<8; i++)
        {
            if (!visited[i] && v[edge][i]==1)
            {
                visited[i] = true;
                q.push(i);
            }
        }
    }
    cout<<endl;
    if(flag==false)
    {
        cout<<"Path not found"<<endl;
    }
    count--;
    cout<<"Shortest path length="<<count<<endl;
}
convertBfs(char source,char destination)
{
    int edge1,edge2;
    bool visited[8];
    for(int i=0; i<8; i++)
    {
        visited[i]=false;
    }
    if(source>='A' && source<='H')
    {
        edge1= (int) source-'A';
    }
    else
    {
        edge1 =(int) source-'a';
    }
    if(destination>='A' && destination<='H')
    {
        edge2= (int) destination-'A';
    }
    else
    {
        edge2 =(int) destination-'a';
    }
    BFS(edge1,edge2,visited);
}
int main()
{
    char vertex,vertex1,vertex2,source,destination;
    bool flag;

    createGraph();
    display();
x:
    cout<<"Enter any vertex from A to H both inclusive to check its outdegree"<<endl;
    cin>>vertex;
    if((vertex<'A' || vertex >'H') && (vertex<'a' || vertex>'h'))
    {
        cout<<"Invalid vertex"<<endl;
        goto x;
    }
    cout<<outDegree(vertex)<<endl;

    cout<<"Enter two vertices to check if there is an edge between them or not"<<endl;
    cout<<"Enter vertex 1"<<endl;
    cin>>vertex1;
    cout<<"Enter vertex 2"<<endl;
    cin>>vertex2;
    flag=foundEdge(vertex1,vertex2);
    if(flag==true)
    {
        cout<<"Yes, there is an edge between "<<vertex1 <<" and "<<vertex2<<endl;
    }
    else
    {
        cout<<"No edge exist between "<<vertex1<<" and "<<vertex2<<endl;
    }
    cout<<"To check if there exists a path between two vertices using DFS"<<endl;
    cout<<"Enter source"<<endl;
    cin>>source;
    cout<<"Enter destination"<<endl;
    cin>>destination;
    convertDfs(source,destination);
    cout<<"To check if there exists a path between two vertices using BFS"<<endl;
    cout<<"Enter source"<<endl;
    cin>>source;
    cout<<"Enter destination"<<endl;
    cin>>destination;
    convertBfs(source,destination);
}
