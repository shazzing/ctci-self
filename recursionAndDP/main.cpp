//
//  main.cpp
//  recursionAndDP
//
//  Created by shashank hegde on 6/18/16.
//  Copyright © 2016 shashank hegde. All rights reserved.
//

#include <iostream>
#include "recursionDP1.h"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int m_steps = steps(7);
    cout << " num of ways to cover 7 steps are : " << m_steps << endl;
    vector<vector<int>> grid(4, vector<int>(4, 0));
    grid[1][0] = 1, grid[0][2] = 1, grid[1][2] = 1, grid[2][3] = 1, grid[3][1] = 1;
    vector<pair<int, int>> rob_path = robotPath(grid);
    for(pair<int, int> pr:rob_path){
        cout << "{" << pr.first << "," << pr.second << "}, " << endl;
    }
    cout << endl;
    return 0;
}
