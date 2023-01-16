#include <stdio.h>
#include <string.h>
/* Create a C program to find the length of the longest substring of a given string without repeating
characters */
int main() {
	int MinRepeat = 0;
	char string[20];
	printf("Enter a string: ");
	scanf(" %s", string);
	printf("Length of the longest substring without repeating is: %d\n"+MinimalRepater(string));
	return 0;
}
int MinimalRepater(char* s) {
    int n = strlen(s);
    int i, j, max_len = 0;
    int visited[256];
    memset(visited, -1, sizeof(visited));
    for (i = 0, j = 0; j < n; j++) {
        if (visited[s[j]] >= i) {
            i = visited[s[j]] + 1;
        }
        visited[s[j]] = j;
        max_len = max(max_len, j - i + 1);
    }
    return max_len;
}