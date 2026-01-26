class Solution {
    public int solution(int[] arr1, int[] arr2) {
        // 배열의 길이 비교
        if (arr1.length != arr2.length) {
            return Integer.compare(arr1.length, arr2.length);
        }
        // 길이가 같을 경우 원소의 합 비교
        int sum1 = 0;
        int sum2 = 0;
        
        for (int num : arr1) sum1 += num;
        for (int num : arr2) sum2 += num;
        
        return Integer.compare(sum1, sum2);
        
    }
}

// Integer.compare(a, b):

// a > b 이면 1

// a < b 이면 -1

// a == b 이면 0을 반환