//
// Created by MOS on 11/20/2021.
//

#include "timeStamp.h"
#include <iostream>
using namespace std;
TimeStamp::TimeStamp()
{
    sec = 0;
    min = 0;
    hour = 0;
}

TimeStamp::TimeStamp(int s, int m, int h) {
    sec = s;
    min = m;
    hour = h;
}
bool TimeStamp::operator==(const TimeStamp &time)
{
    return (this->sec == time.sec && this->min == time.min && this->hour == time.hour);
}
bool TimeStamp::operator!=(const TimeStamp &time) {
    if(time.min)
    {
        return false;
    }
    return !(this->sec == time.sec && this->min == time.min && this->hour == time.hour);
}
bool TimeStamp::operator>(const TimeStamp &time) {
    return (this->sec*3600 + this->min*60 + this->hour) > (time.sec*3600 + time.min*60 + time.hour);
}
bool TimeStamp::operator<(const TimeStamp &time) {
    return (this->sec*3600 + this->min*60 + this->hour) < (time.sec*3600 + time.min*60 + time.hour);
}
ostream &operator<<(ostream &output, const TimeStamp &T) {
    return output << T.sec << ":" << T.min << ":" << T.hour;
}