#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>  // isdigit 함수 사용하기 위함

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string) {
    int answer = 0;
    int current_number = 0; // 현재 읽고 있는 연속된 숫자 저장
    
    // 문자열의 끝('\0')까지 반복
    for (int i = 0; my_string[i] != '\0'; i++) {
        if (isdigit(my_string[i])) {
            // my_string[i]가 문자 '1'일 때, - '0'을 하지 않고 그냥 더해버리면
            // 컴퓨터는 정수 49를 더하게 된다.
            // 문자 (char) '0'은 ASCII 코드값 48(int)이다.
            // 우리가 원하는 결과인 1을 얻으려면 이 문자값에서 기준점인 '0'(48)의 값을 빼야 함
            current_number = current_number * 10 + (my_string[i] - '0');
        } else {
            answer += current_number;
            current_number = 0;
        }
    }
    // 문자열이 숫자로 끝나는 경우 마지막 숫자를 더함
    answer += current_number;
    
    return answer;
}