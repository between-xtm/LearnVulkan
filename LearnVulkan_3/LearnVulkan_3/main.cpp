//
//  main.cpp
//  LearnVulkan_1
//
//  Created by 下探敏 on 2024/4/20.
//

#include <iostream>
#define GLFW_INCLUDE_VULKAN
#include <glfw3.h>
#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>
#include <functional>
#include <iostream>
#include <stdexcept>

class HelloTriangleApplication
{
   public:
    void run() {
        initWindow();

        initVulkan();
        mainLoop();
        cleanup();
    }

   private:
    void initWindow() {
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
//        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
        window = glfwCreateWindow(800, 600, "Vulkan", nullptr, nullptr);
        int a(1);
    }

    void initVulkan() {
    }

    void mainLoop() {
        while (!glfwWindowShouldClose(window)) {
            glfwPollEvents();
        }
    }

    void cleanup() {
        glfwDestroyWindow(window);

        glfwTerminate();
    }
    
private:
    GLFWwindow* window = nullptr;
};

int main() {
    HelloTriangleApplication app;

    try {
        app.run();
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
