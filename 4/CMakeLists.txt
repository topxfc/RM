# 设定CMake所需的最低版本  
cmake_minimum_required(VERSION 3.10)  
  
# 定义项目名称及版本号  
project(Hw1 VERSION 1.0)  
  
# 指定C++标准（本例为C++11）  
set(CMAKE_CXX_STANDARD 11)  
set(CMAKE_CXX_STANDARD_REQUIRED True)  
  
# 添加包含头文件的目录（假设头文件位于include目录下）  
include_directories(${PROJECT_SOURCE_DIR}/include)  
  
# 添加可执行文件及其源文件  
add_executable(a main.cpp ${PROJECT_SOURCE_DIR}/src/stu.cpp)