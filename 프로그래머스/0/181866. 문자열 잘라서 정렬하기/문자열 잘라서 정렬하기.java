// 1. 문자열 자르기 - split
// 2. 빈 문자열 제외하기 - filter
// 3. 사전순 정렬 - sort

import java.util.*;

class Solution {
    public String[] solution(String myString) {
        // "x"를 기준으로 나누기
        String[] splitArray = myString.split("x");
        
        // 빈 문자열 제외하고 리스트에 담기
        List<String> resultList = new ArrayList<>();
        for (String s : splitArray) {
            if (!s.isEmpty()) {
                resultList.add(s);
            }
        }
        // 사전순 정렬
        Collections.sort(resultList);
        // String 배열로 변환 후 반환
        return resultList.toArray(new String[0]);
    }
}