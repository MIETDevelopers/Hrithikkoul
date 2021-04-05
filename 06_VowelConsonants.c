//Author name: Hrithik Koul
//Creation Date: 16-March-2021
//Purpose: Check whether the alphabet is vowel or consonent               
//The letters A, E, I, O and U are called vowels & the remaining ones are calles consonants.
#include <stdio.h>//Preprocessor directive to include input output function header fil
int main() {//Start of main function bod
    char c;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet: \n");
    scanf("%c", &c); //It will scan the alphabet entered by user.
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0; //return statement
}//End of the main function body
