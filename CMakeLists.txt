cmake_minimum_required(VERSION 3.16)
project(VulkanTriangle LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Vulkan REQUIRED)
find_package(glfw3 REQUIRED)

add_executable(vulkan_triangle
    src/main.cpp
)

target_link_libraries(vulkan_triangle PRIVATE Vulkan::Vulkan glfw)

target_compile_definitions(vulkan_triangle PRIVATE GLFW_INCLUDE_NONE)
