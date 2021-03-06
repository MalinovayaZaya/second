//Напишите функцию sort упорядывающую массив целых чисел и программу с примером её использования. В коде запрещается использовать обращения к массиву по индексу( Arr[i] ), т.е. нужно использовать указательную арифметику. Эффективность в данной программе не приоритетна. Количество аргументов функции не должно превышать 2.

#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int *A = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int t;
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                t = A[j];
                A[j] = A[j + 1];
                A[j + 1] = t;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    delete [] A;
    return 0;
}
