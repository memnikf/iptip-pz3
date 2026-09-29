#include <iostream>

using namespace std;

int main()
{
    int h, up, down;
    cin >> h >> up >> down;
    int step = up - down;
    int days = (h - up + step - 1) / step + 1;
    cout << days << endl;
    return 0;
}
