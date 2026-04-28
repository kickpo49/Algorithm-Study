function solution(my_string) {
    // 길이 52 배열 생성 및 0으로 초기화
    const answer = new Array(52).fill(0);
    
    for (let i = 0; i < my_string.length; i++) {
        const char = my_string.charCodeAt(i);
        // 대문자 (A: 65 ~ Z: 90)
        if (char >= 65 && char <= 90) {
            answer[char - 65]++;
        }
        // 소문자 (a: 97 ~ z: 122)
        else if (char >= 97 && char <= 122) {
            // 대문자 영역 26칸 뒤에 배치
            answer[char - 97 + 26]++;
        }
    }
    return answer;
}