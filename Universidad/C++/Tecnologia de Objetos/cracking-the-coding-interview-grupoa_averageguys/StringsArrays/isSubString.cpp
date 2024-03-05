#include <iostream>
using namespace std;

bool isSubString(string substr, string str) {
    int i = 0;
    int j = 0;
    while (i < str.length() && j < substr.length()) {
        if (str[i] == substr[j]) {
            i++;
            j++;
        } else {
            i++;
            j = 0;
        }
    }
    if (j == substr.length()) {
        return true;
    } else {
        return false;
    }
}
bool isRotation(string str1, string str2) {
    //tionrota tionrota 
    string str3 = str1 + str1;
    cout << str3 << endl;
    return isSubString(str2, str3);
}

int main(){
    string str1 = "waterbottle";
    string str2 = "bottle";
    string str3 = "erbottlewat";
    cout << isSubString(str2,str1) << endl;
    cout << isRotation(str3,str1) << endl;
    return 0;
}