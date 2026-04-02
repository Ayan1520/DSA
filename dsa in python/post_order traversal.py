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

#postorder : left-> right -> root
def postorder(node):
    if node==None:
        return
    postorder(node.left)
    postorder(node.right)
    print(f'{node.val} -> ',end='')
postorder(node1)