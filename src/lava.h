#ifndef LAVA_H
#define LAVA_H

#include "SDL.h"
#include <random>
#include "snake.h"

class Lava {

    public:
        Lava(int grid_width, int grid_height) {}

        std::vector<SDL_Point> lava_body;

    private:
        int _gw;
        int _gh;

        std::random_device dev;
        std::mt19937 engine;
        std::uniform_int_distribution<int> random_w;
        std::uniform_int_distribution<int> random_h;

        void updateLocation(Snake& snake, SDL_Point& food);
        bool checkFoodCollision(std::vector<SDL_Point> a_vec, SDL_Point b);
        // void updateSize();
};

#endif