#include <iostream>

int stonetolb(int);

int main() {
    int stone;
    using namespace std;
    cout << "Enter the weight in stone:";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = " ;
    cout << pounds << " pounds." << endl;

    return 0;
}

int stonetolb(int sts) {
    return 14 * sts;
}
