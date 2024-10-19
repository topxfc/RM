

#include <iostream>
#include <string>
#include <vector>

#include <stu.h>

using std::cout;
using std::endl;


stu::stu(const std::string& name = "", const std::string& id = "", int age = 0, 
const std::string& gender = "", double score = 0.0)
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

stu stu::operator+( const stu & s1) const
{
    stu s2;
    s2.score = this->score + s1.score;
    return s2;
}

std::ostream& operator<<(std::ostream& os, const stu& stuObj) {  
    os <<  "Sum Score: " << stuObj.score;  
    return os;  
}  



// 第二次git提交测试
// 第三次git提交测试
// v4
// v5
// v6
// v7
// v8