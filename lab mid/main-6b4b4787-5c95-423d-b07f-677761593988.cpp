#include <iostream>
#include "sorted.cpp"
#include "studentInfo.cpp"

using namespace std;

int main()
{
    studentInfo obj;

    int st_id, finalID;
    string st_name, finalName, st_dept, finaldept;
    double cg, finalCGPA;

    cout << "Insert 7 student records:\n";


    for(int i=0; i<7; i++)
    {
        cout << "Enter " << i + 1 << " student record(Name:ID:CGPA:DEPARTMENT): ";
        cin >> st_name >> st_id >> cg >> st_dept;
        obj.getinfo(st_name, st_id, cg, st_dept);
    }

    for(int i=0; i<obj.totalstudentIs(); i++)
    {
        obj.GetNextStudent(finalID, finalName, finalCGPA);
        cout << finalID << ", " << finalName << ", " << finalCGPA << endl;
    }
}
