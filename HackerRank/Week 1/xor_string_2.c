#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


    char* strings_xor(char* s, char* t) {
    int n = strlen(s);
    char *res = malloc(n + 1);    
    for(int i = 0; i < n; i++) {
        if(s[i] == t[i])          
            res[i] = '0';
        else
            res[i] = '1';
    }
    res[n] = '\0';
    return res;                   
}

int main() {
    char s[1001], t[1001];
    scanf("%s", s);
    scanf("%s", t);
    printf("%s", strings_xor(s, t));
    return 0;
}
