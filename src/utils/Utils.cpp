#include "std.hpp"

void clearScreen() {
    #ifdef _WIN32
    if (getenv("HOME"))
        system("clear");
    else
        system("cls");
    #else
        // POSIX
        system("clear");
    #endif
}