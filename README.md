# CPPND: Capstone Snake Game Example

This is a modified version of the starter repo for the Capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). The code for this repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses.

<img src="snake_game.gif"/>

In this project, I have extended the functionality of the original "Snake" game. The snake game at its core is very simple. The user will control the "snake" using the arrow keys on their keyboard in an attempt to eat the "food" in the gameplay area. The more food you consume, the faster your snake will move and the larger your snake will become. In addition, the speed at which your snake moves will increase for every food item eaten. If you eat (run into) any part of your snake's body with the snake's head, your snake is dead and the game is over. The more food you eat without dying, the higher your score will be. The object of the game is to eat as many food items as you can before dying.

## Original Code Structure

* main.cpp: This is where any necessary objects are created to run the game and the game is started from here.

* controller.cpp/controller.h: 
  * This class handles the user input of the keyboard
* game.cpp/game.h: 
  * This class contains the variables and function to run the game as a whole, and also contains the function to update the game based on user input and any updates that derived from the actions of the user  input. 
  * It also contains a Snake object, which grows or dies depending on the outcome of the user input
* snake.cpp/snake.h:
  * The Snake class and all functions related to updating its head and body
* renderer.cpp/renderer.h:
  * This class contains the variables and functions necessary to update the gameplay screen based off the changes made within the functions of the game class

## Extended Functionality



## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  >Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source. 
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.


## CC Attribution-ShareAlike 4.0 International


Shield: [![CC BY-SA 4.0][cc-by-sa-shield]][cc-by-sa]

This work is licensed under a
[Creative Commons Attribution-ShareAlike 4.0 International License][cc-by-sa].

[![CC BY-SA 4.0][cc-by-sa-image]][cc-by-sa]

[cc-by-sa]: http://creativecommons.org/licenses/by-sa/4.0/
[cc-by-sa-image]: https://licensebuttons.net/l/by-sa/4.0/88x31.png
[cc-by-sa-shield]: https://img.shields.io/badge/License-CC%20BY--SA%204.0-lightgrey.svg
