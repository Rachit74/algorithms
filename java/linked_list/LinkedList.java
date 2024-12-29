class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class LinkedList {
    // uninitilized head node for refrence, this creates a refrence that can point to a node object but does not create an actual node
    Node head;

    // insert at start
    public void insertAtBeginning(int data) {
        Node newNode = new Node(data);
        newNode.next = head;
        head = newNode;
    }

    // insert at end
    public void insertAtEnd(int data) {
        Node newNode = new Node(data);
        // check if list is empty
        if (head == null) {
            head = newNode;
        } else {
            // if list is not empty, then traverse the list and set last_node.next -> new_node
            Node temp = head;
            while (temp.next != null) {
                temp = temp.next;
            }
            temp.next = newNode;
        }
    }

    // insertInMiddle
    /*
     -> determine position to insert new node at
     -> check if the position is in the range
     -> if position is 0 or n then call requried of the two functions
     -> go to position-1 node, set newNode.next = temp.next, and then temp.next=newNode
     */
    public void insertInMiddle(int data, int position) {
        int n = size();
        if (position < 0 || position > n) {
            System.err.println("Position out of range");
        } if (position == n) {
            insertAtEnd(data);
        } if (position == 0) {
            insertAtBeginning(data);
        } else {
            // creating new Node
            Node newNode = new Node(data);
            // handle inserting in middle
            Node temp = head;
            for (int i = 0; i < position - 1; i ++ ) {
                temp = temp.next;
            }
            newNode.next = temp.next;
            temp.next = newNode;
        }
    }

    // traverse the list
    public void traverse(){
        // check if list is empty
        if (head == null) {
            System.err.println("List is empty!");
        } else {
            Node temp = head;
            while (temp.next != null) {
                System.out.print(temp.data + "\n");
                temp = temp.next;
            }
        }
    }

    public int size() {
        int n = 0;
        if (head == null) {
            return 0;
        } else {
            Node temp = head;
            while (temp.next != null) {
                temp = temp.next;
                n = n + 1;
            }
        }
        return n;
    }

    public static void main(String[] args) {
        LinkedList list = new LinkedList();
        list.traverse();
        list.insertAtBeginning(0);
        list.insertAtBeginning(1);
        list.insertAtBeginning(2);
        list.insertAtBeginning(3);
        list.insertAtEnd(70);
        list.insertAtEnd(80);
        list.insertAtEnd(90);
        list.insertInMiddle(120, 3);
        list.traverse();
    }

}
