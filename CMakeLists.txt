#cmake必要指定版本，一般默认3.0
cmake_minimum_required(VERSION 3.0)
#项目名
project(SOLIDERFIRE)
#设置编译选项
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
#设置调试debug选项
set(CMAKE_BUILD_TYPE Debug)
#包含我们的头文件目录
include_directories(${CMAKE_SOURCE_DIR}/include)
#执行和链接我们的，和生成可执行文件soldier_cmake
#add_executable(soldier_cmake main.cpp  src/Gun.cpp src/Soldier.cpp src/Point.cpp)

#使用另外的方式，避免需要经常写文件
file(GLOB SRC_FILES "src/*.cpp")
add_executable(soldier_cmake main.cpp ${SRC_FILES})