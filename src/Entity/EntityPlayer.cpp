#ifndef EntityPlayer_CPP
#define EntityPlayer_CPP

#include "../utils/std.hpp"
#include "./Entity.cpp"
#include "../Location.cpp"
#include "../Inventory/Inventory.cpp"

class EntityPlayer : public Entity {
    Entity player = Entity(Location(0, 2, 2), 4, "$", false);
    Inventory inv = Inventory();

    public:
        Inventory getInventory() {
            return inv;
        }
};

#endif