#include <iostream>
using std::cout;
using std::cin;

int main()
{
    cout << "Wt Bg color ?!!\n";
    int bg;
    cin >> bg;
    cout << "\033]11;" << "#" << bg  << "\a";
    return 0;
}