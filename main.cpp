#include <iostream>
#include <string>

using namespace std;
bool isPalindrome(string str);
bool isStringPalindrome(string str, int first, int last);

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    if (isPalindrome(str)){
        cout<<"The string "<<str<<" is palindrome"<<endl;
    }
    else{
        cout<<"The string "<<str<<" is not a palindrome"<<endl;
    }

}

bool isPalindrome(string str){

    return isStringPalindrome(str, 0, str.length() - 1);
}//end of function

bool isStringPalindrome(string str, int first, int last)
{
    bool status= false;
    if (last - first == 0){

         status=true;
        return status;
    }//if

    else if (last - first == 1)
    {
        if (str[first] == str[last]){

            status=true;
            return statu

            return true;
        }//if

        else{
            return status;
        }//else

    }//else
    else if (str[first] != str[last]){
        return status;
    }//else if

    else{
        return isStringPalindrome(str, first + 1, last - 1);
    }//else


}//end of function