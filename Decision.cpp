#include "Decision.h"
#include <stdlib.h>
#include <ctime>


void print(string* a, string* b) {
    for (int i = 0; i < 20; i++) {
        cout << i + 1 << "  " << "Weather: " << a[i] << endl;
        cout << "   Decision: " << b[i] << endl;
    }
}

string getWeatherDescription(int a) {
    string description;
    switch (a) {
    case 1:
        description = "sunny and humid";
        break;
    case 2:
        description = "sunny and not humid";
        break;
    case 3:
        description = "raining and windy";
        break;
    case 4:
        description = "raining and not windy";
        break;
    case 5:
        description = "overcast";
        break;
    default:
        description = "unknown";
        break;
    }
    return description;
}

string makeDecision(int weatherCode) {
    int randomValue = rand() % 14;

    if (randomValue > 8) {
        return "Not play";
    }
    else {
        if (weatherCode == 1 || weatherCode == 2) {
            int j = rand() % 5;
            if (j > 1) {
                return "Not play";
            }
            else {
                return weatherCode == 1 ? "Play" : "Not play";
            }
        }
        else if (weatherCode == 5) {
            return "Play";
        }
        else if (weatherCode == 3 || weatherCode == 4) {
            int o = rand() % 5;
            if (o > 2) {
                return "Not play";
            }
            else {
                return weatherCode == 4 ? "Play" : "Not play";
            }
        }
    }
    return "Not play";
}

void CompPlayPercentage(string a[], int b) {
    int j = 0;
    for (int i = 0; i < b; i++) {
        if (a[i] == "Play") {
            j++;
        }
    }
    int percentage = (j * 100) / b;
    cout << "The percentage of  play is: " << percentage << "%" << endl;
}
