#包含公共库
include_directories(${CMAKE_SOURCE_DIR})

#生成可执行文件
add_executable(BaseC BaseC.c BaseC.h BaseC-main.c)
#链接公共库
target_link_libraries(BaseC Scanf_lib)