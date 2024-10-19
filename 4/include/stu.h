#ifndef STU_H_
#define STU_H_

#include <iostream>
#include <string>
#include <vector>


class stu
{
private:
    std::string name;
    std::string id;
    int age;
    std::string gender;
    double score;
    static int totalStudents ;
    static double totalScore  ;

public:
    
stu(const std::string& name, const std::string& id, int age, 
const std::string& gender, double score);
    
~stu();

void display( const std::string & stuName= "") const;

stu operator+( const stu & s1) const;

friend std::ostream& operator<<(std::ostream& os, const stu& stuObj);

};



#endif