#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
#include <vector>

class Course
{
private:
    std::string name;
    std::string code;
    int credits;
    double totalGrade;
    std::vector<std::string> categories;
    std::vector<double> weights;
    std::vector<double> grades;
public:
    Course();
    ~Course();
    void input(std::istream &ins);
};

#endif