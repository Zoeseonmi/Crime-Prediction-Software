#pragma once

#include <bits/stdc++.h>
using namespace std;

bool keyFound(map<string, int> m, string str) {
	bool returnVal = NULL;
	if (m.find(str) == m.end()) returnVal = false;
	else returnVal = true;

	return returnVal;
}

string maxFreq(vector<string> vec) {
	map<string, int> appearance; 

	for (int i = 0; i < vec.size(); i++) {
		if (keyFound(appearance, vec[i])) appearance[vec[i]]++;
		else appearance[vec[i]] = 1;
	}

	int maxVal = INT_MIN;
	pair<string, int> maxEntry;

	for (const auto &entry : appearance) {
		if (maxVal < entry.second) {
			maxVal = entry.second;
			maxEntry = entry;
		}
	}

	if (maxEntry.first == "Jan" || maxEntry.first == "January" || maxEntry.first == "1") return "February";
	else if (maxEntry.first == "Feb" || maxEntry.first == "February" || maxEntry.first == "2") return "March";
	else if (maxEntry.first == "Mar" || maxEntry.first == "March" || maxEntry.first == "3") return "April";
	else if (maxEntry.first == "April" || maxEntry.first == "Apr" || maxEntry.first == "4") return "May";
	else if (maxEntry.first == "May" || maxEntry.first == "5") return "June";
	else if (maxEntry.first == "June" || maxEntry.first == "Jun" || maxEntry.first == "6") return "July";
	else if (maxEntry.first == "July" || maxEntry.first == "Jul" || maxEntry.first == "7") return "August";
	else if (maxEntry.first == "August" || maxEntry.first == "Aug" || maxEntry.first == "8") return "September";
	else if (maxEntry.first == "September" || maxEntry.first == "Sep" || maxEntry.first == "9") return "October";
	else if (maxEntry.first == "October" || maxEntry.first == "Oct" || maxEntry.first == "10") return "November";
	else if (maxEntry.first == "November" || maxEntry.first == "Nov" || maxEntry.first == "11") return "December";
	else if (maxEntry.first == "Dec" || maxEntry.first == "December" || maxEntry.first == "12") return "January";
	return maxEntry.first;
}

class Model {
public:
	void predict(vector<string> events, vector<string> month, vector<string> place);
};

void Model::predict(vector<string> events, vector<string> month, vector<string> place) {
	string maxEvent = maxFreq(events);
	string maxMonth = maxFreq(month);
	string maxPlace = maxFreq(place);

	cout << endl << "Next Crime Occurence : " << maxEvent << ' ' << maxMonth << ' ' << maxPlace << endl;
};