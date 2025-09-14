#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED
#include "sortedtype.h"

class timeStamp
{
    public:
        timeStamp();
        void InsertTime(int,int,int);
        void deleteTimeValue(int,int,int);
        void GetNextTime(int&,int&,int&);
        bool FullRecord();
        int TotalTimeRecord();
        void TimeRecordEmpty();
        void ResetTime();

    private :
        int ss[MAX_ITEMS];
        int mm[MAX_ITEMS];
        int hh[MAX_ITEMS];
        int ts[MAX_ITEMS];
        int currentRecord;
        int totalRecord;
};
#endif // TIMESTAMP_H_INCLUDED
