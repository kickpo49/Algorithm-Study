# def solution(num_list):
#     # 리스트를 오름차순으로 정렬
#     sorted_list = sorted(num_list)
    
#     # 가장 작은 5개를 제외한 나머지 반환
#     return sorted_list[5:]


def solution(num_list):
    # 1. 먼저 정렬
    sorted_list = sorted(num_list)
    
    # 2. 가장 작은 5개를 제외한 리스트 만들기
    result = []
    for i in range(len(sorted_list)):
        if i >= 5:  # 인덱스 5 이상인 요소만 추가
            result.append(sorted_list[i])
    
    return result