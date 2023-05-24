#ifndef Item_CPP
#define Item_CPP

#include "../utils/std.hpp"

class Item {
    std::string name;
    std::string description;
    std::string logo;
    public:
        Item() {}

        Item(std::string name, std::string description, std::string logo) {
            this->name = name;
            this->description = description;  
            this->logo = logo;    
        }

        bool operator==(const Item &other) const {
            return name == other.name;
        }

        std::string getLogo() { return logo; }
};

#endif