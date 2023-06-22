#include <stdio.h>

int VowelCheck(char c) {
    int isVowel = 0;
    
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            isVowel = 1;
            break;
        default:
            isVowel = 0;
    }
    
    return isVowel;
}

int main() {
    char letter;
    printf("Enter the letter to check it is vowel or not :");
    scanf("%c",&letter);
    int result = VowelCheck(letter);
    
    if (result == 1) {
        printf("The letter is Vowel\n");
    } else {
        printf("The letter is Not Vowel\n");
    }
    
    return 0;
}
