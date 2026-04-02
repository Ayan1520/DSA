#level order traversal
class Node:
    def __init__(self,val):
        self.val=val
        self.left=None
        self.right=None
node1=Node(5)
node2=Node(3)
node3=Node(2)
node4=Node(7)
node5=Node(4)
node6=Node(8)
node7=Node(1)
node8=Node(6)
node9=Node(10)
node1.left=node2
node2.left=node3
node2.right=node4
node1.right=node5
node5.left=node6
node6.left=node7
node6.right=node8
node5.right=node9

def bfs(node):
    queue=[]
    queue.append(node)
    while len(queue)!=0:
        e=queue.pop(0)
        print(f'{e.val} -> ',end='')
        if e.left:
            queue.append(e.left)
        if e.right:
            queue.append(e.right)
bfs(node1)
