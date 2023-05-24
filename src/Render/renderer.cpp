#include "../utils/std.hpp"
#include "../utils/Utils.cpp"

typedef std::string GM[16];

void renderMap(int pX, int pY, GM map) {
    clearScreen();
    for (int y = 0; y < 16; y++) {
        for (int x = 0; x < map[y].length(); x++) {
            if (y == pY && x == pX) {
                std::cout << "$";
            } else {
                std::cout << map[y][x];
            }
        }
        std::cout << std::endl;
    }
}