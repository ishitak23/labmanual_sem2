#include<iostream>
using namespace std;
int main() {
    string id;
    cin>> id;
    int left =0;
    int right = id.length() - 1;
    int flag =1;
    while (left < right) {
        if (id[left] != id[right]) {
            flag = 0;   
            break;
        }
        left++;
        right--;
    }

    if (flag == 1) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }
return 0;
}
    
