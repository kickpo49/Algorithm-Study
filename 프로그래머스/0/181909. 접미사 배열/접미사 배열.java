import java.util.Arrays;

class Solution {
    public String[] solution(String my_string) {
        // answer 배열 길이 생성
        String[] answer = new String[my_string.length()];
        
        // 모든 접미사 추출하여 배열에 저장
        for (int i = 0; i < my_string.length(); i++) {
            answer[i] = my_string.substring(i);
        }
        
        // 사전순으로 정렬 (오름차순)
        Arrays.sort(answer);
        
        return answer;
    }
}