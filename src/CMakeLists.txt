project(planning_main)

# Affiliated Directory
add_subdirectory(Dir01)
add_subdirectory(Dir02)
add_subdirectory(Dir03)
 
# Final executable file
add_executable(${PROJECT_NAME} planning_main.cpp)

# Link Library File
target_link_libraries(${PROJECT_NAME}
PRIVATE
Dir01_Subroutine
Dir02_Subroutine
Dir03_Subroutine
)
