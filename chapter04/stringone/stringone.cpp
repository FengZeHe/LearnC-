//
// Created by 何泽丰 on 2024/11/4.
//
#include <iostream>
#include <string>


int main() {
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    cout << "Enter a kind of feline: ";
    cin >> charr1;
    cout << "Enter another kind of feline: ";
    cin >> str1;
    cout << "Here are some filines:\n";
    cout << charr1 << " " << charr2 << endl
            << str1 << " " << str2 << endl;

    return 0;
}
