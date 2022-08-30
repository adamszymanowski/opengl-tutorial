#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

#include <iostream>

const char* tutorial = "Tutorial 01";
int main()
{
	std::cout << tutorial << " : Opening a Window" << std::endl;

	if (not glfwInit())
	{
		std::cout << "Could NOT initialize GLFW!" << std::endl;
		return EXIT_FAILURE;
	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);

	GLFWwindow* window;
	window = glfwCreateWindow(800, 600, tutorial, nullptr, nullptr);

	if (not window)
	{
		std::cout << "Could NOT create window" << std::endl;
		return EXIT_FAILURE;
		glfwTerminate();
	}

	glfwMakeContextCurrent(window);
	glewExperimental = true;

	if (glewInit() != GLEW_OK)
	{
		std::cout << "Could NOT initialize GLEW!" << std::endl;
		return EXIT_SUCCESS;
	}

	glClear(GL_COLOR_BUFFER_BIT);
	while (not glfwWindowShouldClose(window))
	{
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwTerminate();
	return EXIT_SUCCESS;
}