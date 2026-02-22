import java.util.ArrayList;  
// ArrayList를 사용하기 위해 import. 
// ArrayList는 크기가 자동으로 늘어나는 배열이라고 생각하면 돼요.

class Solution {
    public String[] solution(String[] todo_list, boolean[] finished) {
        // String[] todo_list : 해야 할 일 목록 (문자열 배열)
        // boolean[] finished : 각 일의 완료 여부 (true = 완료, false = 미완료)
        // 반환 타입이 String[] 이므로 최종적으로 문자열 배열을 return 해야 해요.

        ArrayList<String> list = new ArrayList<>();
        // 아직 마치지 못한 일들을 임시로 담을 ArrayList 생성
        // 일반 배열(String[])은 크기를 미리 정해야 해서,
        // 미완료 항목이 몇 개인지 모르는 상황에서는 ArrayList가 편해요.

        for (int i = 0; i < finished.length; i++) {
            // finished 배열의 길이만큼 반복
            // i는 todo_list와 finished 배열의 인덱스(위치)를 의미해요.
            // todo_list[i]와 finished[i]는 같은 인덱스로 연결되어 있어요.
            // ex) todo_list[0] = "빨래", finished[0] = true (빨래는 완료)
            //     todo_list[1] = "설거지", finished[1] = false (설거지는 미완료)

            if (!finished[i]) {
                // finished[i]가 false일 때, 즉 아직 마치지 못한 일일 때
                list.add(todo_list[i]);
                // 해당 일(todo_list[i])을 list에 추가
            }
        }

        return list.toArray(new String[0]);
        // ArrayList를 String 배열로 변환해서 return
        // toArray(new String[0]) : ArrayList<String>을 String[] 타입으로 바꿔주는 메서드
        // new String[0]은 "String 배열로 변환해줘" 라고 알려주는 역할이에요.
    }
}
