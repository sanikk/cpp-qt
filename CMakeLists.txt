cmake_minimum_required(VERSION 3.20)
project(cpp-qt)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# add_subdirectory(src/scenario_service)
# add_subdirectory(src/searches/common/)
# add_subdirectory(src/ui/)
# add_subdirectory(src)
find_package(Qt6 REQUIRED COMPONENTS Widgets Core)

qt_standard_project_setup()

add_executable(main 
    src/main.cpp
    src/ui/ui.h
    src/ui/ui.cpp
)
target_link_libraries(main PRIVATE Qt6::Widgets Qt6::Core)
set(CMAKE_AUTOMOC ON)
# enable_testing()
# add_subdirectory(tests)
