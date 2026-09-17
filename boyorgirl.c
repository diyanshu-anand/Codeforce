#include <stdio.h>

char username[102];

int main (void) {
    fgets(username, 102, stdin);

    int uniqueCount = 0;

    for(int x = 0; username[x] != '\n' && username[x] != '\0'; x++)
    {
        int isunique = 1;

        for (size_t i = 0; i < x; i++)
        {
            if (username[x] == username[i]) {
                isunique = 0;
                break;
            }
        }

        if (isunique == 1) uniqueCount++;

    }
    
    if (uniqueCount % 2 == 1) {
        printf("IGNORE HIM!");
    }
    else {
        printf("CHAT WITH HER!");
    }
    return 0;
}