#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream read("data.in");
ofstream call("data.out");
 struct ELEV
{
    char nume[30];
    char clasa[3];
    int iD, nra;
    float m;
} l, v[100];
int n, i, k;
float MAX;
int main()
{
    read >> n;
    for (i = 1; i <= n; i++)
    {
        cin.get();
        cin.get(v[i].nume, 30);
        cin.get();
        cin.get(v[i].clasa, 3);
        cin.get();
        read >> v[i].iD >> v[i].nra;
        read >> v[i].m;
    }
    for (i = 1; i <= n; i++)

        if (v[i].m >= 8.50)
            call << v[i].nume << " ";

    MAX = 0;

    for (i = 1; i <= n; i++)

        if (stricmp("11A", v[i].clasa) == 0)
            if (v[i].m > MAX)
                MAX = v[i].m;

    call << MAX;
    k = 0;
    for (i = 1; i <= n; i++)
        if (strcmp("11B", v[i].clasa) == 0)
        {
            if (v[i].nra >= 15)
                k++;
        }
    call << k;

}
