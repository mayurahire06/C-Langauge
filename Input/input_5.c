#include<stdio.h>

void main(){
    char str[20];

    printf("Enter the string: ");
    scanf("%[^\n]", str);
    // scanf("%19[^\n]", str);  // Safe: Limits input to 19 characters
    // scanf("%[^abc]", str);  // Read until 'a', 'b', or 'c' is encountered
    // scanf("%[^0-9]", str);  // Exclude all digits (0-9)
    // scanf("%[^aeiouAEIOU]", str);  // Exclude all vowels
    // scanf("%[^xyz]", str);  // Exclude 'x', 'y', and 'z'
    // scanf("%[^ ]", str);  // Exclude whitespace (space character)
    // scanf("%[^ab\n]", str);  // Exclude 'a', 'b', and newline

    printf("%s", str);

}

