#ifndef Location_CPP
#define Location_CPP

#include "./utils/std.hpp"

class Location {
    int x, y;
    int yaw = 0;
    // ? world as dif type or int ???
    // World w;
    int world;
    public:
        Location() {}
        Location(int world, int x, int y) {
            this->world = world;
            this->x = x;
            this->y = y;
        }
        Location(int world, int x, int y, int yaw) {
            this->world = world;
            this->x = x;
            this->y = y;
            this->yaw = yaw;
        }
        
        int getX() { return x; }
        int getY() { return y; }
        int getYaw() { return yaw; }
        int getWorld() { return world; }

        void setX(int x) { this->x = x; }
        void setY(int y) { this->y = y; }
        void setYaw(int yaw) { this->yaw = yaw; }
        void setWorld(int world) { this->world = world; }

        Location handleTeleport(Location destination) {
            x = destination.getX();
            y = destination.getY();
            yaw = destination.getYaw();
            world = destination.getWorld();

            return Location(world, x, y, yaw);
        }

        std::string toString() {
            std::string opt = "";
            opt += std::to_string(x) + ';';
            opt += std::to_string(y) + ';';
            opt += std::to_string(yaw) + ';';
            opt += std::to_string(world) + ';';

            return opt;
        }
};

#endif