class Solution {
    public int[] solution(int[] arr, int n) {
         // arr의 길이가 홀수
        if (arr.length % 2 != 0) {
            // arr의 모든 짝수 인덱스 위치에 n을 더함
            for (int i = 0; i < arr.length; i += 2) {
                arr[i] += n;
            }
        } 
         // arr의 길이가 짝수
        else {
            // arr의 모든 홀수 인덱스 위치에 n을 더함
            for (int i = 1; i < arr.length; i += 2) {
                arr[i] += n;
            }
        }

        return arr;
    }
}

// class Solution {
//     public int[] solution(int[] arr, int n) {
//         // 1. 배열의 길이를 파악합니다.
//         int length = arr.length;

//         // 2. 배열의 길이가 홀수일 때
//         if (length % 2 != 0) {
//             // 짝수 인덱스(0, 2, 4...)에 n을 더합니다.
//             for (int i = 0; i < length; i += 2) {
//                 arr[i] += n;
//             }
//         } 
//         // 3. 배열의 길이가 짝수일 때
//         else {
//             // 홀수 인덱스(1, 3, 5...)에 n을 더합니다.
//             for (int i = 1; i < length; i += 2) {
//                 arr[i] += n;
//             }
//         }

//         return arr;
//     }
// }