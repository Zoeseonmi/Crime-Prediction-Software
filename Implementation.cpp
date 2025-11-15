#include "Model.hpp"
#include "Interface.hpp"
using namespace std;

int main() {
	Interface inter;
	Model model;

	vector<string> events;
	vector<string> month;
	vector<string> place;

	inter.header();
	cout << "How many events? : ";
	int T;
	cin >> T;

	while (T--) {
		string tempEvent;
		string tempMonth;
		string tempPlace;

		cin >> tempEvent >> tempMonth >> tempPlace;
		events.push_back(tempEvent);
		month.push_back(tempMonth);
		place.push_back(tempPlace);
	}

	inter.loadingScreen();
	model.predict(events, month, place);

	return 0;
}