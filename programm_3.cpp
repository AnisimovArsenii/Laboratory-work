#include <iostream>

// Лаба 1 ОАиП

int main() {
    //объявление массива и переменной, содержащей его размера
    int size = 10;
    int arr[size];

    //ввод элементов
    for (int i = 0; i < size; i++) {
        std::cout << "Введите " << i+1 << "-й элемент массива: ";
        std::cin >> arr[i];
    }
    std::cout << '\n' << std::endl;

    //вывод элементов массива
    std::cout << "Введенный вами массив:";
    for (int i = 0; i < size; i++) {
        std::cout << ' ' << arr[i];
    }
    std::cout << '\n' << std::endl;

    //сумма элементов массива
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    std::cout << "Сумма элементов массива: " << sum;
    std::cout << '\n' << std::endl;

    //минимальный элемент массива
    long int min = 100000000;
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    std::cout << "Минимальный элемент массива: " << min << std::endl;
    std::cout << "\n";
    
    //сортировка массива вставками и вывод его упорядоченных элементов
    for (int i = 1; i < size; i++){
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && key < arr[j]) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    std::cout << "Отсортированный массив:";
    for (int i = 0; i < size; i++) {
        std::cout << ' ' << arr[i];
    }
    
    return 0;
}