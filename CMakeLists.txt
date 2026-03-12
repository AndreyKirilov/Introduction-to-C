cmake_minimum_required(VERSION 4.1)
project(AndreyCProject C)

set(CMAKE_C_STANDARD 11)

add_executable(AndreyCProject main.c
        HobbyLearning/main.c
        University/seminarni/task_1.c
        University/seminarni/task_2.c
        University/seminarni/task_3.c
        University/seminarni/uprazhnenie_2/count_one_to_ten.c
        University/seminarni/uprazhnenie_3/zadachi.c)
