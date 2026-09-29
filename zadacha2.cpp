#include <iostream>

using namespace std;

int main()
{
    long long speed, time;
    cin >> speed >> time;
    long long km = speed * time % 109;
    km = (km + 109) % 109;
    cout << km << endl;
    return 0;
}
