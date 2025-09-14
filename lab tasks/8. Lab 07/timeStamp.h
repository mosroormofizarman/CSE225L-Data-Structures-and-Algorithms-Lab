#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED
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
#endif // TIMESTAMP_H_INCLUDED
