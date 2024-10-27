class Node:
    def __init__(self, data, next=None):
        self.data = data
        self.next = next

class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def append(self, value):
        new_node = Node(data=value, next=None)
        if self.head == None:
            self.head = new_node
            self.tail = new_node
        else:
            self.tail.next = new_node
            self.tail = new_node
        
        print("Appended!")        
    
    def traverse(self):
        current = self.head
        while current is not None:
            print(current.data)
            current = current.next

    def list_length(self):
        length = 0
        current = self.head
        while current is not None:
            length += 1
            current = current.next
        print("List length is", length)

linked_list = LinkedList()
linked_list.append(1)
linked_list.append(2)
linked_list.append(3)
linked_list.traverse()
linked_list.list_length()