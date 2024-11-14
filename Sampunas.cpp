#include <iostream>
#include <locale>
#include <fstream>

using namespace std;
struct samp
{
    bool plauta = false;
};
int main()
{
    int n, b, sum = 1, k = 0;
    cin >> n >> b;
    samp info[n];
    info[0].plauta = true;
    int d[b];
    for (int i = 0; i < b; i++)
    {
        cin >> d[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (info[i-1].plauta == false )
        {
            sum++;
            info[i].plauta = true;
        }
        if (d[k] == i+1)
        {
            sum++;
            k += 1;
            info[i].plauta = true;
        }
    }
    cout << sum;
    return 0;
}
