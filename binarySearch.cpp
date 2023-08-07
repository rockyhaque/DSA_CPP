#include<bits/stdc++.h>
using namespace std;


int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = (start + end)/2;
    // best practice ->
    // if any case, start = 2^31 - 1, end = 2^31 - 1
    // mid = start + (end - start) / 2;

    while(start <= end)
    {
        if(arr[mid] == key)
            return mid;

        // Right Half
        if(key > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;

        mid = (start + end)/2;
        // best practice ->
        // if any case, start = 2^31 - 1, end = 2^31 - 1
        // mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{
    #ifndef DSA_CPP
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif

        int even[6] = {2, 4, 6, 8, 12, 18};
        int odd[5] = {3, 8, 11, 14, 16};

        int evenIndex = binarySearch(even, 6, 12);
        cout<<"Index of 12 is: "<<evenIndex<<endl;

        int oddIndex = binarySearch(odd, 5, 8);
        cout<<"Index of 8 is: "<<oddIndex<<endl;

    return 0;
}
