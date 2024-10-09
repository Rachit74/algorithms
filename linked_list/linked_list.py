class Node:
    def __init__(self, data):
        self.data = data  # The value of the node
        self.next = None  # The pointer to the next node


class LinkedList:
    def __init__(self):
        self.head = None  # The head of the linked list

    # Method to add a node at the end of the linked list
    def append(self, data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node
            return
        last_node = self.head
        while last_node.next:
            last_node = last_node.next
        last_node.next = new_node

    # Method to print the linked list
    def print_list(self):
        cur_node = self.head
        while cur_node:
            print(cur_node.data, end=" -> ")
            cur_node = cur_node.next
        print("None")


ll = LinkedList()
ll.append(1)
ll.append(2)
ll.append(3)
ll.print_list()

# 1 -> 2 -> 3 -> None