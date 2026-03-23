#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// intStrs_len은 배열 intStrs의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* intStrs[], size_t intStrs_len, int k, int s, int l) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * intStrs_len);
    int count = 0;  // k보다 큰 값이 몇 개인지 셀 변수 (결과 배열의 인덱스)
    
    // 임시 부분 문자열 저장할 공간 생성
    // 길이 l이고, 마지막에 널 문자 포함해야 함으로 l + 1 크기 지정
    char* sub = (char*)malloc(sizeof(char) * (l + 1));
    
    for (size_t i = 0; i < intStrs_len; i++) {
        // strncpy(dest, src, n): src 주소부터 n개의 문자를 dest로 복사합니다.
        // 여기서는 각 문자열의 s번째 위치(intStrs[i] + s)부터 l개만큼 가져옵니다.
        strncpy(sub, intStrs[i] + s, l);
        
        sub[l] = '\0';
        
        // 잘라낸 문자열을 정수로 변환
        // atoi함수 : ASCII to Integer의 줄임말
        int num = atoi(sub);
        
        // 변환한 값이 k보다 크다면 결과 배열에 저장
        if (num > k) {
            answer[count] = num;
            count++;
        }
    }
    // 메모리 낭비를 줄이기 위해 실제 담긴 개수(count)만큼 배열 크기를 재조정
    answer = (int*)realloc(answer, sizeof(int) * count);
    // 사용이 끝난 임시 문자열 메모리 해제
    free(sub);
    
    return answer;
}