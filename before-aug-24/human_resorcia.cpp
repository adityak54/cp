#include <bits/stdc++.h>
using namespace std;


char dayOfWeek(int total_days, int daysInWeek) {
    int Day_Of_Week = (total_days - 1) % daysInWeek; 
    return 'A' + Day_Of_Week;
}

int main() {
    int daysInYear, daysInMonth, daysInWeek;
    string date;
    cin >> daysInYear >> daysInMonth >> daysInWeek >> date;
    int year, month, day;
    char a1, a2;
    istringstream(date) >> year >> a1 >> month >> a2 >> day;

    if (daysInMonth > daysInYear || (daysInYear % daysInMonth != 0 && (daysInYear % daysInMonth) >= daysInMonth)) {
        cout << -1 << endl;
        return 0;
    }

    int monthsInYear = daysInYear / daysInMonth;
    if (month <= 0 || month > (monthsInYear + 1)) {
        cout << -1 << endl;
        return 0;
    }
    if (day <= 0 || day > daysInMonth) {
        cout << -1 << endl;
        return 0;
    }

    int total_days = (year - 1) * daysInYear + (month - 1) * daysInMonth + day;

    char Day_Of_Week = dayOfWeek(total_days, daysInWeek);
    cout << Day_Of_Week << endl;

    return 0;
}