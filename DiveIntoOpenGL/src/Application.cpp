#include <GLFW/glfw3.h>

int main(void)
{
	GLFWwindow* window;

	/* Initialize the library */
	if (!glfwInit())
		return -1;

	/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);

	float posVar = 0.0f;
	float x1 = -0.5f;
	float y1 = -0.5f;
	float x2 = 0.0f;
	float y2 = 0.5f;
	float x3 = 0.5f;
	float y3 = -0.5f;

	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window))
	{
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);

		glBegin(GL_TRIANGLES);
		glVertex2f(posVar  + x1 , posVar + y1);
		glVertex2f(posVar + x2, posVar + y2);
		glVertex2f(posVar + x3, posVar + y3);
		glEnd();

		//posVar += 0.001f;

		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}