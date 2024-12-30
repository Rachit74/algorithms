class Node {
    int data;
    Node previous;
    Node next;

    Node(int data) {
        this.data = data;
        this.previous = null;
        this.next = null;
    }
}

public class DoubleLinkedList {

    Node head;

    public void insertAtBeginning(int data) {
        Node newNode = new Node(data);
        newNode.next = head;
        if (head != null) {
            head.previous = newNode;
        }
        head = newNode;
    }

    public void insertInMiddle(int data, int position) {
        int n = size();
        if (position < 0 || position > n) {
            System.err.println("Out of range");
            return;
        }
        if (position == 0) {
            insertAtBeginning(data);
            return;
        }
        if (position == n) {
            insertAtEnd(data);
            return;
        }

        Node newNode = new Node(data);
        Node temp = head;
        for (int i = 0; i < position - 1; i++) {
            temp = temp.next;
        }
        newNode.next = temp.next;
        if (temp.next != null) {
            temp.next.previous = newNode;
        }
        temp.next = newNode;
        newNode.previous = temp;
    }

    public void insertAtEnd(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
        } else {
            Node temp = head;
            while (temp.next != null) {
                temp = temp.next;
            }
            temp.next = newNode;
            newNode.previous = temp;
        }
    }

    public void traverse() {
        if (head == null) {
            System.err.println("List is empty!");
            return;
        }
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + "\n");
            temp = temp.next;
        }
    }

    public int size() {
        Node temp = head;
        int n = 0;
        while (temp != null) {
            temp = temp.next;
            n++;
        }
        return n;
    }

    public static void main(String[] args) {
        DoubleLinkedList list = new DoubleLinkedList();

        list.insertAtBeginning(10);
        list.insertAtBeginning(20);
        list.insertAtBeginning(30);
        list.insertAtEnd(100);
        list.insertAtEnd(200);
        list.insertAtEnd(300);
        list.insertInMiddle(5, 0);
        list.traverse();
    }
}
