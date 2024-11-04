//

#include <iostream>
#include <cmath>
void simon(int);  // 函数原型，很像用之前要声明的意思

int main() {
    using namespace std;
    double area;
    cout << "Enter the floor area, in square feet,of your home:";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square" << side
            << "feet to the side." << endl;
    cout << "How fascinating" << endl;
    simon(3);
    return 0;
}


void simon(int n) {
    using namespace std;
    cout << "this is simon speaking,n =>" << n;
}
