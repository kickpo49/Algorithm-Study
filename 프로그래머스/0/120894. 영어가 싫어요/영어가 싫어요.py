def solution(numbers):
    # 인덱스 번호가 해당 영단어의 숫자가 되도록 배치
    number_list = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
    for index, word in enumerate(number_list):
        numbers = numbers.replace(word, str(index))
    return int(numbers)