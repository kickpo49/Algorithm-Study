function solution(arr, queries) {
    // 각 쿼리를 순회합니다.
    for (let [s, e, k] of queries) {
        // s부터 e까지의 인덱스 i에 대해 검사합니다.
        for (let i = s; i <= e; i++) {
            // 인덱스 i가 k의 배수인 경우 (즉, i를 k로 나눈 나머지가 0인 경우)
            if (i % k === 0) {
                arr[i] += 1; // 해당 인덱스의 배열 값을 1 증가시킵니다.
            }
        }
    }
    
    // 모든 쿼리를 처리한 후의 배열을 반환합니다.
    return arr;
}