/*Ќапишите функции min, max, avg,med, процедуру swap принимающие в себ€ три вещественных аргумента
и программу с примером из использовани€. min - находит минимальное из трех значений,
max - максимальное, avg - среднее арифметическое, med  - медианное (гуглим, что это такое).
swap - переставл€ет значени€ по кругу ( первое во второе, второе в третье, третье в первое).*/

#include <iostream>

using namespace std;
min(double a, double b, double c){
double w=a;
if (w>b){
        w=b;

}
if (w>c){
    w=c;
}
return w;
    }
max(double a, double b, double c){
double q=a;
if (q<b){
    q=b;

}
if (q<c){
    q=c;
}
return q;
    }
avg(double a, double b, double c){
double s=(a+b+c)/3;
return s;
}
med(double a, double b, double c){
if(a>b){
    if(a<c){
        return a; //c>a>b
    }
    else{
        if(c>b){
            return c; //a>c>b
        }
        else{
            return b; // a>b>c
        }
    }
}
else{ // b>a
        if(b>c){
    if(a>c){ //b>a>c
        return a;
    }
    else{ //b>c>a
        return c;
    }
}
else{
return b;
}
}
}
void swap(double a, double b, double c){
double r;
r=a;
a=b;
b=c;
c=r;
cout << a << b << c;
}

int main()
{
double a, b, c;
cin >> a >> b >> c;
double t = min(a, b, c);
double y = max(a, b, c);
double f = avg(a, b, c);
double g = med(a, b, c);
cout << "min-" << t << endl;
cout << "max-" << y << endl;
cout << "avg-" << f << endl;
cout << "med-" << g << endl;
swap(a,b,c);
return 0;
}
