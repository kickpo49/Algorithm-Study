def solution(arr):
    # 현재 배열의 행의 개수와 열의 개수를 구한다
    row_count = len(arr)
    col_count = len(arr[0])
    
    # Case1: 행의 수가 열의 수보다 많은 경우
    if row_count > col_count:
        diff = row_count - col_count
        
        for row in arr:
            row.extend([0] * diff)
            
    # Case2: 열의 수가 행의 수보다 많은 경우
    elif col_count > row_count:
        diff = col_count - row_count
        for _ in range(diff):
            arr.append([0] * col_count)
    
    return arr