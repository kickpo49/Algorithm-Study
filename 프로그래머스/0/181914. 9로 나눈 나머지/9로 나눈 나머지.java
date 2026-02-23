class Solution {
    public int solution(String number) {
        int answer = 0;
        for (int i = 0; i < number.length(); i++) {
            answer += number.charAt(i) - '0';
        }
        return answer % 9;
    }
}

// 자바에서 문자열(String)의 길이를 알고 싶을 때는 number.length() 처럼 소괄호 ()가 붙은 메서드를 사용
// 문자열 (String): length() (예: number.length()) - 소괄호가 있음
// 배열 (Array): length (예: arr.length) - 소괄호가 없음
// 컬렉션 (List, Set 등): size() (예: list.size())

// number.charAt(i) - '0' 의 작동 원리 (아스키코드)
// 컴퓨터는 '1', '2' 같은 문자를 저장할 때, 그 모양 그대로 저장하지 않고 '아스키코드(ASCII)'라는 고유한 번호(정수) 로 바꿔서 기억
// 숫자 문자 '0'의 아스키코드 값은 48
// 숫자 문자 '9'의 아스키코드 값은 57
// 산술 연산자(-)를 사용하여 문자 '0'을 빼주면, 자바는 이 문자들을 자동으로 아스키코드 정수값으로 변환하여 계산