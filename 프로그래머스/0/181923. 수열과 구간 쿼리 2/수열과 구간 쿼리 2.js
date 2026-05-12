function solution(arr, queries) {
    const answer = [];
    
    for (let i = 0; i < queries.length; i++) {
        const [s, e, k] = queries[i];
        
        let minVal = Infinity;
        
        for (let j = s; j <= e; j++) {
            if (arr[j] > k && arr[j] < minVal) {
                minVal = arr[j];
            }
        }
        answer.push(minVal === Infinity ? -1 : minVal);
    }
    return answer;
}