# OpenGL Tutorial
Code from [OpenGL Tutorial](http://www.opengl-tutorial.org/)
- [Tutorial 01 opening a window](http://www.opengl-tutorial.org/beginners-tutorials/tutorial-1-opening-a-window/)


# Setup
## Windows

**Visual Studio 2019**
x64
- Project -> Properties -> C/C++ -> Language -> C++ Language Standard
  * ISO C++ 17 Standard (`/std:c++17`)
- Project -> Properties -> C/C++ -> General -> Additional Include Directories
  * `C:\Libraries\glew-2.1.0\include`
  * `C:\glfw-3.3.8.bin.WIN64\include`
  * `C:\Libraries\glm-master`
- Project -> Properties -> Linker -> General -> Additional Library Directories
  * `C:\Libraries\glew-2.1.0\lib\Release\x64`
  * `C:\glfw-3.3.8.bin.WIN64\lib-vc2019`
- Project -> Properties -> Linker -> Input -> Additional Dependencies
  * `glew32s.lib`
  * `glfw3.lib`
  * `opengl32.lib`