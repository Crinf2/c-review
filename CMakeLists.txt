cmake_minimum_required(VERSION 3.10)
project(c_review C)

set(CMAKE_C_STANDARD 11)

# 自动收集所有 .c 文件，每个单独编译成一个 exe
file(GLOB_RECURSE ALL_C_FILES "*.c")

foreach(SRC_FILE ${ALL_C_FILES})
    # 获取文件名（不含路径和扩展名）作为 exe 名
    get_filename_component(EXE_NAME ${SRC_FILE} NAME_WE)
    add_executable(${EXE_NAME} ${SRC_FILE})
endforeach()