#include<iostream>
#include<algorithm>
using namespace std;
int main() {
// using built in function in a string 
    string str = "Nawaid";
    cout << str << endl;
    cout << str.length() << endl;// each time size will update as code will run below
    str.push_back('a');// it will add a after my name hence become Nawaida
    cout << str << endl;
    cout << str.length() << endl;
    str.pop_back();// it will remove the last letter hence becomes Nawaid again
    cout << str << endl;
    cout << str.length() << endl;
    str.append(" Ahmad");// if we have to join entire another string then we can use append
    cout << str << endl;
    cout << str.length() << endl;
    str.clear();// this will empty the string
    cout << str << "clear" << endl;
    cout << str.length() << endl;// 0 as string is cleared
    str += "Nawaid";// or str = str + "Nawaid" this is plus which will also work as append
    cout << str << endl;// again Nawaid will be printed
    str = "Ahmad " + str; // plus can also be used in this way that first write the string then plus it with str
    cout << str << endl;
    reverse(str.begin(),str.end());
    cout << str << endl;
    string s = "Nawaid";
    reverse(s.begin(),s.begin()+3);// it will be reversed till 3rd position
    cout << s;
}
// plus operator can be used to append on both side either from behind or from forward