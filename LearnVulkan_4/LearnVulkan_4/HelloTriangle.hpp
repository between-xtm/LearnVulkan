//
//  HelloTriangle.hpp
//  LearnVulkan_4
//
//  Created by 下探敏 on 2024/6/1.
//

#ifndef HelloTriangle_hpp
#define HelloTriangle_hpp

#define GLFW_INCLUDE_VULKAN
#include <glfw3.h>

#ifdef NDEBUG
const bool enableValidationLayers = false;
#else
const bool enableValidationLayers = true;
#endif

const int WIDTH = 800;
const int HEIGHT = 600;
struct QueueFamilyIndices;
class HelloTriangle
{
   public:
    void run();

   private:
    GLFWwindow* window;

    VkInstance instance;
    VkDebugReportCallbackEXT callback;

    VkPhysicalDevice physicalDevice = VK_NULL_HANDLE;

   private:
    void initWindow();

    void initVulkan();

    void mainLoop();

    void cleanup();

    void createInstance();

    std::vector<const char*> getRequiredExtensions();

    void setupDebugCallback();

    void pickPhysicalDevice();

    bool isDeviceSuitable(VkPhysicalDevice device);

    QueueFamilyIndices findQueueFamilies(VkPhysicalDevice device);

    static VKAPI_ATTR VkBool32 VKAPI_CALL debugCallback(VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objType, uint64_t obj, size_t location, int32_t code, const char* layerPrefix, const char* msg, void* userData);
};

#endif /* HelloTriangle_hpp */
