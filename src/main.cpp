#include <glad/gl.h>
#include <GLFW/glfw3.h>

const int WIDTH = 800;
const int HEIGHT = 800;
const char *TITLE = "Window";

void input(GLFWwindow *window);

int main() {
  glfwInit();
  glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
  GLFWwindow *window = glfwCreateWindow(WIDTH, HEIGHT, TITLE, NULL, NULL);
  glfwMakeContextCurrent(window);

  while (!glfwWindowShouldClose(window)) {
    input(window);
    glfwPollEvents();
    glfwSwapBuffers(window);
  }
}

void input(GLFWwindow *window) {
  if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
    glfwSetWindowShouldClose(window, GLFW_TRUE);
  }
}
