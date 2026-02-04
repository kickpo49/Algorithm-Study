class Solution {
    public String[] solution(String my_string) {
        // 1. 문자열 앞뒤의 공백을 제거합니다 (trim)
        // 2. 하나 이상의 공백("\\s+")을 기준으로 문자열을 나눕니다 (split)
        String[] answer = my_string.trim().split("\\s+");
        return answer;
    }
}

// \\s: 공백 문자(스페이스, 탭, 줄바꿈 등)를 의미

// +: 앞의 패턴이 하나 이상 반복됨을 의미

// .trim(): 문자열 앞뒤에 붙은 불필요한 공백을 미리 제거