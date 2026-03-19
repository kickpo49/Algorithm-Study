#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(my_string);
    char* answer = (char*)malloc(len + 1);
    // 문자의 등장 여부를 체크할 배열 (ASCII 코드 256가지 대응)
    // 0으로 초기화하면 '아직 등장하지 않음'이라는 의미
    int dict[256] = {0, };
    int j = 0;  // answer 배열의 인덱스를 관리할 변수
    
    // 입력 문자열을 처음부터 끝까지 한 글자씩 확인
    for (int i = 0; i < len; i++) {
        unsigned char current_char = my_string[i];
        
        if (dict[current_char] == 0) {
            answer[j++] = current_char;     // 결과 배열에 추가 후 j 1 증가
            dict[current_char] = 1;         // 해당 문자가 등장했다고 표시
        }
    }
    // 문자열 끝을 알리는 NULL 문자 삽입
    answer[j] = '\0';
    
    return answer;
}