#include <iostream>  

template <typename T>  
class SumThree {  
private:  
    T num1, num2, num3; 
  
public:  
 
    SumThree(T a, T b, T c) : num1(a), num2(b), num3(c) {}  
 
    T getSum() const {  
        return num1 + num2 + num3;  
    }  

};  
  
int main() {  
    SumThree<int> intSum(1, 2, 3);  
    std::cout << intSum.getSum() << std::endl; 
  
    return 0;  
}