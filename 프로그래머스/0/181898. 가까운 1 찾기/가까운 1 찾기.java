// 문제 잘못 출제함. "idx보다 크면서"라는 조건이 있음. 따라서 i > idx 보다 큰 경우를 if문에 넣는 것이 맞음.

// class Solution {
//     public int solution(int[] arr, int idx) {
 
//         for (int i = idx; i < arr.length; i++) {
//             if (i > idx && arr[i] == 1) {
//                 return i;
//             }
//         }
//         return -1;
//     }
// }

// 아래 코드는 idx보다 같거나 클 때 배열의 값이 1인 가장 작은 인덱스를 찾는 함수.
class Solution {
    public int solution(int[] arr, int idx) {
        // idx부터 배열의 끝까지 순회합니다.
        for (int i = idx; i < arr.length; i++) {
            // 해당 위치의 원소가 1이면 바로 그 인덱스를 반환합니다.
            if (arr[i] == 1) {
                return i;
            }
        }
        // 반복문을 다 돌 때까지 1을 못 찾으면 -1을 반환합니다.
        return -1;
    }
}