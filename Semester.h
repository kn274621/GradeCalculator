#ifndef SEMESTER_H
#define SEMESTER_H

#include "Course.h"

class Semester
{
private:
    int year;
    std::string season;
    std::vector<Course> courses;

protected:
    double gpa;
    double totalCredits;

public:
    Semester();
    ~Semester();
    void input(std::istream &ins);
};

#endif