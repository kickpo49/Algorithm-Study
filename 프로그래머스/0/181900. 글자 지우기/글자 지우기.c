#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// indices_len은 배열 indices의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int indices[], size_t indices_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int str_len = strlen(my_string);
    // 인덱스가 0부터 str_len - 1 까지 있으므로 해당 크기만큼 만듭니다.
    int* skip_map = (int*)calloc(str_len, sizeof(int));
    
    // indices에 들어있는 숫자들을 index로 사용하여 skip_map에 1을 표시
    for (int i = 0; i < indices_len; i++) {
        skip_map[indices[i]] = 1;
    }
    // 결과 문자열을 저장할 메모리 할당
    // 전체 길이 - 지울 개수 + 1 (문자열 끝을 알리는 NULL 문자 '\0' 필요)
    char* answer = (char*)malloc(sizeof(char) * (str_len - indices_len + 1));
    
    int j = 0;
    
    for (int i = 0; i < str_len; i++) {
        if (skip_map[i] == 0) {
            answer[j] = my_string[i]; // 결과 배열에 추가
            j++;
        }
    }
    // 문자열의 끝에 NULL 문자 삽입
    answer[j] = '\0';
    
    // 사용이 끝난 임시 체크 배열 메모리 해제
    free(skip_map);
        
    return answer;
}