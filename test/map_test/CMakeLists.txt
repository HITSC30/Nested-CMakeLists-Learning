project(map_test)
# 执行文件
add_executable(${PROJECT_NAME} map_test.cpp)

# Include Directory，执行文件需要的头文件库
target_include_directories(${PROJECT_NAME}
PUBLIC
${Include_Path_For_Test}
)

# Link Library,链接库文件
target_link_libraries(${PROJECT_NAME}
PUBLIC
Dir01_Subroutine
)

# Test，测试功能
add_test(
    NAME map_info_test
    COMMAND ${PROJECT_NAME}
)