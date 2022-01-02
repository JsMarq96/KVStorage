#include <iostream>

#include "kv_storage.h"

int main(int argc, char *argv[]) {
    sKVStorage storage;

    storage.init();

    // Inserts
    storage.add("abc", 3, 20);
    storage.add("ebac", 4, 50);
    storage.add("eb", 2, 22);
    storage.add("eb", 2, 32);
    storage.add("ebecabesa", 9, 63);
    storage.add("ebec", 4, 62);

    // Fetch
    std::cout << "ebac: " << storage.get_int("ebac", 4) << std::endl;
    std::cout << "abc: " <<  storage.get_int("abc", 3) << std::endl;
    std::cout << "eb: " << storage.get_int("eb", 2) << std::endl;
    std::cout << "ebec: " << storage.get_int("ebec", 4) << std::endl;
    std::cout << "ebecacebsa: " << storage.get_int("ebecabesa", 9) << std::endl;

    // Clean
    storage.clean();
    return 0;
}
