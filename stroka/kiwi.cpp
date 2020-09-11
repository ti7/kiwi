#include <string>
#include <iostream>
using namespace std;

string SubtractSum(int n)
{
    int sum = 0;
    int temp_m = n;
    int temp_n = n;

    for (int i = temp_m; i > 0; i--) {
        while (temp_n != 0) {

            sum += temp_n % 10;

            temp_n /= 10;
        }
        cout << sum << endl;
        n -= sum;
        temp_n = n;
        sum = 0;

        if (n >= 1 && n <= 100 && n >= 0) {
            switch (n) {
            case 1: return "kivi"; break;
            case 2: return "pear"; break;
            case 3: return "kivi"; break;
            case 4: return "banana"; break;
            case 5: return "melon"; break;
            case 6: return "banana"; break;
            case 7: return "melon"; break;
            case 8: return "pineapple"; break;
            case 9: return "apple"; break;
            case 10: return "pineapple"; break;
            case 11: return "cucumber"; break;
            case 12: return "pineapple"; break;
            case 13: return "cucumber"; break;
            case 14: return "orange"; break;
            case 15: return "grape"; break;
            case 16: return "orange"; break;
            case 17: return "grabe"; break;
            case 18: return "apple"; break;
            case 19: return "grape"; break;
            case 20: return "cherry"; break;
            case 21: return "pear"; break;
            case 22: return "mcherry"; break;
            case 23: return "pear"; break;
            case 24: return "kiwi"; break;
            case 25: return "banana"; break;
            case 26: return "kiwi"; break;
            case 27: return "apple"; break;
            case 28: return "melon"; break;
            case 29: return "banana"; break;
            case 30: return "melon"; break;
            case 31: return "pineapple"; break;
            case 32: return "melon"; break;
            case 33: return "pineapple"; break;
            case 34: return "cucumber"; break;
            case 35: return "orange"; break;
            case 36: return "apple"; break;
            case 37: return "orange"; break;
            case 38: return "grape"; break;
            case 39: return "orange"; break;
            case 40: return "grape"; break;
            case 41: return "cherry"; break;
            case 42: return "pear"; break;
            case 43: return "cherry"; break;
            case 44: return "pear"; break;
            case 45: return "apple"; break;
            case 46: return "pear"; break;
            case 47: return "kiwi"; break;
            case 48: return "banana"; break;
            case 49: return "kiwi"; break;
            case 50: return "banana"; break;
            case 51: return "melon"; break;
            case 52: return "pineapple"; break;
            case 53: return "melon"; break;
            case 54: return "apple"; break;
            case 55: return "cucumber"; break;
            case 56: return "pineaple"; break;
            case 57: return "cucumber"; break;
            case 58: return "orange"; break;
            case 59: return "cucumber"; break;
            case 60: return "orange"; break;
            case 61: return "grape"; break;
            case 62: return "cherry"; break;
            case 63: return "applle"; break;
            case 64: return "cherry"; break;
            case 65: return "pear"; break;
            case 66: return "cherry"; break;
            case 67: return "pear"; break;
            case 68: return "kiwi"; break;
            case 69: return "pear"; break;
            case 70: return "kiwi"; break;
            case 71: return "banana"; break;
            case 72: return "apple"; break;
            case 73: return "banana"; break;
            case 74: return "melon"; break;
            case 75: return "pineapple"; break;
            case 76: return "melon"; break;
            case 77: return "pineapple"; break;
            case 78: return "cucumber"; break;
            case 79: return "pineapple"; break;
            case 80: return "cucumber"; break;
            case 81: return "apple"; break;
            case 82: return "grape"; break;
            case 83: return "orange"; break;
            case 84: return "grape"; break;
            case 85: return "cherry"; break;
            case 86: return "grape"; break;
            case 87: return "cherry"; break;
            case 88: return "pear"; break;
            case 89: return "cherry"; break;
            case 90: return "apple"; break;
            case 91: return "kiwi"; break;
            case 92: return "banana"; break;
            case 93: return "kiwi"; break;
            case 94: return "banana"; break;
            case 95: return "melon"; break;
            case 96: return "banana"; break;
            case 97: return "melon"; break;
            case 98: return "pineapple"; break;
            case 99: return "apple"; break;
            case 100: return "pineapple"; break;

            }
        }
        else continue;

    }
    return "error";
}


int main() {
    SubtractSum(999);
}

