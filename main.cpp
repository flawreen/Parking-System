#include <iostream>
#include <string>
#include <iterator>
#include "parkingLot.h"

/*
CLI --- Discontinued
class choices {
private:
    int rows, columns;
    std::string choice, command, lotName;
    std::vector<parkingLot> availableLots;
public:
    void showCommands() {
        std::cout << "createLot = Create a parking lot\n";
        std::cout << "selectLot = Select an already existing parking lot\n";
        std::cout << "createUser = Create user\n";
        std::cout << "selectUser = Select an already existing username\n";
        std::cout << "exit = exit progran\n";
    }

    //fa optiune sa poata extinde parcarea pt o suma de bani
    void selectLot() {
        if (availableLots.empty()) {
            std::cout << "There are no available plots.\n";
        } else {
            std::cout << "Here are the available plots: \n";
            for (auto &plot : availableLots) {
                std::cout << plot.getLotName();
            }
            std::cout << "Enter the plot you want to use:\n>";
        }
    }

    void createLot() {
        std::cout << "Write a name for the lot:\n";
        std::cin >> lotName;
        std::cout << "Write the number of lines (0 for default):\n";
        std::cin >> rows;
        std::cout << "Write how many spaces a line should have (0 for default):\n";
        std::cin >> columns;
        if (!rows) {
            if (!columns) {
                availableLots.emplace_back(lotName);
            } else {
                availableLots.emplace_back(columns, lotName);
            }
        } else {
            availableLots.emplace_back(rows, columns, lotName);
        }
    }

    void selectUser() {

    }

    void createUser() {

    }

    void chooseOption() {
        std::cout << "Write action (type 'help' to see the commands):\n>";
        std::cin >> choice;
        if (std::equal(choice.begin(), choice.end(), "exit")) return;
        if (std::equal(choice.begin(), choice.end(), "help")) {
            showCommands();
            chooseOption();
        }
        if (std::equal(choice.begin(), choice.end(), "createLot")) {
            createLot();
            chooseOption();
        }
        if (std::equal(choice.begin(), choice.end(), "selectLot")) {
            selectLot();
            chooseOption();
        }

        if (std::equal(choice.begin(), choice.end(), "createUser")) {
            createUser();
            chooseOption();
        }

        if (std::equal(choice.begin(), choice.end(), "selectUser")) {
            selectUser();
            chooseOption();
        }
    }

};
*/

int main() {
//     chooseOption();

   parkingLot p1(7, 7, "La Gica");
   Client Florin("Florin");
   Client blade("Marius");
   Client Gerunziu("Mircea");
   p1.parkCar(Florin, 10);
   p1.parkCar(blade, 9);
   p1.parkCar(Gerunziu, 4);
   p1.leaveParkingLot(Florin);
   p1.leaveParkingLot(blade);
   p1.leaveParkingLot(Gerunziu);
   p1.parkCar(Florin, 7);
   p1.showParkingLot();

    return 0;
}
