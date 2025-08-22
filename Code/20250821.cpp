#include<iostream>

using namespace std;

int main()
{
    // int A[10] = { 2,4,6,8,10,12,14 };
    //A[0] = 12;
    //A[1] = 15;
    //A[2] = 25;
    int n;
    cout << "Enter Size";
    cin >> n;
    //int A[n] = {2,4,6,8,10,12};// cannot initialize an array like this
    //variable size array cannot be initialized
    A[0] = 2;
    for (int x : A) // for each loop
    {
        cout << x << endl;
    }
    //for (int i = 0; i < 10; i++)
    //{
    //    cout << A[i] << endl;
    //}
    // cout << sizeof(A) << endl;
    // cout << A[8] << endl;
    // printf("%d\n", A[9]);
    return 0;
}