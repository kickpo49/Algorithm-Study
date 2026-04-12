#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** solution(const char* myStr) {
    int len = strlen(myStr);

    // 결과 배열
    char** answer = (char**)malloc(sizeof(char*) * (len + 1));
    int count = 0;

    int start = 0;

    for (int i = 0; i <= len; i++) {
        // 구분자 or 문자열 끝
        if (i == len || myStr[i] == 'a' || myStr[i] == 'b' || myStr[i] == 'c') {

            int sub_len = i - start;

            // 빈 문자열 제외
            if (sub_len > 0) {
                char* temp = (char*)malloc(sub_len + 1);

                memcpy(temp, myStr + start, sub_len);
                temp[sub_len] = '\0';

                answer[count++] = temp;
            }

            start = i + 1;
        }
    }

    // 결과가 없는 경우
    if (count == 0) {
        answer[0] = (char*)malloc(6);
        strcpy(answer[0], "EMPTY");
        answer[1] = NULL;  // 끝 표시
        return answer;
    }

    // NULL로 끝 표시 (중요)
    answer[count] = NULL;

    return answer;
}