class ListNode:
    def __init__(self, value=0, next=None):
        self.value = value
        self.next = next

def delete_node(head, value):
    if not head:
        return None
    
    if head.value == value:
        return head.next
    
    current = head
    while current.next and current.next.value != value:
        current = current.next
    
    if current.next and current.next.value == value:
        current.next = current.next.next
    
    return head

def create_linked_list(values):
    if not values:
        return None
    
    head = ListNode(values[0])
    current = head
    for value in values[1:]:
        current.next = ListNode(value)
        current = current.next
    return head

def print_linked_list(head):
    current = head
    while current:
        print(current.value, end=" ")
        current = current.next
    print()