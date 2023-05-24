#include "../utils/std.hpp"
#include "Item.cpp"

class Slot {
    public:
        Item item;
        int amount;
        
        Slot() {}

        Slot(Item item, int amount) {
            this->item = item;
            this->amount = amount;
        }

        Item getItem() { return item; }
        int getAmount() { return amount; }

        void setItem(Item item) { this->item = item; }
        void setAmount(int amount) { this->amount = amount; }

        bool operator==(const Slot &other) const {
            return item == other.item;
        }
};