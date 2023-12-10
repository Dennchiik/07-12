#include <iostream>

class Elevator {
private:
    int currentFloor;
    int totalFloors;

public:
    Elevator(int floors) : totalFloors(floors) {
        currentFloor = 1;
    }

    void moveToFloor(int floor) {
        if (floor >= 1 && floor <= totalFloors) {
            std::cout << "Лифт движется с " << currentFloor << " этажа на " << floor << " этаж" << std::endl;
            currentFloor = floor;
        }
        else {
            std::cout << "Такого этажа нет в доме" << std::endl;
        }
    }

    int getCurrentFloor() const {
        return currentFloor;
    }
};

int main() {
    Elevator lift(10);
    lift.moveToFloor(5);
    std::cout << "Текущий этаж лифта: " << lift.getCurrentFloor() << std::endl;

    return 0;
}
