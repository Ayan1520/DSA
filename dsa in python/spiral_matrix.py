nums = [[5,2,4],
        [1,2,3],
        [1,1,1],
        [2,3,4]]

minr, minc = 0, 0
maxr, maxc = len(nums), len(nums[0])
tl = 0
count = maxr * maxc

while tl < count:
    # Top row
    for i in range(minc, maxc):
        print(nums[minr][i], end=' ')
        tl += 1
    minr += 1

    # Rightmost column
    for i in range(minr, maxr):
        print(nums[i][maxc-1], end=' ')
        tl += 1
    maxc -= 1
    

    # Bottom row (right to left)
 
    if minr < maxr:
        for i in range(maxc-1, minc-1, -1):
            print(nums[maxr-1][i], end=' ')
            tl += 1
        maxr -= 1

    # Leftmost column (bottom to top)
    if minc < maxc:
        for i in range(maxr-1, minr-1, -1):
            print(nums[i][minc], end=' ')
            tl += 1
        minc += 1
