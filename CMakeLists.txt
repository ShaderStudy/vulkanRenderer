cmake_minimum_required(VERSION 3.16)
project(VulkanTriangle LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_VS_STARTUP_PROJECT vulkan_triangle CACHE STRING "Visual Studio startup project")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
find_package(Vulkan REQUIRED)
find_package(glfw3 REQUIRED)
add_executable(vulkan_triangle
    src/main.cpp src/renderer.h
    src/dx11_renderer.h src/dx11_renderer.cpp
    src/dx12_renderer.h src/dx12_renderer.cpp
    src/backend_factory.cpp)
target_link_libraries(vulkan_triangle PRIVATE Vulkan::Vulkan glfw)
target_compile_definitions(vulkan_triangle PRIVATE GLFW_INCLUDE_NONE)
