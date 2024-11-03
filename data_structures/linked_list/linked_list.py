class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None

class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None
        self.length = 0

    """
    Inserting operations
    """

    # Inserting a node at the start of the list
    def insertAtStart(self, data):
        new_node = Node(data=data)

        # if list is empty
        if self.head == None:
            self.head = new_node
            self.tail = new_node

        # if list is not empty
        else:
            new_node.next = self.head
            self.head.prev = new_node
            self.head = new_node

        self.length += 1


    # Inserting at the end of the list
    def InsertAtEnd(self, data):
        new_node = Node(data=data)

        # if list is empty
        if self.head == None:
            self.head = new_node
            self.tail = new_node
        
        # if list is not empty
        else:
            new_node.prev = self.tail
            self.tail.next = new_node
            self.tail = new_node

    # Inserting at specific position
    def InsertAtPosition(self, data, position):

        pass
        


    def traverse(self):
        current = self.head
        while current is not None:
            print(current.data)
            current = current.next


l = LinkedList()
l.insertAtStart(1)
l.insertAtStart(2)
l.InsertAtEnd(4)
l.InsertAtPosition(10,2)
l.traverse()