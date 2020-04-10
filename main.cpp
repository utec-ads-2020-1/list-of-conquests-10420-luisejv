#include <iostream>
#include <string>
#include <sstream>
#include <map>

using namespace std;

int main() {
    int lines, countLines = 0;
    string line, linesConsole;
    getline(cin, linesConsole);
    lines = stoi(linesConsole);
    map<string, int> conquests;
    while (countLines < lines){
        countLines++;
        getline(cin, line);
        stringstream ss(line);
        string country, conquest;
        ss >> country;
        conquests[country]++;
    }
    for (auto p : conquests){
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}
