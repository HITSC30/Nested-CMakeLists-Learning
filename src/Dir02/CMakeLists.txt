# Lib Name
project(Dir02_Subroutine)

# Find Eigen
find_package(Eigen3 3.3 REQUIRED NO_MODULE)

# Build Library
add_library(${PROJECT_NAME}
SHARED
process.cpp)

# Set Library address
set_target_properties(${PROJECT_NAME}
    PROPERTIES 
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/libs"
)

# Include Path
target_include_directories(${PROJECT_NAME}
PUBLIC
${CMAKE_SOURCE_DIR}/include/Dir01
${CMAKE_SOURCE_DIR}/include/Dir02
)

# Link Eigen3
target_link_libraries(${PROJECT_NAME}
PUBLIC
Eigen3::Eigen)

# Link Dir01_Subroutine
target_link_libraries(Dir02_Subroutine 
    PUBLIC 
        Dir01_Subroutine # 假设这是Dir01的库名
)