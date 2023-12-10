#include <iostream>

class DigitalCounter {
private:
    int value;
    int minValue;
    int maxValue;

public:
    DigitalCounter(int min, int max) : minValue(min), maxValue(max) {
        value = min;
    }

    void setValue(int val) {
        if (val >= minValue && val <= maxValue) {
            value = val;
        }
        else {
            std::cout << "Значение должно быть в диапазоне от " << minValue << " до " << maxValue << std::endl;
        }
    }

    void increment() {
        if (value < maxValue) {
            value++;
        }
        else {
            value = minValue;
        }
    }

    int getValue() const {
        return value;
    }

    void Run(int iterations) {
        for (int i = 0; i < iterations; ++i) {
            increment();
            std::cout << "Текущее значение счетчика: " << getValue() << std::endl;
        }
    }
};

int main() {
    DigitalCounter counter(0, 100);
    counter.setValue(50);
    counter.increment();
    std::cout << "Текущее значение счетчика: " << counter.getValue() << std::endl;
    counter.Run(5);

    return 0;
}
