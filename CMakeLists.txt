cmake_minimum_required(VERSION 3.20)
project(c_review C)

# MSVC 源码按 UTF-8 解析，解决中文乱码
if(MSVC)
    add_compile_options(/utf-8)
endif()

# 递归扫描所有子文件夹里的 .c 文件
file(GLOB_RECURSE ALL_C_FILES "*.c")

# 每个 .c 文件单独生成一个 exe，互不干扰
foreach(SRC ${ALL_C_FILES})
    # 取文件名（不带路径、不带后缀）作为 exe 名称
    get_filename_component(EXE_NAME ${SRC} NAME_WE)
    add_executable(${EXE_NAME} ${SRC})
endforeach()
