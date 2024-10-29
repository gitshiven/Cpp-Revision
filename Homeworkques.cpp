#include <iostream>
using namespace std;

int main() {
    int money = 1330;
    // int num;  // Initialize num to your choice of case (1 to 4)
    int i=1;
    // int i;
while(i<=4){
    switch(i) {
        case 1:
            cout << "100 rs notes: " << money / 100 << endl;
            money = money % 100;  // Update money correctly
            i++;
            break;
        case 2:
            cout << "50 rs notes: " << money / 50 << endl;
            money = money % 50;  // Update money correctly
            i++;
            break;
        case 3:
            cout << "20 rs notes: " << money / 20 << endl;
            money = money % 20;  // Update money correctly
            i++;
            break;
        case 4:
            cout << "1 rs notes: " << money / 1 << endl;
            money = money % 1;  // Update money correctly
            i++;
            break;
        default:
            cout << "Invalid case" << endl;
    }
}

    return 0;
}
