// #include <iostream>
// #include <fstream>
 
// using namespace std;
 
// int main()
// {
//     string str="hii i am coder";
//     ofstream out("example.txt");
//     out<<str;
//     /*string str2;
//     ifstream in("example.txt");
//     //in>>str2;
//     getline(in,str2);
//     cout<<str2;*/
// }
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream out;
    out.open("example.txt");
    out<<"united kingdom";
    out<<"united state";
    out.close();
    const int N=80;
    char line[N];
    ifstream in;
    in.open("example.txt");
    while(in){
        in.getline(line,N);
    }

    return 0;
}
