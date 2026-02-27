# Lib Name
project(Dir01_Subroutine)

# Build Library
add_library(${PROJECT_NAME}
SHARED
map.cpp
)
# Set Library address
set_target_properties(${PROJECT_NAME}
    PROPERTIES 
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/libs"
)
# Include Path
target_include_directories(${PROJECT_NAME}
PUBLIC
${CMAKE_SOURCE_DIR}/include/Dir01
)