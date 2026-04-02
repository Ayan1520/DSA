char_map={
    '1':'00',
    '2':'abc',
    '3':'def',
    '4':'ghi',
    '5':'jkl',
    '6':'mno',
    '7':'pqrs',
    '8':'tuv',
    '9':'wxyz'
}
digit='874742'
result=[]
def solve(ind,subset):
    if ind >= len(digit):
        result.append(''.join(subset))
        return
    for ch in char_map[digit[ind]]:
        subset.append(ch)
        solve(ind+1,subset)
        subset.pop()
    return result
print(solve(0,[]))