# Lib Name
project(Dir03_Subroutine)

add_library(${PROJECT_NAME}
STATIC
show_result.cpp)

# Include Path
target_include_directories(${PROJECT_NAME}
PUBLIC
${CMAKE_SOURCE_DIR}/include/Dir03
)
target_link_libraries(${PROJECT_NAME}
PRIVATE 
Matplot++::matplot)