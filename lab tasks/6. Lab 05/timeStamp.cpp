#include "timeStamp.h"

timeStamp::timeStamp()
{
    totalRecord = 0;
    currentRecord = -1;
}

void timeStamp::TimeRecordEmpty()
{
    totalRecord = 0;
}

bool timeStamp::FullRecord()
{
    return (totalRecord == MAX_ITEMS);
}

int timeStamp::TotalTimeRecord()
{
    return totalRecord;
}

void timeStamp::ResetTime()
{
    currentRecord = -1;
}

void timeStamp::GetNextTime(int &sec, int &mi, int &ho)
{
    currentRecord++;
    sec = ss[currentRecord] ;
    mi = mm[currentRecord] ;
    ho = hh[currentRecord] ;

}

void timeStamp::deleteTimeValue(int sec, int mi, int ho)
{
    int location=0 ;
    while((sec +(mi*60) + (ho*60*60)) != ts[location])
    {
        location++;
    }
    for(int i=location+1; i<totalRecord; i++)
    {
        ss[i-1] = ss[i];
        mm[i-1] = mm[i];
        hh[i-1] = hh[i];
        ts[i-1] = ts[i];
    }
    totalRecord--;
}

void timeStamp::InsertTime(int sec, int mi, int ho)
{
    int totalSecond = (sec + (mi*60) + (ho*60*60));
    int location = 0;
    bool moreToSearch = (location < totalRecord);
    while(moreToSearch)
    {
        if(totalSecond > ts[location] )
        {
            location++;
            moreToSearch = (location < totalRecord);
        }
        else if(totalSecond < ts[location])
        {
            moreToSearch = false;
        }
    }
    for (int index=totalRecord; index>location; index--)
    {
        ss[index] = ss[index - 1];

        mm[index] = mm[index - 1];

        hh[index] = hh[index - 1];

        ts[index] = ts[index - 1];
    }

    ss[location] = sec;
    mm[location] = mi;
    hh[location] = ho;
    ts[location] = totalSecond;
    totalRecord++;
}

