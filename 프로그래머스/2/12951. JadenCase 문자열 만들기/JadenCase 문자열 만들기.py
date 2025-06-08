def solution(s):
    answer = ''
    
    # split 분할
    # 첫문자가 숫자가 아니라면 -> 모두 대문자로 바꾸기 
    # 다시 합치기
    
    s = s.split(" ")
    
    for i in range(len(s)):
        s[i] = s[i].capitalize() 
            
    answer = ' '.join(s)
    
    return answer



# def solution(s):
#     return ' '.join([word.capitalize() for word in s.split(" ")])

# TIP
# word[0].upper()
# word[0].lower()

