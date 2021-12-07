#include <iostream>
#include <fstream>
using namespace std;
ifstream read("numere.in");
ofstream call("numere.out");
int n, a, b;
int GCD(int x, int y)
{
    if (!y)
        return x;
    return GCD(y, x % y);
}
int main()
{
    read >> n;
    for (int i = 1; i <= n; i++)
    {
        read >> a >> b;
        call << a / GCD(a, b) << " " << b / GCD(a, b) << '\n';
    }
}