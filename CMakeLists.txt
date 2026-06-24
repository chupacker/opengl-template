cmake_minimum_required(VERSION 3.15...4.1)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)

project(
  App
  VERSION 1.0
  LANGUAGES CXX C
)

add_subdirectory(vendor/glfw)

add_executable(App
  src/main.cpp
  vendor/glad/src/gl.c
)

set_target_properties(App PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
    COMPILE_WARNING_AS_ERROR ON
)
target_compile_options(App PRIVATE -Wall -Wextra -pedantic)

target_include_directories(App PRIVATE
  vendor/glfw/include
  vendor/glad/include
)

target_link_libraries(App PRIVATE
  glfw
)
