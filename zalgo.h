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

    USAGE:
    #include "zalgo.h"
    cout << generateLine("Hello, World!", 0, 0, 0); //Converts "Hello, World" to Zalgo text with a magnitude of 0 for upward, downward and overlaid writing which results in the string being unaffected
        Expected Output: Hello, World!
    cout << generateLine("HE COMES", 5, 5, 5); // Converts "HE COMES" to Zalgo text with a magnitude of 5 overall. 'Zalgofication' is randomized so you will not get the exact same output as shown.
        Expected Similar Output: H̤̊̈̊E̡͈̘̮͓̘̥̠̘͢ C̤̓͊̑͐ͭ̌̅̔O̢̤̥̠̖̮͓̭̠͉M̩̦͔͈̮͖͇̟͖͜E̡̡̝̟͙͖̲̰̞͟S̡̡̘̤̙̗͔̗͍̣
*/

#ifndef ZALGO_H
#define ZALGO_H

#include <stdlib.h>
#include <string>
#include <time.h>
#include <iostream>
using namespace std;

const string above_unicode_chars[55] = {
    "\u030d", "\u030e", "\u0304", "\u0305", "\u033f", "\u0311", "\u0306", "\u0310", "\u0352", "\u0357", 
    "\u0351", "\u0307", "\u0308", "\u030a", "\u0342", "\u0343", "\u0344", "\u034a", "\u034b", "\u034c",
    "\u0303", "\u0302", "\u030c", "\u0350", "\u0300", "\u0301", "\u030b", "\u030f", "\u0312", "\u0313",
    "\u0314", "\u033d", "\u0309", "\u0363", "\u0364", "\u0365", "\u0366", "\u0367", "\u0368", "\u0369",
    "\u036a", "\u036b", "\u036c", "\u036d", "\u036e", "\u035b", "\u0346", "\u031a", 
};

const string below_unicode_chars[69] = {
    "\u0316", "\u0317", "\u0318", "\u0319", "\u031c", "\u031d", "\u031e", "\u031f", "\u0320", "\u0321", 
    "\u0322", "\u0323", "\u0324", "\u0325", "\u0326", "\u0327", "\u0328", "\u0329", "\u032a", "\u032b", 
    "\u032c", "\u032d", "\u032e", "\u032f", "\u0330", "\u0331", "\u0332", "\u0333", "\u0339", "\u033a", 
    "\u033b", "\u033c", "\u0345", "\u0347", "\u0348", "\u0349", "\u034d", "\u034e", "\u0353", "\u0354", 
    "\u0355", "\u0356", "\u0359", "\u035c", "\u035f", "\u0362", "\u0315", "\u031b", "\u0340", 
    "\u0341", "\u0358", "\u0321", "\u0322", "\u0327", "\u0328", "\u0334", "\u0335", "\u0336", 
    "\u034f", "\u035c", "\u035d", "\u035e", "\u035f", "\u0360",
    "\u0362", "\u0338", "\u0337", "\u0361", "\u0489"
};

const string middle_unicode_chars[5] = {
    "\u0334", "\u0335", "\u0336", "\u0337", "\u0338"
};

string get_zalgo(int position, int magnitude = 1){
    string ret = "";

    if(position == 0){
        for(int i = 0; i < magnitude; i++){
            ret += above_unicode_chars[rand() % 55];
        }
    }else if(position == 1){
        for(int i = 0; i < magnitude; i++){
            ret += below_unicode_chars[rand() % 69];
        }
    }else{
        for(int i = 0; i < magnitude; i++){
            ret += middle_unicode_chars[rand() % 5];
        }
    }

    return ret;
}

string generateLine(string input, int middle_mag, int down_mag, int up_mag){
    string ret = "";
    int mag = 0;
    for(int i = 0; i < input.length(); i++){
        ret += input[i];
        switch(rand() % 3){
            case 0: ret += get_zalgo(0, up_mag); break; //Adds UPWARD unicode combining characters to output
            case 1: ret += get_zalgo(1, down_mag); break; //Adds DOWNWARD unicode combing characters to output
            case 2: ret += get_zalgo(2, middle_mag); break; //Adds OVERLAID unicode combining characters to output
        }   
    }
    return ret;
}
#endif