cmake_minimum_required(VERSION 2.6)
project(cpp_tutorial)

add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/vector")
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/array_test")
INCLUDE_DIRECTORIES(
  "${CMAKE_CURRENT_SOURCE_DIR}/vector"
  "${CMAKE_CURRENT_SOURCE_DIR}/array_test"
  )

LINK_DIRECTORIES(
  "${CMAKE_CURRENT_SOURCE_DIR}/vector"
  "${CMAKE_CURRENT_SOURCE_DIR}/array_test"
  )


add_executable(cpp_tutorial main.cpp)
TARGET_LINK_LIBRARIES(cpp_tutorial
  vector_test
  array_test
  )
