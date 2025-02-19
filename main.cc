#include <iostream>
#include <iomanip>
#include <fstream>
#include "Semester.h"

using namespace std;

int calculateCumulative(vector<Semester> sems);
void fileInput(istream &ins);

int main()
{
    ifstream fin("data.txt");
    if (!fin.fail())
    {
        cout << "Error opening file" << endl;
        return 1;
    }
    vector<Semester> semesters;
    Semester test;
    test.input(cin);
    semesters.push_back(test);

    cout << "Cumulative GPA: " << fixed << setprecision(2) << calculateCumulative(semesters) << endl;

    return 0;
}

int calculateCumulative(vector<Semester> sems)
{
    double gpa = 4.0;

    return gpa;
}

void fileInput(istream &ins)
{

}