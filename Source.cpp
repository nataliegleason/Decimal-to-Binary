#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector<int> tobinary(int decimal_number) {
    vector<int> vect;
    do {

        int temp;
        temp = decimal_number % 2;
        vect.push_back(temp);
        decimal_number = decimal_number / 2;

    } while (decimal_number > 0);

    reverse(vect.begin(), vect.end());

    return vect;
}

int numofones(vector<int> a) {
    int count = 0;
    for (int i = 0; i < (a.size()); i++) {
        if (a[i] == 1) {
            count++;
        }
    }
    return count;
}

int main()
{
    cout << "Please enter a decimal number: ";
    int decimal_number;
    cin >> decimal_number;
    vector<int> a;
    a = tobinary(decimal_number);
    for (int i = 0; i < (a.size()); i++) {
        cout << a[i];
    }
    cout << "\nThe number of ones in this binary number is:\t";
    cout << numofones(a);
    return 0;
}