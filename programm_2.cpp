#include <iostream>

int main() {
    int stop_quantity;
    int fin_value;

    setlocale(LC_ALL, "Russian");
    
    std::cout << "Введите количество остановок: ";
    std::cin >> stop_quantity; 
    std::cout << "\n" << std::endl;
    if (stop_quantity == 0) {
        std::cout << "Вы решили пойти пешком, стоимость поездки: 0" << std::endl;
    }
    else {
        for (int result = 1; result != stop_quantity + 1; result++) {
            std::cout << "Цена за " << result << " ост. равна " << result*5 << std::endl;
            fin_value = result;
        }
        std::cout << "Стоимость поездки: " << fin_value*5 << std::endl;
    }
        return 0;
}