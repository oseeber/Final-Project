#include "lava.h"
#include <cmath>

Lava::Lava(int grid_width, int grid_height) 
    : _gw(grid_width),
      _gh(grid_height),
      random_w(0, static_cast<int>(_gw - 3)),
      random_h(0, static_cast<int>(_gh - 3)),
      engine(dev()) {
    
}
void Lava::updateLocation(Snake& snake, SDL_Point& food) {
    int x, y;
    while(true) {
        lava_body.clear();
        x = random_w(engine);
        y = random_h(engine);
        SDL_Point cell{x, y};

        for (int i = 0; i < 3; i++) {
            cell.x += i;
            for (int j = 0; j < 3; j++) {
                cell.y += j;
                if (snake.SnakeCell(cell.x, cell.y)) {
                    goto outerLoop;
                }
                lava_body.push_back(cell);
            }
            cell.y = y;
        }
        if (!checkFoodCollision(lava_body, food)) {
            return;
        }
        outerLoop:
        continue;
    }
}

bool Lava::checkFoodCollision(std::vector<SDL_Point> a_vec, SDL_Point b) {
    for (SDL_Point &a : a_vec) {
        if (a.x == b.x && a.y == b.y ) {
            return true;
        }
    }
    return false;
}

/*
void Lava::updateSize() {

}
*/