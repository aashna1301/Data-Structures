#include<iostream>
using namespace std;

main()
{
    int arr[10] = {23,5,13,76,34,56,86,12,4,67};
    int temp;
    int isSorted = 0;
    for(int i=0;i<9;i++){
        isSorted = 1;
        for(int j = 0; j <9 -i ; j++)
            if (arr[j] > arr[j+1])
            {
                temp = arr[j] ;
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSorted = 0;
            }
        if (isSorted)
            break;
    }
    cout << "The sorted array is"<<'\n';
    for ( int k = 0; k <10; k++)
    {
        cout<< arr[k]<<'\n';
    }        

}