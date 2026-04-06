#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int i, int j, int k) {
    int answer = 0;
    
    for (int num = i; num <= j; num++) {
        int temp = num; //원본 값을 유지하기 위해 복사본 사용
        
        while (temp > 0) {
            // 일의 자릿수를 추출하여 k와 같은지 비교
            if (temp % 10 == k) {
                answer++;
            }
            // 검사한 일의 자릿수 제거
            temp /= 10;
        }
        
        // 특별 케이스: k가 0인데 num 자체가 0인 경우 처리
        if (num == 0 && k == 0) {
            answer++;
        }
    }
    return answer;
}