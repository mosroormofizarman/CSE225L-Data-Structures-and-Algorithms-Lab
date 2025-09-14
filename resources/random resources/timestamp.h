#ifndef TIMESTAMP_H
#define TIMESTAMP_H

class Timestamp
{
    public:
        Timestamp();
        Timestamp(int,int,int);
        void display();
        bool operator<(Timestamp &i);
        bool operator>(Timestamp &i);
        bool operator!=(Timestamp &i);
        Timestamp operator=(Timestamp &i);

    private:
        int s;
        int m;
        int h;
};

#endif // TIMESTAMP_H
