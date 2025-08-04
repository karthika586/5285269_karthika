#include <stdio.h>
int main() {
    char s[11];
    int h;
    scanf("%s", s);  
    h = (s[0] - '0') * 10 + (s[1] - '0');  
    if (s[8] == 'A' && h == 12) h = 0;
    if (s[8] == 'P' && h != 12) h += 12;
    printf("%02d:%c%c:%c%c\n", h, s[3], s[4], s[6], s[7]);
    return 0;
}
