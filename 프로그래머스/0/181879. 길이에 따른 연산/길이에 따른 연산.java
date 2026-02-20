class Solution {
    public int solution(int[] num_list) {
        int sum = 0;
        int multiply = 1;
        
        if (num_list.length >= 11) {
            for (int i = 0; i < num_list.length; i++) {
                sum += num_list[i];
            }   return sum;
        }
        else {
            for (int i = 0; i < num_list.length; i++) {
                multiply *= num_list[i];
            }   return multiply;
        }
    }
}


// class Solution {
//     public int solution(int[] num_list) {
//         if (num_list.length >= 11) {
//             int sum = 0;
//             // num_list에서 값을 하나씩 꺼내 num에 담기
//             for (int num : num_list) { 
//                 sum += num;
//             }
//             return sum;
//         } else {
//             int multiply = 1;
//             for (int num : num_list) {
//                 multiply *= num;
//             }
//             return multiply;
//         }
//     }
// }

// import java.util.Arrays;

// class Solution {
//     public int solution(int[] num_list) {
//         if (num_list.length >= 11) {
//             // 배열을 스트림으로 바꿔서 모든 요소의 합을 구함
//             return Arrays.stream(num_list).sum();
//         } else {
//             // 초기값 1부터 시작해서 모든 요소를 누적해서 곱함
//             return Arrays.stream(num_list).reduce(1, (a, b) -> a * b);
//         }
//     }
// }

// reduce는 단어 뜻 그대로, 배열 안에 있는 여러 개의 요소들을 단 하나의 결과값으로 '줄여나가는(reduce)' 역할을 하는 함수입니다.

// reduce(1, (a, b) -> a * b)는 크게 두 가지 재료를 받아서 작동합니다.

// 1. 첫 번째 재료: 1 (초기값)
// 앞서 우리가 for 문을 작성할 때 int multiply = 1;이라고 선언했던 것과 완벽하게 똑같은 역할입니다. 곱셈을 시작할 맨 처음 바탕이 되는 값입니다.

// 2. 두 번째 재료: (a, b) -> a * b (계산 규칙)
// 이 화살표 문법을 자바에서는 **'람다식(Lambda expression)'**이라고 부릅니다. 복잡한 기호 같지만, 해석하면 아주 단순합니다. **"a와 b라는 두 숫자가 주어지면, a와 b를 곱해라"**라는 뜻입니다.

// 여기서 a와 b가 의미하는 바는 다음과 같습니다.

// a (누적값): 맨 처음에는 '초기값'을 가지고 시작하고, 그다음부터는 지금까지 계산이 완료된 결과값을 담습니다.

// b (현재값): 배열(num_list)에서 방금 새로 꺼낸 다음 숫자를 담습니다.