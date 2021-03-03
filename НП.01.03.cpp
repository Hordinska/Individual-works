#include <iostream>
using namespace std;

int main()
{
    int n, x, y, l=-1;
    cout << "n="; cin >> n;
    for (x=0; x<=n; x++)
        for (y=0; y<=n; y++)
            if (x*x+y*y*y*y==n)
            {
                cout << "n=" << n << " x=" << x << " y=" << y << endl;
                l++;

            }
    if (l==-1)
    {
        cout << "There is no x and y" << endl;
    }
    printf("hi\n");

    return 0;
}
