
#include <iostream>
#include <string>
#include <vector>

#include <stu.h>

int stu::totalStudents = 0;
double stu::totalScore = 0.0;

int main() {
    // 动态分配学生对象并赋值
    stu* stu1 = new stu("张三", "200001", 18, "男", 100);
    stu* stu2 = new stu("李四", "200002", 18, "男", 89.5);
    stu* stu3 = new stu("王五", "200003", 18, "女", 98);


    // 使用display函数
    stu1->display();
    stu2->display("王五");

    // 释放动态分配的内存
    delete stu1;
    delete stu2;
    delete stu3;

    return 0;
}
