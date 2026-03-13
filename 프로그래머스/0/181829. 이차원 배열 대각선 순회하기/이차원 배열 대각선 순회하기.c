#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


// board_rows는 2차원 배열 board의 행 길이, board_cols는 2차원 배열 board의 열 길이입니다.
int solution(int** board, size_t board_rows, size_t board_cols, int k) {
    int answer = 0;
    
    // 1. 행을 기준으로 반복문 시작
    for (int i = 0; i < board_rows; i++) {
        // i 가 k 보다 크면 i + ? > k 이기 때문에 조건에 부합하지 않아 전체 종료
        if (i > k) break;
        // 2. 열을 기준으로 반복문을 진행
        for (int j = 0; j < board_cols; j++) {
            // 3. i + j <= k를 만족하는지 확인
            if (i + j <= k) {
                // 조건 만족 시 해당 위치의 원소 값을 answer에 더함
                answer += board[i][j];
            }
            else {
                // i + j > k인 상황이므로 해당 row의 나머지 칸을 확인하지 않아도 됨
                break;
            }
        
        }
    }
    return answer;
}