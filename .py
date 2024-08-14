# reverse linked list : (13/8)

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head):
        prev = None
        current = head

        while current :
            next_node = current.next
            current.next = prev
            prev = current 
            current = next_node 

        return prev


# print middle node : (13/8)

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head):
        slow = head
        fast = head

        while fast and fast.next :
            slow = slow.next
            fast = fast.next.next

        return slow

# delete node : (14/8)

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


# remove node in linked list : (14/8)
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def reverseList(self, head: ListNode) -> ListNode:
        prev = None
        current = head
        while current:
            next_node = current.next
            current.next = prev
            prev = current
            current = next_node
        return prev
    
    def removeNodes(self, head: ListNode) -> ListNode:
        reversed_head = self.reverseList(head)
        
        max_val = float('-inf')
        current = reversed_head
        prev = None
        
        while current:
            if current.val >= max_val:
                max_val = current.val
                prev = current
            else:
                prev.next = current.next
            
            current = current.next        
        return self.reverseList(reversed_head)

