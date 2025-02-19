#include "Course.h"

using namespace std;

Course::Course()
{
    name = "";
    code = "";
    credits = 0;
    totalGrade = 100;
    categories = {"homework", "quiz", "midterm", "lab", "final"};
}

Course::~Course()
{
}

void Course::input(istream &ins)
{
    if (&ins == &cin)
    {
        cout << "Enter class name: ";
        ins.ignore();
        getline(ins, name);
        cout << "Enter class code: ";
        ins >> code;
        cout << "Enter credits: ";
        ins >> credits;

    }
}
