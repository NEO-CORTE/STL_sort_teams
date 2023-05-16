#include <iostream>
#include <vector>
#include <algorithm>
#include "druzyna.h"
using namespace std;

int main() {
    vector<druzyna> liga;
    liga.push_back(druzyna("Dru�yna C", 4, 4, 2, 10, 7));
    liga.push_back(druzyna("Dru�yna D", 4, 3, 3, 14, 12));
    liga.push_back(druzyna("Dru�yna E", 3, 5, 2, 11, 9));
    liga.push_back(druzyna("Dru�yna F", 3, 4, 3, 9, 9));
    liga.push_back(druzyna("Dru�yna G", 2, 6, 2, 10, 8));
    liga.push_back(druzyna("Dru�yna H", 2, 5, 3, 8, 10));
    liga.push_back(druzyna("Dru�yna A", 5, 3, 2, 15, 10));
    liga.push_back(druzyna("Dru�yna B", 4, 4, 2, 12, 8));
    liga.push_back(druzyna("Dru�yna I", 2, 4, 4, 7, 12));
    liga.push_back(druzyna("Dru�yna J", 1, 3, 6, 6, 15));
    sort(liga.begin(), liga.end(), porownajDruzyny);
    for (auto& druzyna : liga) {
        cout << druzyna;
    }

}
