#include "studentInfo.h"

studentInfo::studentInfo()
{
    totalstudent = 0;
    currentStudent = -1;
}
int studentInfo::totalstudentIs()
{
    return totalstudent;
}
void studentInfo::getinfo(string name, int id, double cg, string dept)
{
    NAME[totalstudent] = name;
    ID[totalstudent] = id;
    CGPA[totalstudent] = cg;
    DEPARTMENT[totalstudent] = dept;
    totalstudent++;

}
void studentInfo::GetNextStudent(string &name, int &id, double &cg, string &dept)
{
    currentStudent++;
    name = NAME[currentStudent];
    id = ID[currentStudent];
    cg = CGPA[currentStudent];
    dept = DEPARTMENT[currentStudent];

}
void studentInfo::findStudent(string &name, int &id, double &cg, string &dept, bool &found)
{
    for(int i=0; i<totalstudentIs(); i++)
    {
        if( cg > 3.5 )
        {
            found = true;
            id = ID[i];
            name = NAME[i];
            cg = CGPA[i];
            dept = DEPARTMENT[i];
            break;
        }
        else
        {
            found = false;
        }
    }
}



