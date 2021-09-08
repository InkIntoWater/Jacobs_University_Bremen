/*
CH-230-A
a9_p8.cpp
Suraj Giri
s.giri@jacobs-university.de
*/

#include<iostream>

using namespace std;

/*defining a function void subtract_max() to find the maximum element from
the integer array and subtract that maximum value from each element of the
array*/
void subtract_max(int a[], int n)
{
    int max;
    int i;
    max = a[0];
    for (i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }   
    }   
    cout<< "Max value in Array: " << max << "\n";
    cout << "Elements of array after subtracting max from them: \n";
    for (int j = 0; j < n; j++)
    {
        a[j] = a[j] - max;
        cout << a[j] << endl;
    }
}

//defining a function to deallocate or releasing the memory
void deallocate(int a[])
{
    delete[] a;
}

int main()
{
    //declaring n as the size of the array
    int n;
    cin >> n;
    int *a;
    a = new int[n]; //allocating memory for the array
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    //for printing the output
    cout << "After using the declared functions: \n";

    /*calling the function to find the max element of the integer array 
    and subtracting that maximum value from every element of the array*/
    subtract_max(a, n);

    //calling the function to release the memory
    deallocate(a);
    return 0;
}