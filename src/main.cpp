#include <iostream>
#include <vector>

#include "Tree/Tree.hpp"

int main() {
    Splay a;
    std::vector<int> b{2, 10, 5, 7, 3, 4, 1, 8, 6, 9};
    std::vector<int> c{2, 10, 5, 7, 3};

    for (auto &it : b) {
        a.insert(it);
    }

    for (auto &it : c) {
        std::vector<int> tmp = a.values();
        for (auto &it2 : tmp) {
            std::cout << it2 << ' ';
        }
        std::cout << std::endl;
        a.remove(it);
    }
    return 0;
}
