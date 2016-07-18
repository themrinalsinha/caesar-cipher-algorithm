/*
* Author : Mrinal Sinha
* Program : Caesar Cipher (Shift Cipher) Decryption algorithm.
*/

#include <iostream>
#include <string.h>
using namespace std;

main(void)
{
    char str[100], cipher_str[100];
    int key,enc;
    cout << "\n\nEnter String to Decrypt : "; cin >> str;
    cout << "Enter the cipher key : "; cin >> key;

    for(int i = 0; i < strlen(str); i++)
    {
        str[i] = tolower(str[i]);
        cipher_str[i] = str[i] - key;
        if(cipher_str[i] < 97) cipher_str[i] += 26;
    }
    cout << "Enctypted String is : " << cipher_str << "\n\n";
}
