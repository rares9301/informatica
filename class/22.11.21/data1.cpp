#include <iostream>
#include <cmath>
using namespace std;
int sim, sre, k, n;
float MAX;

typedef struct COMPLEX
{
    float re, im;
};
float modul(int a, int b)
{
    return sqrt(a * a + b * b);
}
int main()
{
    MAX = 0;
    sre = 0;
    sim = 0;
    cin >> n;
    COMPLEX v[100];
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i].re;
        cin >> v[i].im;
        sre = sre + v[i].re;
        sim = sim + v[i].im;
        if (v[i].re > v[i].im)
            k++;
        if (modul(v[i].im, v[i].re) > MAX)
            MAX = modul(v[i].im, v[i].re);
    }
    cout << sre << "+ i*" << sim << '\n';
    cout << k << '\n';
    cout << MAX;
}
