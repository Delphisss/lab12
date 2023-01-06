#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

int main(){
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";
    for (int i =0 ; i < 3 ; i++){
        cin.get();
    }
    int x = rand()%9;
    string grade;
    if(x == 0) grade = "A";
    else if(x == 1) grade = "B+";
    else if(x == 2) grade = "B";
    else if(x == 3) grade = "C+";
    else if(x == 4) grade = "C";
    else if(x == 5) grade = "D+";
    else if(x == 6) grade = "D";
    else if(x == 7) grade = "F";
    else if(x == 8) grade = "W";

    cout << "You will get " << grade << " in this 261102.";

}

// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
//Kong >w<