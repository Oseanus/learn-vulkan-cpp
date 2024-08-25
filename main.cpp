#include <vulkan/vulkan.h>

#include <iostream>
#include <stdexcept>
#include <cstdlib>

class HelloTriangleApplication
{
public:
    void Run()
    {

    }

private:
    void InitVulkan()
    {

    }

    void MainLoop()
    {

    }

    void CleanUp()
    {

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