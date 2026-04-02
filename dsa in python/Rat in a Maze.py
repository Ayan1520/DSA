maze = [
    [1, 1,],
    [1, 0,],
]
n=len(maze)
visited=[[0]*n for _ in range(n)]
ans=[]
stack=[]

def rat_maze(r,c):
    if r<0 or r>=n or c<0 or c>=n or visited[r][c]==1 or maze[r][c]!=1:
        return
    if r==n-1 and c==n-1:
        ans.append(stack.copy())
        return
    visited[r][c]=1
    #down
    stack.append('D')
    rat_maze(r+1,c)
    stack.pop()
    #UP
    stack.append('U')
    rat_maze(r-1,c)
    stack.pop()
    #right
    stack.append('R')
    rat_maze(r,c+1)
    stack.pop()
    #Left
    stack.append('L')
    rat_maze(r,c-1)
    stack.pop()

    visited[r][c]=0
    return ans
print(rat_maze(0,0))