cmake_minimum_required(VERSION 3.20)
project(cpp-qt)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# add_subdirectory(src/scenario_service)
# add_subdirectory(src/searches/common/)
# add_subdirectory(src)
find_package(Qt6 REQUIRED COMPONENTS Widgets Core)
# foreach(target Qt6::Platform)
#     get_target_property(COMPILE_OPTIONS ${target} INTERFACE_COMPILE_OPTIONS)
#     list(REMOVE_ITEM COMPILE_OPTIONS "-mno-direct-extern-access")
#     set_target_properties(${target} PROPERTIES INTERFACE_COMPILE_OPTIONS "${COMPILE_OPTIONS}")
# endforeach()

qt_standard_project_setup()


add_subdirectory(src/ui/)

add_executable(main 
    src/main.cpp
)
# set_property(TARGET main PROPERTY COMPILE_OPTIONS "")
target_link_libraries(main PRIVATE Qt6::Widgets Qt6::Core ui)
set(CMAKE_AUTOMOC ON)
# enable_testing()
# add_subdirectory(tests)
