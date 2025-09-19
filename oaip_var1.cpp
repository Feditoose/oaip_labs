#include <iostream>
#include <array>
using namespace std;

void bubbleSort(array<int, 5>& arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    const int size = 5;
    array<int, size> arr;
    for (int i = 0; i < 5; i++){
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }
    int sum = 0;
    cout << "\nЭлементы массива (неотсортированные): ";
    for (int i = 0; i < size; i++){
        cout << arr[i] << ' ';
        sum += arr[i];
    }
    cout << endl;
    cout << "Сумма эламетов: " << sum << endl;

    //Сортировка
    bubbleSort(arr, size);

    cout << "Минимальный элемент: " << arr[0] << ' ';
    cout << "\nЭлементы массива (отсортированные): ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}