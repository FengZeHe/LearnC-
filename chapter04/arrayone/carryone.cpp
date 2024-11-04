#include <iostream>

int main() {
    using namespace std;
    int yarms[3] = {1, 2, 3};
    cout << yarms[0] << endl;

    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    // cout << "Enter your name: \n";
    // cin >> name;
    //
    // cout << "Enter your favorites dessert: \n";
    // cin >> dessert;
    //
    // cout << "I have some delicious " << dessert;


    cout << "Enter your name:\n";
    cin.getline(name, ArSize);
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, ArSize);
    cout << "i have some delicious " << dessert << "for you " << name << ".\n";

    return 0;
}
