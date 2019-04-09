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

void selection_sort(int *array, unsigned length)
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

void shell_sort(int *array, unsigned length)
{
	unsigned i, j, k;
	int t;
	for(k = length / 2; k > 0; k /= 2)
    {
        for(i = k; i < length; i++)
        {
            t = array[i];
            for(j = i; j >= k; j -= k)
            {
                if(t < array[j - k])
                    array[j] = array[j - k];
                else
                    break;
            }
            array[j] = t;
        }
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

