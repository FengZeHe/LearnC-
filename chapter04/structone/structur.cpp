#include <iostream>

struct inflatable {
    char name[20];
    float volume;
    double price;
};

int main() {
    using namespace std;
    inflatable guest = {
        "Apple",
        1.88,
        8.88
    };
    cout << guest.price + guest.price << endl;
}
