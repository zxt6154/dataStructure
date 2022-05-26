#包含公共库
include_directories(${CMAKE_SOURCE_DIR})

#生成可执行文件
add_executable(Union Union.c Union.h Union-main.c)
#链接公共库
target_link_libraries(Union Scanf_lib)