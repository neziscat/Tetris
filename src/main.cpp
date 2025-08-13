#define GLFW_INCLUDE_NONE
#include <iostream>
#include <GLFW\glfw3.h>
#include <glad\glad.h>

using namespace std;

int main() {
    GLFWwindow* window;

    if(!glfwInit()) {
        return -1;
    }

    window = glfwCreateWindow(600, 480, "Tetris", NULL, NULL);
    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        cout << "OpenGL 로드 못함\n";
        glfwTerminate();
        return -1;
    }

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();

        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
    }

    glfwTerminate();
    return 0;
}