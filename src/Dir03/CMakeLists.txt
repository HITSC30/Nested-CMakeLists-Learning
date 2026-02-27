# Lib Name
project(Dir03_Subroutine)

# Build Library
add_library(${PROJECT_NAME}
STATIC
show_result.cpp)

# Set Library address
set_target_properties(${PROJECT_NAME}
    PROPERTIES 
    # LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/libs" ##Special for .so
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/libs"
)

# Include Path
target_include_directories(${PROJECT_NAME}
PUBLIC
${CMAKE_SOURCE_DIR}/include/Dir03
)
target_link_libraries(${PROJECT_NAME}
PRIVATE 
Matplot++::matplot)