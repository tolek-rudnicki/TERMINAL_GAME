#ifndef Entity_CPP
#define Entity_CPP

#include "../utils/std.hpp"
#include "../Location.cpp"

class Entity {
    int renderPriority;

    std::string displayChar;
    bool enemy;

    public:
        Location loc;
        Entity() {
            loc = Location(0, 0, 0);
            renderPriority = 0;
            displayChar = ' ';
            enemy = false;
        }
        /* RP = 0: Lowest ... RP = 4: Highest*/
        Entity(Location loc1, int rP, std::string dC, bool enm) {
            loc = loc1;
            renderPriority = rP;
            displayChar = dC;
            enemy = enm;
        }

        Location getLocation() { return loc; }
        int getRP() { return renderPriority; }

        std::string getDisplayCharacter() { return displayChar; }
        bool isEnemy() { return enemy; }

        void setLocation(Location loc1) { loc = loc1; }
        void setRP(int nRP) { renderPriority = nRP; }

        void setDisplayCharacter(char nDC) { displayChar = nDC; }
        void setEnemy(bool nES) { enemy = nES; }

        void teleport(Location tpTo) { loc = loc.handleTeleport(tpTo); }
};

#endif