#include <iostream>

using std::cin;
using std::cout;

const int max = 1000;

void puzir(int[]);
void pods4et(char[]);
void merge(int[]);


// сортировка пузырьковым способом -- done
void task1()
{
    // запись цифр в массив 
    int array[10]; // 10 это сколько элем будет в массиве
    std::cout << "Enter ten digits into the array: \n";// Введите десять цифр в массив
    for (int i = 0; i < 10; i++) {
        std::cout << "array [" << i+1 << "]:";
        std::cin >> array[i]; // читамем элем в массив
    }

    // вызыв функции сортировки
    puzir(array);

    // вывод цифр из массива
    for (int i = 0; i < 10; i++) {
        std::cout << array[i] << " ";
    }
}

void task2()
{
    // запись цифр в массив 
    char array[10]; // 10 это сколько элем будет в массиве
    std::cout << "Enter ten digits into the array: \n";// Введите десять цифр в массив
    for (int i = 0; i < 10; i++) {
        std::cout << "array [" << i + 1 << "]:";
        std::cin >> array[i]; // читамем элем в массив
    }

    // вызыв функции сортировки
    pods4et(array);

    // вывод цифр из массива
    for (int i = 0; i < 10; i++) {
        std::cout << array[i] << " ";
    }
}

void task3()
{
    // запись цифр в массив 
    int array[10]; // 10 это сколько элем будет в массиве
    std::cout << "Enter ten digits into the array: \n";// Введите десять цифр в массив
    for (int i = 0; i < 10; i++) {
        std::cout << "array [" << i + 1 << "]:";
        std::cin >> array[i]; // читамем элем в массив
    }

    // вызыв функции сортировки
    merge(array);
    
    // ввести общую часть массива
    // вывод цифр из массива
    for (int i = 0; i < 10; i++) {
        std::cout << array[i] << " ";
    }
}

int main()
{

    int choice = 0;
    while (true)
    {
        std::cout << "\n" << "What do you want to accomplish?\n"
            << "1. Bubble sorting algorithm.\n" // Алгоритм пузырьковой сортировки.
            << "2. Sorting algorithm by counting.\n" // Алгоритм сортировки подсчетом.
            << "3. Merge sorting algorithm.\n" // Алгоритм сортировки слиянием.
            << "4. game over\n"; // конец
        std::cin >> choice;
        switch (choice)
        {
        case 1:
        {
            task1();
            break;
        }

        case 2:
        {
            task2();
            break;
        }

        case 3:
        {
            task3();
            break;
        }

        case 4:
        {
            std::cout << "Good bye";
        }
        default:
        {
            return 0;
        }
        }
    }
}


void puzir(int array[]){

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 9; j++) {
            if (array[j] > array[j + 1]) {
                int new_peremen = array[j];
                array[j] = array[j + 1];
                array[j + 1] = new_peremen;
            }
        }
    }
}

void pods4et(char array[]) {

    int count[26] = { 0 };
    for (int i = 0; i < 10; i++) {
        int j = (int)array[i] - (int)'a';
        count[j]++;
    }

    int j = 0, i = 0;
    while (j < 26) {
        if (count[j] > 0) {
            array[i] = (char)((int)'a' + j);
            i++;
            count[j]--;
        }
        else {
            j++;
        }
    }
}

void merge(int array[]) {


}