#define GLF_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <iostream>
#include <stdexcept>
#include <cstdlib>

const uint32_t WIDTH = 800;
const uint32_t HEIGHT = 600;

class HelloTriangleApplication
{
private: // Fields
    GLFWwindow *window;

public:
    void Run()
    {
        InitWindow();
        InitVulkan();
        MainLoop();
        CleanUp();
    }

private:
    void InitWindow()
    {
        glfwInit();
        
        // Say to GLFW not to use OpenGL
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

        // Disable window resizing
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        // Create window
        window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", nullptr, nullptr);
    }

    void InitVulkan()
    {

    }

    void MainLoop()
    {
        while(!glfwWindowShouldClose(window))
        {
            glfwPollEvents();
        }
    }

    void CleanUp()
    {
        glfwDestroyWindow(window);

        glfwTerminate();
    }
};

int main()
{
    HelloTriangleApplication app;

    try
    {
        app.Run();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }
    

    return EXIT_SUCCESS;
}