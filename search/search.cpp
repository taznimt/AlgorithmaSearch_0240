// search.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int arr[20]; //Array to be searched
int n; //Number of elements in the array
int i; //Index of array element

void input()
{
    while (true)
    {
        cout << "ENter the number of elements in the array: ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
    }
    //Accept array elements
    cout << "\n================\n";
    cout << "Enter array elements \n";
    cout << "\n================\n";
    for (i = 0; i < 0; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }

}

void LinearSearch()
{
    char ch;
    int ctr; // number of comparisons
    int item;

    do
    {
        //Accept the number to be searched
        cout << "\nEnter the elements you want to search: "; // step1
        cin >> item;

        ctr = 0;
        i = 0; // step 2
        while (i < n) // step3
        {
            ctr++;
            if (arr[i] == item)
            {
                cout << "\n" << item << " found at position " << (i + 1) << endl; //step6
                break;
            }
            i++; // step 4 
        }
        if (i == n) // step 5
            cout << "\n" << item << "not found in the array\n";
        cout << "\nnumber of comparisions:" << ctr << endl;

        cout << "\ncontinue search (y/n) :";
        cin >> ch;



    }
}


int main()
{
    
}


