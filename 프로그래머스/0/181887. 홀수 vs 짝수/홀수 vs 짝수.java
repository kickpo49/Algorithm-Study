class Solution {
    public int solution(int[] num_list) {
        int oddAnswer = 0;
        int evenAnswer = 0;
        for (int i = 0; i < num_list.length; i++) {
            if (i % 2 == 0) {
                oddAnswer += num_list[i];
            }
            else {
                evenAnswer += num_list[i];
            }
        }
        return Math.max(oddAnswer, evenAnswer);
    }
}

// import java.util.stream.IntStream;

// class Solution {
//     public int solution(int[] num_list) {
//         int oddSum = IntStream.range(0, num_list.length).filter(i -> i % 2 == 0).map(i -> num_list[i]).sum();
//         int evenSum = IntStream.range(0, num_list.length).filter(i -> i % 2 != 0).map(i -> num_list[i]).sum();
        
//         return Math.max(oddSum, evenSum);
//     }
// }