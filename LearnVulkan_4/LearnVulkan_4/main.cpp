//
//  main.cpp
//  LearnVulkan_2
//
//  Created by 下探敏 on 2024/4/20.
//
#include <iostream>
#include "HelloTriangle.hpp"

int main() {
    HelloTriangle app;

    try {
        app.run();
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
