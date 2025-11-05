#include <iostream>
using namespace std;

float findAverage(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    float avg = (float)sum / size;
    return avg;
}

int main()
{
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int arr[100];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    float average = findAverage(arr, size);
    cout << "Average value = " << average;

    return 0;
}
