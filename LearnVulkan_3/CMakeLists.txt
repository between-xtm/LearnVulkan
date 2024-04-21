cmake_minimum_required(VERSION 3.0)
project(LearnVulkan_3)

set(CMAKE_XCODE_ATTRIBUTE_ONLY_ACTIVE_ARCH "NO")

include_directories(
    /usr/local/include
    /Users/bianchenyu/VulkanSDK/1.3.280.0/macOS/include
    /opt/homebrew/Cellar/glm/0.9.9.8/include/glm
    /opt/homebrew/Cellar/glfw/3.3.8/include/GLFW
)

link_directories(
    /Users/bianchenyu/VulkanSDK/1.3.280.0/macOS/lib
    /opt/homebrew/Cellar/glfw/3.3.8/lib
)


link_libraries(
    /Users/bianchenyu/VulkanSDK/1.3.280.0/macOS/lib/libvulkan.dylib
    /Users/bianchenyu/VulkanSDK/1.3.280.0/macOS/lib/libvulkan.1.dylib
    /Users/bianchenyu/VulkanSDK/1.3.280.0/macOS/lib/libMoltenVK.dylib
    /opt/homebrew/Cellar/glfw/3.3.8/lib/libglfw.dylib

)
add_executable(LearnVulkan_3 LearnVulkan_3/main.cpp)


