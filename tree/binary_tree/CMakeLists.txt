#包含公共库
include_directories(${CMAKE_SOURCE_DIR})

#生成可执行文件
add_executable(binary_tree binary_tree.c binary_tree.h binary_tree_main.c)
#链接公共库
target_link_libraries(binary_tree Scanf_lib)