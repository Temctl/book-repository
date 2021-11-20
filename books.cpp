#include<iostream>

using namespace std;

string ask[] = {"name of the book: ", "summary of the book: ", "rating of the book: "};

string name;
string summary;
string rate;
string book_stuff[] = {name, summary, rate};

int sz = sizeof(ask) / sizeof(ask[0]);
string rewrite;

void asking(){
    int x;
    for(int i = 0; i < sz; i++){
        cout << ask[i];
        cin >> book_stuff[i];
        cout << "is " << "\"" << book_stuff[i] << "\"" << " right? Do you want to rewrite? y/n: ";
        cin >> rewrite;
        x = rewrite.compare("y");
        while(x == 0){
            cout << ask[i];
            cin >> book_stuff[i];
            cout << "is " << "\"" << book_stuff[i] << "\"" << " right? Do you want to rewrite? y/n: ";
            cin >> rewrite;
            x = rewrite.compare("y");
        }
    }
}

int main(){
    asking();
    return 0;
}