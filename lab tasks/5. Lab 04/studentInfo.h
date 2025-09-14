#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED
#include<string>

using namespace std;

class studentInfo
{
    public :
        studentInfo();
        int totalstudentIs();
        void getinfo(int, string, double);
        void deleteInfo(int);
        void findStudent(int&, string&, double&, bool&);
        void resetInfo();
        void GetNextStudent(int&, string&, double&);

    private :
        int ID[MAX_ITEMS];
        string NAME[MAX_ITEMS];
        double CGPA[MAX_ITEMS];
        int totalstudent;
        int currentStudent;
};
#endif // STUDENTINFO_H_INCLUDED
