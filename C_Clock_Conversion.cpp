#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int hours = stoi(s.substr(0, 2));
        int minutes = stoi(s.substr(3, 2));

        string meridiem;

        if (hours >= 12) {
            meridiem = "PM";
            if (hours > 12) {
                hours -= 12;
            }
        } else {
            meridiem = "AM";
            if (hours == 0) {
                hours = 12;
            }
        }

        cout << setfill('0') << setw(2) << hours << ":" << setw(2) << minutes << " " << meridiem << endl;
    }

    return 0;
}
