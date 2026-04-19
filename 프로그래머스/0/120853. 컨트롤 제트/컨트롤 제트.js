function solution(s) {
    // 최종 합계를 저장할 변수
    let answer = 0;
    
    let lastNumber = 0;
    // 문자열 s를 공백(" ") 기준으로 나누어 배열로 만듬
    const arr = s.split(" ");
    
    for (let i = 0; i < arr.length; i++) {
        // 현재  값이 "Z"인 경우
        if (arr[i] === "Z") {
            answer -= lastNumber;
        } else {
            // 현재 값이 숫자 문자열이므로 숫자형으로 변환
            const num = Number(arr[i]);
            
            answer += num;
            
            lastNumber = num;
        }
    }
    return answer;
}