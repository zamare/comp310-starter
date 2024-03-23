cmake_minimum_required(VERSION 3.5)

project(OperatingSystemsStarter)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

# Add executable target
add_executable(OperatingSystemsStarter 
    main.c 
    token.c 
    token.h
)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.14.0
)
cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Add source files for the new target
set(MY_PROJECT_SOURCES
    source1.cpp
    source2.cpp
    # Add more source files if needed
)

# Create an executable or library target
add_executable(MyProjectExecutable ${MY_PROJECT_SOURCES})

# Alternatively, for a library target:
# add_library(MyProjectLibrary ${MY_PROJECT_SOURCES})

# Link libraries if needed
# target_link_libraries(MyProjectExecutable PRIVATE OtherLib)

# Windows workaround (don't ask) 
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)
include_directories(${GTEST_INCLUDE_DIRS})

add_subdirectory(hello)
add_subdirectory(hello-lib)
add_subdirectory(lwlog-lib)
add_subdirectory(lwlog-demo)
add_subdirectory(gtest-demo)
add_subdirectory(WarmUp_1)
add_subdirectory(R-forth)
add_library(R-forth_1Lib source.cpp)
add_library(R-forth_1Lib main.cpp)

add_subdirectory(WarmUp_10)
add_executable(your_executable_name main.c token.c)





# You can use add_subdirectory() to add your own work. 
# Please don't remove the existing subdirectories.



