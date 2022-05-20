#包含公共库
include_directories(${CMAKE_SOURCE_DIR})

#生成可执行文件
add_executable(StructureC StructureC.c StructureC.h StructureC-main.c)
#链接公共库
target_link_libraries(StructureC Scanf_lib)