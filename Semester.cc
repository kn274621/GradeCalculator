#include "Semester.h"

using namespace std;

Semester::Semester()
{
    year = 2025;
    gpa = 0;
    totalCredits = 0;
}

Semester::~Semester()
{
}

void Semester::input(istream &ins)
{
    if (&ins == &cin)
    {
        cout << "Enter season (Fall, Winter, Spring, Summer): ";
        ins >> season;
        cout << "Enter year: ";
        ins >> year;

        char ans = 'y';
        cout << "\nAdd your first class" << endl;
        while(ans == 'y')
        {
            Course newCourse;
            newCourse.input(ins);
            courses.push_back(newCourse);

            cout << "\nAdd more classes? (y/n) ";
            ins >> ans;
        }
    }
}