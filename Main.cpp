#include "mat.hpp"

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {

    cout << "Hello, Welcome to our store"<< endl;
    cout << "Please help us know which rug you would like to buy"<< endl;
    int row;
    cout << "Enter the width of the rug: (int num)"<< endl;
    cin >> row;
    int col;
    cout << "Enter the length of the rug: (int num)"<< endl;
    cin >> col;    
    char c1;
    cout << "Enter the first decoration of the rug: (one char)"<< endl;
    cin >> c1;    
    char c2;
    cout << "Enter the second decoration of the rug: (one char)"<< endl;
    cin >> c2;
    cout << "These are the dimensions of the rug you would like to buy:"<< endl;
    cout << "row= " << row << ", col= " << col << ", c1= " << c1 << ", c2= " << c2 << endl;
    // std :: string ans;
    // cout << "Do you confirm? (yes/no)"<< endl;
    // cin >> ans;
    cout << "This is how your rug will look like:"<< endl;
	cout << ariel::mat(row, col, c1, c2) << endl;

}
