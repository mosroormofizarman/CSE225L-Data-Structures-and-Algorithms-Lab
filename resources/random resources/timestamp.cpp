#include "Timestamp.h"
#include<iostream>

using namespace std;

Timestamp::Timestamp()
{
    s=m=h=0;
}

Timestamp::Timestamp(int a, int b, int c)
{
    s=a;
    m=b;
    h=c;
}

bool Timestamp:: operator<(Timestamp &i)
{
    if(h<i.h) return true;
    else if(h>i.h) return false;
    else if(m<i.m) return true;
    else if(m>i.m) return false;
    else if(s<i.s) return true;
    else return false;
}

bool Timestamp:: operator>(Timestamp &i)
{
    if(h>i.h) return true;
    else if(h<i.h) return false;
    else if(m>i.m) return true;
    else if(m<i.m) return false;
    else if(s>i.s) return true;
    else return false;
}

bool Timestamp::operator!=(Timestamp &i)
{
    if(h==i.h && m==i.m && s==i.s) return false;
    return true;
}

Timestamp Timestamp::operator=(Timestamp &i)
{
    s=i.s;
    m=i.m;
    h=i.h;
}

void Timestamp :: display()
{
    cout<<"\t"<<s<<":"<<m<<":"<<h<<endl;
}
