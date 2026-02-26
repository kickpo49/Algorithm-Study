class Solution {
    public String solution(String myString) {
        // 모든 문자를 소문자로 변환
        String answer = myString.toLowerCase();
        // 소문자 'a'만 찾아서 대문자 'A'로 교체
        answer = answer.replace('a', 'A');
        
        return answer;
    }
}