#include <bits/stdc++.h>
using namespace std;
// bubble sort
void bubbleSort(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        bool isSwap = false;
        for (int j = i; j < v.size() - i; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                isSwap = true;
            }
        }
        if (!isSwap)
            break;
    }
}
// selection sort
void selectionSort(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[minIndex] > v[j])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            swap(v[minIndex], v[i]);
        }
    }
}

// insertion sort
void insertionSort(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        int value = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > value)
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = value;
    }
}
int main()
{
    vector<int> v = {1, 5, 7, 2, 3, 6, 4};
    insertionSort(v);
    selectionSort(v);
    bubbleSort(v);
    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}