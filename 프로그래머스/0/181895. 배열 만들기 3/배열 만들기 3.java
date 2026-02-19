import java.util.Arrays;

class Solution {
    public int[] solution(int[] arr, int[][] intervals) {
        int[] part1 = Arrays.copyOfRange(arr, intervals[0][0], intervals[0][1] + 1);
        int[] part2 = Arrays.copyOfRange(arr, intervals[1][0], intervals[1][1] + 1);
        
        int[] answer = new int[part1.length + part2.length];
        
        System.arraycopy(part1, 0, answer, 0, part1.length);
        System.arraycopy(part2, 0, answer, part1.length, part2.length);
        
        return answer;
    }
}

// Arrays.copyOfRange(원본, 시작, 끝)
//     시작은 *포함*이고, 끝은 *불포함*
    
// System.arraycopy(원본, 원본 시작위치, 대상, 대상 시작위치, 복사할 길이)