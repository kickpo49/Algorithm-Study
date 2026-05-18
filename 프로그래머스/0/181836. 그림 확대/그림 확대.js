function solution(picture, k) {
    var answer = [];
    
    picture.forEach(row => {
        // 현재 행의 각 문자를 k배만큼 반복하여 가로로 늘린다
        // [...row]를 통해 문자열을 배열로 쪼개고 각 문자를 repeat(k)한 뒤 다시 합친다
        const scaledRow = [...row].map(char => char.repeat(k)).join('');
        
        // 가로로 늘어난 행을 k번 반복해서 결과 배열에 추가
        for (let i = 0; i < k; i++) {
            answer.push(scaledRow);
        }
    });
    return answer;
}