cmake_minimum_required(VERSION 3.10)
project(Num.github)
add_executable(main delta_c_code.c)
target_link_libraries(main m)
