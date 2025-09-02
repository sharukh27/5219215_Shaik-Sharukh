#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

/*
 * Complete the 'isValid' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

/*
 * To return the string from the function, you should either do static allocation or dynamic allocation
 *
 * For example,
 * char* return_string_using_static_allocation() {
 *     static char s[] = "static allocation of string";
 *
 *     return s;
 * }
 *
 * char* return_string_using_dynamic_allocation() {
 *     char* s = malloc(100 * sizeof(char));
 *
 *     s = "dynamic allocation of string";
 *
 *     return s;
 * }
 *
 */
char* isValid(char* s) {

    static char yes[] = "YES";
    static char no[] = "NO";

    int freq[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
    }

    int counts[100000] = {0};
    int maxFreq = 0;

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            counts[freq[i]]++;
            if (freq[i] > maxFreq) {
                maxFreq = freq[i];
            }
        }
    }

    int diffFreq = 0;
    int firstFreq = 0;

    for (int i = 1; i <= maxFreq; i++) {
        if (counts[i] > 0) {
            diffFreq++;
            if (firstFreq == 0) {
                firstFreq = i;
            }
        }
    }

    if (diffFreq == 1) {
        return yes;
    }

    if (diffFreq == 2) {
        int f1 = 0, f2 = 0, c1 = 0, c2 = 0;

        for (int i = 1; i <= maxFreq; i++) {
            if (counts[i] > 0) {
                if (f1 == 0) {
                    f1 = i;
                    c1 = counts[i];
                } else {
                    f2 = i;
                    c2 = counts[i];
                }
            }
        }

        if ((f1 == 1 && c1 == 1) || (f2 == 1 && c2 == 1)) {
            return yes;
        }

        if ((abs(f1 - f2) == 1) && ((c1 == 1) || (c2 == 1))) {
            return yes;
        }
    }

    return no;
}


int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* s = readline();

    char* result = isValid(s);

    fprintf(fptr, "%s\n", result);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}
