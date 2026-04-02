from collections import deque
class stacking_quene:
    def __init__(self):
        self.queue=deque()
    def push(self,item):
        self.queue.append(item)
        for _ in range(len(self.queue)-1):
            self.queue.append(self.queue.popleft())
    def pop(self):
        if len(self.queue)==0:
            return 'queue is empty'
        return self.queue.popleft()
    def peak(self):
        if len(self.queue)==0:
            return 'queue is empty'
        return(self.queue[0])
    def size(self):
        return len(self.queue)
