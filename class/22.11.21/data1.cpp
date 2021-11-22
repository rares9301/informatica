#include <iostream>
#include <cmath>
#include <fstream>
ifstream read("data.in");
ofstream write("data.out");
using namespace std;
int n, i, dist, MAX;
struct PUNCT
{
    float x, y;
} v[100];
int main()
{
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        read >> v[i].x;
        read >> v[i].y;
    }
    for (i = 1; i <= n; i++)
    {
        if (v[i].y == 0)
            write << "Punctul: " << v[i].x << " " << v[i].y;
        dist = sqrt(< v[i].x * v[i].x + v[i].y * v[i].y) if (dist >= MAX)
            MAX = dist;
            
    }
    write << MAX;
}