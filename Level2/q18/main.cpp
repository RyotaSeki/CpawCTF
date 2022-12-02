#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream reading_file;
    string filename = "misc100";
    reading_file.open(filename, ios::in);
    string reading_line_buffer;
    while(getline(reading_file, reading_line_buffer));
    string chars = "lovelive!";
    for (char c: chars) {
        reading_line_buffer.erase(remove(reading_line_buffer.begin(), reading_line_buffer.end(), c), reading_line_buffer.end());
    }
    cout << reading_line_buffer;
}
