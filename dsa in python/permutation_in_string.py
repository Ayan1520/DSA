s1 = "abc"
s2 = "eidcbaooo"
n=len(s1)
m=len(s2)
freq=[0]*26
for ch in s1:
    freq[ord(ch)-97]+=1
for i in range(0,m):
    window_freq=[0]*26
    slide_idx=0
    idx=i
    while slide_idx<n and idx<m:
        window_freq[ord(s2[idx])-97]+=1
        idx+=1
        slide_idx+=1
    print(window_freq)
    if window_freq==freq:
        print(True)
        break

