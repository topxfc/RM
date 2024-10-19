#define pl 3.14159f  
#include <iostream>  
#include <cmath>  
using namespace std;  
  
class base {  
public:  
    virtual float s() const = 0;  
    virtual ~base() = default; // 添加虚析构函数  
};  
  
class Circle : virtual public base {  
private:  
    float radius;  
public:  
    Circle(float r) : radius(r) {}  
    float area() const { return radius * radius * pl; }  
    float s() const override { return area(); }  
};  
  
class Square : virtual public base {  
private:  
    float sideA, sideB;  
public:  
    Square(float a, float b) : sideA(a), sideB(b) {}  
    float area() const { return sideA * sideB; }  
    float s() const override { return area(); }  
};  
  
class Body : public Circle, public Square {  
private:  
    float height;  
public:  
    Body(float radius = 0, float sideA = 0, float sideB = 0, float h = 0)  
        : Circle(radius), Square(sideA, sideB), height(h) {}  
    float Volume() const {  
        if (Circle::radius == 0) // 使用 Circle::radius 明确指定使用 Circle 的成员  
            return Square::area() * height; // 使用 Square::area() 明确指定使用 Square 的方法  
        else  
            return Circle::area() * height; // 使用 Circle::area() 明确指定使用 Circle 的方法  
    }  
};  
  
int main() {  
    Body b(5, 4, 6, 10); // 创建一个 Body 对象，其底面为圆形，但这里我们实际上没有使用这个圆形  
    cout << "Volume: " << b.Volume() << endl; // 输出体积，这里将使用圆形的面积  
    return 0;  
}