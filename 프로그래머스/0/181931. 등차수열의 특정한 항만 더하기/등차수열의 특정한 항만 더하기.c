#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// included_len은 배열 included의 길이입니다.
int solution(int a, int d, bool included[], size_t included_len) {
    // 합계를 저장할 변수 answer를 0으로 초기화
    int answer = 0;
    // i는 0부터 시작, included 배열 길이까지, i는 1씩 증가하며 반복
    for (size_t i = 0; i < included_len; i++) {
        // included[i]가 true인 경우
        if (included[i] == true) {
            // 현재 항의 값을 계산
            int current_term = a + (i * d);
            // 계산된 항의 값을 answer에 누적해서 더함
            answer += current_term;
        }
    }
    // 최종적으로 합산된 결과 반환
    return answer;
}