cmake_minimum_required(VERSION 4.1)
project(AndreyCProject C)

set(CMAKE_C_STANDARD 11)

add_executable(AndreyCProject main.c
        HobbyLearning/main.c
        University/laboratorni/task_1.c
        University/laboratorni/task_2.c
        University/laboratorni/task_3.c
        University/laboratorni/uprazhnenie_2/count_one_to_ten.c
        University/laboratorni/uprazhnenie_3/zadachi.c
        University/seminarni/uprazhnenie_1/zadachi.c
        University/seminarni/uprazhnenie_2/zadachi.c
        University/laboratorni/uprazhnenie_4/zadachi.c
        University/laboratorni/uprazhnenie_5/zadachi.c)
