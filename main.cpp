/*
    This file is part of Zalgo.

    Zalgo is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Zalgo is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Zalgo.  If not, see <https://www.gnu.org/licenses/>.
    Copyright (C) 2020 Nathan Coulas
*/

#include <bits/stdc++.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <regex>
#include "zalgo.h"

using namespace std;

vector<int> tokenize(string input){
    //Format MxDxU Example:
    //  1000x1000x5
    //  Middle = 1000
    //  Down = 1000
    //  Up = 5
    
    vector<int> ret;
    string temp = "";
    for(int i = 0; i < input.length(); i++){
        if(input[i] == 'x'){
            ret.push_back(stoi(temp));
            temp = "";
            continue;
        }
        temp += input[i];
    }
    ret.push_back(stoi(temp));
    return ret;
}

int main(int argc, char** argv){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    srand(time(NULL));
    int m, d, u, exec_point;

    for(int i = 0; i < argc; i++){
        if(argv[i] == "./main" || argv[i] == "zalgo") exec_point = i;
    }
    
    if(exec_point != (argc - 1) && regex_match(argv[exec_point + 1], regex("^\\d{1,}x\\d{1,}x\\d{1,}"))){
        vector<int> tokens = tokenize(argv[exec_point + 1]);
        m = tokens[0];
        d = tokens[1];
        u = tokens[2];
    }else{
        m = 2;
        d = 1000;
        u = 1000;
    }
    
    string input;
    while(getline(cin, input)){
        cout << generateLine(input, m, d, u) << "\n";
    }
    
	return 0;
}