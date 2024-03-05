#include <stdio.h>
int main() {
    int t;
    char str[2];
    scanf("%d", &t);
    int i = 0, res;
    for (i ; i < t; i++){
        scanf("%s", str);
        if(str[1] > str[0])
            res = ((str[0] - 97)*25) + (str[1] - 97);
        else
            res = ((str[0] - 97)*25) + (str[1] - 97 + 1);
            
        printf("%d\n", res);
    }
}
