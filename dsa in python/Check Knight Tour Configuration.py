grid = [[0,11,16,5,20],[17,4,19,10,15],[12,1,8,21,6],[3,18,23,14,9],[24,13,2,7,22]]
n=len(grid[0])
def knight_tour(grid,r,c,expval):
    if r<0 or r>=n or c<0 or c>=n or grid[r][c]!=expval:
        return False
    if expval==(n**2)-1:
        return True
    a=knight_tour(grid,r+1,c+2,expval+1)
    b=knight_tour(grid,r+2,c+1,expval+1)
    c1=knight_tour(grid,r+2,c-1,expval+1)
    d=knight_tour(grid,r+1,c-2,expval+1)
    e=knight_tour(grid,r-1,c-2,expval+1)
    f=knight_tour(grid,r-2,c-1,expval+1)
    g=knight_tour(grid,r-2,c+1,expval+1)
    h=knight_tour(grid,r-1,c+2,expval+1)
    return a or b or c1 or d or e or f or g or h 
print(knight_tour(grid,0,0,0))