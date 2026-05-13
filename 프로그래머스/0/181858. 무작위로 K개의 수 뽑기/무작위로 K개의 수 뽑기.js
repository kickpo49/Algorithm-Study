function solution(arr, k) {
    // Set은 중복된 값을 허용하지 않는 특징이 있음
    const uniqueElements = new Set();
    // 결과를 담을 배열
    const result = [];
    
    // 원본 배열 순회
    for (const num of arr) {
        // 현재 숫자가 이전에 나온 적이 없는지 확인
        if (!uniqueElements.has(num)) {
            uniqueElements.add(num);
            result.push(num);
        }
        // 결과 배열의 길이가 이미 k에 도달 시 순회 중지
        if (result.length === k) break;
    }
    // 반복문이 끝나고 배열의 길이가 k보다 작으면 남은 공간 -1로 채우기
    while (result.length < k) {
        result.push(-1);
    }
    
    return result;
}