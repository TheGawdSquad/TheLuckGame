//
//  main.cpp
//  TheLuckGame
//
//  Created by cougar on 10/12/18.
//  Copyright © 2018 The Gawd Coding Squad. All rights reserved.
//

#include <iostream>
#include <istream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int coins = 0;
    char difficulty;
    
    // insert code here...
    cout << "Made by TheGawdCodingSquad!\n";
    
    cout << "Choose a difficulty (E,M,H) ...\n";
    cin >> difficulty;
    
    cout << difficulty << '\n';
    cout << "Coins left: " << coins;
    return 0;
}
