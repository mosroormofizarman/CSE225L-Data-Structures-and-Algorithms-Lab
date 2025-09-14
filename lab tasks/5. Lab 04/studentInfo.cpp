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
void studentInfo::resetInfo()
{
    currentStudent = -1;
}
void studentInfo::GetNextStudent(int &id, string &name, double &cg)
{
    currentStudent++;
    id = ID[currentStudent];
    name = NAME[currentStudent];
    cg = CGPA[currentStudent];

}
void studentInfo::findStudent(int &id, string &name, double &cg, bool &found)
{
    for(int i=0; i<totalstudentIs(); i++)
    {
        if( id == ID[i])
        {
            found = true;
            id = ID[i];
            name = NAME[i];
            cg = CGPA[i];
            break;
        }
        else
        {
            found = false;
        }
    }
}
void studentInfo::getinfo(int id, string name, double cg)
{
    ID[totalstudent] = id;
    NAME[totalstudent] = name;
    CGPA[totalstudent] = cg;
    totalstudent++;

}
void studentInfo::deleteInfo(int id)
{
    int location = 0;
    while (id != ID[location])
    {
      location++;
    }

    ID[location] = ID[totalstudent - 1];
    NAME[location] = NAME[totalstudent-1];
    CGPA[location] = CGPA[totalstudent-1];
    totalstudent--;
}


