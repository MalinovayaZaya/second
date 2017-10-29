//Напишите программу находящую минимальную сумму пары элементов массива отстоящих друг от друга не менее чем на 4 элемента(первый и пятый элемент могут подходить, а первый и третий - нет). Эффективность в данной программе не приоритетна. 

#include <iostream>
using namespace std;
int main()
{
int n, m = 0;
cin >> n;
int A[n];
for (int i = 0; i < n; i++){
cin >> A[i];
}
if (n < 5)
cout << "wrong data" << endl;
else {
m = A[0] + A[4];
for (int i = 0; i<n-4; i++){
for (int j = i + 4; j<n; j++){
if (m > A[i] + A[j])
m = A[i] + A[j];
}
}
cout << m;
}
return 0;
}
