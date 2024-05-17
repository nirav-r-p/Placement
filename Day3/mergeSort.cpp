#include <iostream>

using namespace std;

void merge(int array[], int const left, int const mid,int const right)
{
    int const subArrayOne = mid - left + 1;
    int const subArrayTwo = right - mid;


    auto *leftArray = new int[subArrayOne],*rightArray = new int[subArrayTwo];

   
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];

    auto i = 0, j = 0;
    int k = left;

    while (i < subArrayOne && j < subArrayTwo)
    {
        if (leftArray[i] <= rightArray[j])
        {
            array[k] = leftArray[i];
            i++;
        }
        else
        {
            array[k] = rightArray[j];
            j++;
        }
        k++;
    }


    while (i < subArrayOne)
    {
        array[k] = leftArray[i];
        i++;
        k++;
    }


    while (j < subArrayTwo)
    {
        array[k] = rightArray[j];
        j++;
        k++;
    }
    delete[] leftArray;
    delete[] rightArray;
}

void mergeSort(int arr[], int l, int r)
{
    if (l >= r)
        return;
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}

int main()
{
    int arr[] = {8, 9, 5, 6, 7, 3, 2, 1, 4};
    int n = sizeof(arr) / sizeof(int);
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}