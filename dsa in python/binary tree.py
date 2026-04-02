class Node:
    def __init__(self,val):
        self.val=val
        self.right=None
        self.left=None
drinks=Node('Tea')
fruit=Node('Banana')
veg=Node('aloo')
Non_veg=Node('Meat')
drinks.left=fruit
drinks.right=veg
veg.right=Non_veg
print(drinks.right.right.val)