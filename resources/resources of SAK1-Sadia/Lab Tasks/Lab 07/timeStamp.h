//
// Created by MOS on 11/20/2021.
//

#ifndef LAB07_TIMESTAMP_H
#define LAB07_TIMESTAMP_H
#include<iostream>

using namespace std;
class TimeStamp
{
public:
    TimeStamp();
    TimeStamp(int, int, int);
    bool operator == (const TimeStamp&);
    bool operator != (const TimeStamp&);
    bool operator > (const TimeStamp&);
    bool operator < (const TimeStamp&);
    friend ostream &operator<<(ostream &, const TimeStamp&);
private:
    int sec;
    int min;
    int hour;
};

#endif //LAB07_TIMESTAMP_H
