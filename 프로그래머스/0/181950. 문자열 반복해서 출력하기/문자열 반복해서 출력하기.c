#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    int n;  // 반복할 횟수를 저장할 변수
    // 문자열과 정수 입력
    scanf("%s %d", s1, &n);
    
    for (int i = 0; i < n; i++) {
        printf("%s", s1);
    }
    return 0;
}