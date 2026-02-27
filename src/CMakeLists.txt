project(planning_main)

# Affiliated Directory Which Contains CMakeLists.txt
add_subdirectory(Dir01)
add_subdirectory(Dir02)
add_subdirectory(Dir03)
 
# Final executable file
add_executable(${PROJECT_NAME} planning_main.cpp)

# Link Library Name
target_link_libraries(${PROJECT_NAME}
PRIVATE
Dir01_Subroutine
Dir02_Subroutine
Dir03_Subroutine
)

#Link Library Address
target_link_directories(${PROJECT_NAME} 
PRIVATE 
"${CMAKE_SOURCE_DIR}/libs"
)