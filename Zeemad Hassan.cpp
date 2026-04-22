#include <iostream>
#include <fstream>
using namespace std;

void inputArray(int arr[], int size) 
{
    cout<<'\n'<<"Enter "<<size<<" Integers: "<<'\n';
    for (int i=0; i<size; i++) 
	{
        cin>>arr[i];
    }
}

void displayArray(const int arr[], int size) 
{
    cout<<"Array Elements: ";
    for (int i=0; i<size; i++) 
	{
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}

int calculateSum(const int arr[], int size) 
{
    int sum = 0;
    for (int i=0; i<size; i++) 
	{
        sum += arr[i];
    }
    return sum;
}

void writeToFile(const int arr[], int size) 
{
    ofstream file("array_data.txt");
    for (int i = 0; i<size; i++) 
	{
        file<<arr[i]<<" ";
    }
    file.close();
}

void readFromFile(int arr[], int size) 
{
    ifstream file("array_data.txt");
    for (int i=0; i<size; i++) 
	{
        file>>arr[i];
    }
    file.close();
}

int main() 
{
	cout<<"================================="<<'\n';
	cout<<"        File Handling"<<'\n';
	cout<<"================================="<<'\n';
	
    const int SIZE = 10;
    int arr[SIZE];
    
    inputArray(arr, SIZE);
       
    cout<<'\n';
    
    displayArray(arr, SIZE);

    int sum = calculateSum(arr, SIZE);
    cout<<'\n'<<"Sum: "<<sum<<'\n';

    writeToFile(arr, SIZE);

    for (int i=0; i<SIZE; i++) arr[i] = 0;
    
    cout<<'\n';

    readFromFile(arr, SIZE);
    cout<<"Data after reading from file: "<<'\n';
    displayArray(arr, SIZE);

    cout<<'\n'<<"================================="<<'\n';
	cout<<"       Program Terminated"<<'\n';
	cout<<"================================="<<'\n';

    return 0;
}