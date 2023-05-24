#include "utils/std.hpp"
#include "Global.cpp"
#include "Location.cpp"
#include "Render/renderer.cpp"

#ifdef _WIN32
#include <conio.h>
#define GETCH _getch
#else
#include "utils/conio.h"
#define GETCH getch
#endif

int getKeyPress() {
    int key = GETCH();
    return key;
}

// % = key ) or ( = door ^ = portal

bool checkCollision(int x, int y, Global global) {
    if (global.map[y][x] == global.WALL || global.map[y][x] == global.STAR || global.map[y][x] == global.AND) {
        return true;
    } else {
        return false;
    }
}

void gameLoop(Global global) {
    while (!global.closeGame) {
        int key = getKeyPress();
        int x = global.p.getLocation().getX();
        int y = global.p.getLocation().getY();
        int tX = x;
        int tY = y;
        int w = global.p.getLocation().getWorld();

        renderMap(x, y, global.map);

        switch (key) {
            case 97: /*a*/
                if (!checkCollision(--tX, tY, global)) { global.p.teleport(Location(w, --x, y)); }
                renderMap(x, y, global.map);
                break;
            case 100: /*d*/
                if (!checkCollision(++tX, tY, global)) { global.p.teleport(Location(w, ++x, y)); }
                renderMap(x, y, global.map);
                break;
            case 119: /*w*/
                if (!checkCollision(tX, --tY, global)) { global.p.teleport(Location(w, x, --y)); }
                renderMap(x, y, global.map);
                break;
            case 115: /*s*/
                if (!checkCollision(tX, ++tY, global)) { global.p.teleport(Location(w, x, ++y)); }
                renderMap(x, y, global.map);
                break;
            case 27: /*ESC*/
                global.closeGame = true;
                break;
        }
        global.p.setLocation(Location(w, x, y));
    }
}

int main() {
    Global global;

    std::cout << global.p.getInventory().getAllItems();
    global.p.teleport(Location(0, 1, 1));
    //renderMap(global.p.getLocation().getX(), global.p.getLocation().getY(), global.map);
    gameLoop(global);

    return 0;
}