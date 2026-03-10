#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 1. 숫자 한 자리씩 분리
// 2. 반복 확인 - while문
// 3. 조건문 - if문 3, 6, 9인 경우 count + 1

int solution(int order) {
    int answer = 0;
    
    // 숫자가 0 보다 큰 경우 계속 반복
    while (order > 0) {
        // 현재 숫자의 일의 자리 가져오기
        int current = order % 10;
        // 숫자 3, 6, 9 중 하나인지 확인
        if (current == 3 || current == 6 || current == 9) {
            answer++;   // count + 1 추가
        }
        // 확인한 일의 자리 버리기
        order = order / 10;
    }
    
    return answer;
}