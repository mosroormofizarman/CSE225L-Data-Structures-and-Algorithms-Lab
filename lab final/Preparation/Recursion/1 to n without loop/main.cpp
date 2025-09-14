#include <iostream>
using namespace std;

class gfg {

    // It prints numbers from 1 to n.
public:
    void printNos(unsigned int n)
    {
        if (n > 0) {
            printNos(n - 1);
            cout << n << " ";
        }
        return;
    }
};

// Driver code
int main()
{
    int n = 10;
    gfg g;
    g.printNos(n);
    return 0;
}

/*
#include <iostream>
using namespace std;

class gfg {

    // It prints numbers from N to 1
public:
    void printNos(unsigned int n)
    {
        if (n > 0) {
            cout << n << " ";
            printNos(n - 1);
        }
        return;
    }
};

// Driver code
int main()
{
    int n = 10;
    gfg g;
    g.printNos(n);
    return 0;
}
*/
