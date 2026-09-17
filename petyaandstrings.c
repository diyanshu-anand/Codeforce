#include <stdio.h>

int main (void) {
    char string_one[102];
    char string_two[102];

    fgets(string_one, 102, stdin);
    fgets(string_two, 102, stdin);

    char *str_ptr = string_one;
    int str_one_len = 0;
    int str_two_len = 0;

    while (*str_ptr != '\0')
    {
        str_one_len++;
        str_ptr++;
    }
    
    str_ptr = string_two;

    while (*str_ptr != '\0')
    {
        str_two_len++;
        str_ptr++;
    }

    str_one_len--;
    str_two_len--;

    if (str_one_len != str_two_len) {
        return -1;
    }

    char alphaBet[26] = "abcdefghijklmnopqrstuvwxyz";
    char capitalalphaBet[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (size_t i = 0; i < str_one_len; i++)
    {
        if (string_one[i] != string_two[i]) {
            // CHECK IF CAPITAL MISMATCH
            
            int x = 0;
            int y = 0;

            for (size_t j = 0; j < 26; j++)
            {
                if (alphaBet[j] == string_one[i] || capitalalphaBet[j] == string_one[i]) {
                    x = j;
                }
                if (alphaBet[j] == string_two[i] || capitalalphaBet[j] == string_two[i]) {
                    y = j;
                }

            }
            
            if (x != y) {
                // MISMATCH CONFIRM
                if (x > y) {
                    printf("%d", 1);
                    return 0;
                }
                else{
                    printf("%d", -1);
                    return 0;
                }
            }
            
            
        }
        
    }
    
    printf("%d", 0);

    return 0;
}