//
//  main.cpp
//  Morse
//
//  Created by Kato Tsunami on 5/7/16.
//  Copyright (c) 2016 Tsend Ayush Batbileg. All rights reserved.
//
/*  This program will receive a input from the user in english and convert it to morse code
 i will be using a parallel array to for the english charactesr adn the morse equivalence
 from the main function, the user string will be passed into a fuction that will convert the string to a morse code string
 */
#include <string>
#include <iostream>
using namespace std;

void toMorse(char);

int main()
{
    string user;
    cout << "To exit, press spacebar" << endl;
    while(user != " ")
    {
    cout << "English: ";
    getline(cin, user);
    cout << "Morse: ";
    for(int i = 0; i < user.length(); i++)
    {
        //input ensure the alphabet is in upper case
        //passing in the char at index i of the string
        toMorse(toupper(user[i]));
    }
    }
    
    return 0;
}
//receive a single char at a time and compare it with a char array bank
void toMorse(char c)
{
    char english[] = {' ',',','.','?','0','1','2','3','4','5','6','7','8','9','A','B', 'C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    string morse[] = { " ","--..--" ,".-.-.-" ,"..--..","-----",".----","..---","...--","....-",".....", "-....","--...","---..","----.",".-","-...","-.-.","-..", ".","..-.","--.", "....","..",".---","-.-",".-..", "--", "-.","---",".--.","--.-", ".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    string morseStr = "";
    //This is the simplest solution that i found
    //i wrote another version that used linear search to find the index eqivalence but this is the same thing.
    for(int i = 0; i < 41; i++)
    {
        //if char c matches a slot in english
        if(c == english[i])
            morseStr += morse[i];
    }
    cout <<  morseStr;
}