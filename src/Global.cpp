#ifndef Global_CPP
#define Global_CPP

#include "utils/std.hpp"
#include "Entity/Entity.cpp"
#include "Entity/EntityPlayer.cpp"

typedef std::string GameMap[16];

struct Global {
    std::string name = "I have no idea";
    std::string version = "v1.0";

    EntityPlayer p = EntityPlayer();

    const std::string PLAYER = p.getDisplayCharacter();
    const char WALL = '#';
    const char SPACE = ' ';
    const char STAR = '*';
    const char AND = '&';

    bool closeGame = false;
    bool invOpen = false;

    GameMap map = {
        "###########################################################################################",
        "#                                                                                         #",
        "#                                                                                         #",
        "#                  *                                                                      #",
        "#                 ***                                                                     #",
        "#                *****                                                                    #",
        "#               *******                                                                   #",
        "#              *********                                                                  #",
        "#                  &                                                                      #",
        "#                  &                                                                      #",
        "#                  &                                                                      #",
        "#                  &                                                                      #",
        "#                                                                                         #",
        "#                                                                                         #",
        "#                                                                                         #",
        "###########################################################################################"
    };

};

#endif