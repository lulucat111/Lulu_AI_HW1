//
//  main.cpp
//  CS561_homework
//
//  Created by yuruluo on 16/8/31.
//  Copyright © 2016年 yuruluo. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

struct Node
{
    string nodeID;
    vector<Node> adjNode;
    vector<int> time;
    map<Node,int> adjNodeInfo;
};

void readfile( string file )
{
    
}



// zhel i shi ben ruur de shijie
// zhege shi da xixi laba
// xx's modify sssss
