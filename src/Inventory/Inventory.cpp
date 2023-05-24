#include "../utils/std.hpp"
#include "Slot.cpp"
#include "Item.cpp"

typedef Slot Inv[9];

class Inventory {
    public:
        Inv inv = {
            Slot(Item("test", "1", "^"), 1),
            Slot(Item("test1", "1", "^"), 1),
            Slot(Item("test", "1", "^"), 1),
            Slot(Item("test1", "1", "^"), 1),
            Slot(Item("test", "1", "^"), 1),
            Slot(Item("test1", "1", "^"), 1),
            Slot(Item("test", "1", "^"), 1),
            Slot(Item("test1", "1", "^"), 1),
            Slot(Item("test", "1", "^"), 1),
        };

        Inventory() {}

        std::string getAllItems() {
            std::string opt;
            opt += "___________________\n";
            for (int i = 0; i < 9; i++) {
                opt += "|" + inv[i].item.getLogo();
            }
            opt += "|\n";
            for (int i = 0; i < 9; i++) {
                opt += "|" + std::to_string(inv[i].getAmount());
            }
            opt += "|\n";
            opt += "-------------------";

            return opt;
        }
};