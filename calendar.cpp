//============================================================================
// Name        : courcera.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
using namespace std;

void AddFunc (const int& day, const string& activity, vector<string>& calendar) {

}
void NextFunc(vector<string>& calendar, int& month) {
	int day_in_month[]={31,28,31,30,31,30,31,31,30,31,30,31};
	if ( day_in_month[month] < day_in_month[month-1] ) {
		string str[256];
		int day=calendar.size() -1;
		for (int i = (day_in_month[month-1] - day_in_month[month]); i > 0; i--) {
			//strcat(str, calendar[day]);
			cout << calendar[day];
			day--;
		}
		calendar.resize(day_in_month[month]);
		//перенести элементы с конца в промежуточный вектор
		//сменить размер
		//добавить к последнему элементу дела
	}
}
void DumpFunc () {

}

void ParseFunc(const string& action, const int& day, const string& activity, vector<string>& calendar,int& month) {
	if (action == "ADD" )
		AddFunc(day,activity,calendar);
	else if (action == "NEXT") {
		NextFunc(calendar, month);
		month += 1;
		cout << "HUI";
	}
	else if (action == "DUMP")
		DumpFunc();
	cout << action << " " << day << " " << activity << endl;
}

int main () {
	vector<string> calendar;
	int month=1;
	int a;
	cin >> a;
	for (int i=0; i < a; i++) {
		vector<string> action;
		action.erase();
		int day;
		tring activity;
		cin >> action;
		if ( action != "NEXT")
			cin >> day >> activity;
		else {
			day = 0;
			activity ="empty";
		}
		ParseFunc(action,day,activity,calendar,month);

	}
	return 0;
}