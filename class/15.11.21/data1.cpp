#include <iostream>
#include <cstring>
using namespace std; 
char text[256], cuv[25], inv[25], *p, *q;
int main()
{
    cin.get(text, 256)
        p = text;
    q = srchr(text, ' ');
    while (q)
    {
        * cuv = NULL; //sau char cuv[]= " "; -sir vid
        strcat(cuv, p, q - p);
        strcpy(inv, cuv);
        strrev(cuv);
        if (strcmp(cuv, inv) == 0)
            cout<< cuv << '\n';
        p = q + 1;
        q = strchr(p, ' ');
    }
}