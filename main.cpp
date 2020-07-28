#include <bits/stdc++.h>
#include <stdlib.h>
#include <string>
using namespace std;

string unicode_chars[55] = {
"\u036d","\u0343","\u0313","\u0307","\u0357","\u030e","\u0321","\u0340","\u032b","\u0324","\u0324","\u0323","\u0349","\u0324",
"\u0300", "\u0305", "\u0306", "\u0307", "\u0308", "\u0309", "\u030a", "\u030b", "\u030c", "\u030e", "\u030f", "\u0310", "\u0311", 
"\u0313", "\u0314", "\u0315", "\u031a", "\u031b", "\u033d", "\u033e", "\u033f", "\u0340", "\u0341", "\u0342", "\u0343", "\u0344", 
"\u0346", "\u034a", "\u034b", "\u034c", "\u0350", "\u0351", "\u0352", "\u0357", "\u0358", "\u035b", "\u035d", "\u035e", "\u0360", 
"\u0361", "\u0312"
};

/*
0305
0306
0307
0308
0309
030a
030b
030c
030e
030f
0310
0311
0312
0313
0314
0315
031a
031b
033d
033e
033f
0340
0341
0342
0343
0344
0346
034a
034b
034c
0350
0351
0352
0357
0358
035b
035d
035e
0360
0361
Ṭ̔̋̇̀̎̅̇̀̓E̡̔̇̎̆̅̅͗͗͞Ẹ̤̓̓̋͆͊̒̉͝Ẹ͆̇̊͐̿͛̉͂̔E 


Ṭ̔̋̇̀̎̅̇̀̓Ẹ̀̎̀̈̑̊̋̓͠E̫̤̋̓͐͂̌͌͗͝E̒̀̽̇͋̈͊͒̽̕E   Ṭ̔̋̇̀̎̅̇̀̓Ẹ̀̎̀̈̑̊̋̓͠E̫̤̋̓͐͂̌͌͗͝E̒̀̽̇͋̈͊͒̽̕E
*/

void push_zalgo(){
    for(int i = 0; i < 5; i++){
        cout << unicode_chars[rand() % 55];
    }
}

void printLine(string input){
    for(int i = 0; i < input.length(); i++){
        cout << input[i];
        if(i == input.length() - 1) continue;
        push_zalgo();
    }
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string input;
    while(cin >> input){
        printLine(input);
    }
    cout << "\n";
    
	return 0;
}