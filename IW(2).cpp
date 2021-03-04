#include <iostream>

using namespace std;
int main(){
    int n;
    int max, min;
    cout << "Кількість натуральнихчисел ="; cin >> n;
    for (int i=0; i>n; i++)
        int max=i;
        for (int j=0; j<max; j++)
            int min=j;
    cout << "max=" << max << endl;
    cout << "min=" << min << endl;
    int sum = max+min;
    cout << "max+min=" <<  sum << endl;




}
