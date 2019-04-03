#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void swap(int _a, int _b)
{
    int temp = _a;
    _a = _b;
    _b = temp;
}

void bubble_sort(int array[], int length)
{
    for(int i = 1; i < length-1; i++)
    {
        for(int j = 0; j < length-1; j++)
        {
            if (array[j]>array[j+1])
            {
                swap(array[j],array[j+1]);
            }
        }
    }
}

void selection_sort(int array[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        int min_idx = i, min = array[i];
        for (int j = i + 1; j < length; j++)
        {
            if (array[j] < array[min_idx])
            {
                min = array[j];
                min_idx = j;
            }
        }

        array[min_idx] = array[i];
        array[i] = min;
    }
}




int main()
{
    srand(time(NULL));
    int n = 1000;
    int a[n];

    for(int i = 0; i < n; i++)
    {
        a[i] = rand()%100+1;
        cout << a[i] << " ";
    }

    selection_sort(a,n);

    cout << endl << "Sorted: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }



    return 0;
}

