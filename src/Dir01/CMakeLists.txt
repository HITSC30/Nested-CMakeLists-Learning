# Lib Name
project(Dir01_Subroutine)

add_library(${PROJECT_NAME}
SHARED
map.cpp
)

# Include Path
target_include_directories(${PROJECT_NAME}
PUBLIC
${CMAKE_SOURCE_DIR}/include/Dir01
)