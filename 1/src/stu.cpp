

#include <iostream>
#include <string>
#include <vector>

#include <stu.h>

using std::cout;
using std::endl;


stu::stu(const std::string& name, const std::string& id, int age, 
const std::string& gender, double score)
    : name(name), id(id), age(age), gender(gender), score(score) 
{
    totalStudents++;
    totalScore += score;
};

stu::~stu()
{
    totalStudents--;
    totalScore -= score;
}


// int stu::getTotStu(){
//     return totalStudents;
// }

// double stu::getTotScore(){
//     return totalScore;
// }

void stu::display( const std::string & stuName) const
{
    if (stuName.empty()) {
        cout << "Total Students :" << totalStudents << endl;
    } else {
        cout << "sore of " << stuName << " is " << score << endl;
    }
}