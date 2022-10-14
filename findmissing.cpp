// Simple CPP program to find first non-
// repeating element.
//#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
using namespace std;

int solution(int A[], int n)
{

    int result = 0;
    int count;
    cout << "Size of vecor  " << n << "\r\n";

    for (int i = 1; i < (n + 1); i++)
    {
        cout << "i=" << i << "\r\n";
        int j;
        count =0;
        for (j = 0; j < n; j++)
        {
            cout << "i=" << i << "//"
                 << "j=" << j << " -- "
                 << "A[" << j << "]"
                 << "=" << A[j];
            if (i == A[j])
            {
                count = 0;
                cout << "   encontre el numero  " << i << "\r\n";
            }
            else
            {
                count++;
                cout << " next ---->"  <<"count ="<<count << "\r\n";
            }

            if (j+1==n && count==n)
            {
                cout << " ohh "
                     << "\r\n";
                result = i;
            }
        }
    }

    return result;
}

// Driver code
int main()
{
    int arr[] = {1, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << n;
    cout << solution(arr, n);
    return 0;
}
