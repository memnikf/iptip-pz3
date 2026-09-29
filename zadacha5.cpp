#include <iostream>

using namespace std;

int main()
{
    long long sec;
    cin >> sec;
    long long hh = sec / 3600 % 24;
    long long mm = sec % 3600 / 60;
    long long ss = sec % 60;
    cout << hh << ":" << mm / 10 << mm % 10 << ":" << ss / 10 << ss % 10 << endl;
    return 0;
}
