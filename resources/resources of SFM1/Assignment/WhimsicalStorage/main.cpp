#include <bits/stdc++.h>
#include "WhimsicalStorage.cpp"

using namespace std;

int main()
{
    WhimsicalStorage<int> wt("S");
    wt.insert(12);
    wt.insert(10);
    cout<<wt.firstItem()<<endl;
    wt.change("Q");
    wt.insert(11);
    wt.insert(14);
    wt.edit(14,18);
    cout<<wt.search(11)<<endl;
    wt.print();
    wt.change("P");
    wt.insert(30);
    wt.insert(20);
    wt.print();
    wt.change("L");
    wt.insert(1);
    wt.insert(2);
    wt.Delete(2);
    wt.print();

}
