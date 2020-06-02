def reverseInParentheses(s):
    end = s.find(")")
    start = s.rfind("(",0,end)
    if end == -1:
        return s
    return reverseInParentheses(s[:start] + s[start+1:end][::-1] + s[end+1:])
