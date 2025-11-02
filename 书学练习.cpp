#include <stdlib.h>
#include <ctime>
#include <iostream>
#include "Decision.h"
using namespace std;



int main() {
    srand(time(0));
    string* Weather = new string[20];
    string* Decision = new string[20];
    int n = 0;
    while (true) {
        int m;
        cout << "please input the weather (-1 to exit): " << endl;
        cin >> m;
        if (m == -1) {
            break;
        }
        else if (m >= 1 && m <= 5) { 
            if (n < 20) {
                Weather[n] = getWeatherDescription(m);
                Decision[n] = makeDecision(m);
                n++;
            }
            else break;
        }
        else { 
            cout << "Invalid input. Please enter a number between 1 and 5, or -1 to exit." << endl;
        }
    }

    print(Weather, Decision);
    CompPlayPercentage(Decision ,n + 1);
    delete[] Weather;
    delete[] Decision;
    return 0;
}
