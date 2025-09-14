#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED
#include "Sorted.h"
#include<string>

using namespace std;

class studentInfo
{
    public :
        studentInfo();
        int totalstudentIs();
        void getinfo(string, int, double, string);
        void findStudent(string&, int&, double&, string&, bool&);
        void GetNextStudent(string&, int&, double&, string&);

    private :
        string NAME[MAX_ITEMS];
        int ID[MAX_ITEMS];
        double CGPA[MAX_ITEMS];
        string DEPARTMENT[MAX_ITEMS];
        int totalstudent;
        int currentStudent;
};
#endif // STUDENTINFO_H_INCLUDED
