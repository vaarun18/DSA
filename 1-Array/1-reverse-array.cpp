/*
Input --> {1,2,3}
Output --> {3,2,1}


*/

#include <bits/stdc++.h>
using namespace std;

void reverse_array(int a[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        swap(a[i], a[j]);
        i++;
        j--;
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    reverse_array(a, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
}