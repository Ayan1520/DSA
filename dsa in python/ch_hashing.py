s='AyanNnjhgn'
q=['a','b','c','d','n']
hash_list=[0]*27
for ch in s:
    ascii_value=ord(ch)
    if ascii_value>96 and ascii_value<123:
        index=ascii_value-97
        hash_list[index]+=1
    else:
        index=ascii_value-65
        hash_list[index]+=1
for ch in q:
    ascii_value=ord(ch)
    if ascii_value>96 and ascii_value<123:
        index=ascii_value-97
    else:
        index=ascii_value-65
    print(f'{ch}:{hash_list[index]}')