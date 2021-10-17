#include <iostream>



int main() {
    int park[9][7] = { 0 }, m = 20, n = 20, i, j;


    for (i = 0; i < 9; ++i) {
        for (j = 0; j < 7; ++j) {
            if (park[i][j] == 0) std::cout << "[ ] ";
            else std::cout << "[x] ";
        }
        std::cout << '\n';
    }
    return 0;
}
