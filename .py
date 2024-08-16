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

# Anagram (16/8):
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if sorted(s) == sorted(t):
            return True
        else :
            return False        

# hunger strike : (16/8) :

num_children = int(input())
greedy_factors = list(map(int, input().split()))
num_cookies = int(input())
cookie_sizes = list(map(int, input().split()))
greedy_factors.sort()
cookie_sizes.sort()
content_children = 0
cookie_index = 0
for i in range(num_children):
    if cookie_index < num_cookies and cookie_sizes[cookie_index] >= greedy_factors[i]:
        content_children += 1
        cookie_index += 1
print(content_children)

# oddeven linked list :

# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def oddEvenList(self, head):
        if not head or not head.next:
            return head
        odd = head
        even = head.next
        even_head = even  
        
        while even and even.next:
            odd.next = even.next
            odd = odd.next        
            even.next = odd.next 
            even = even.next      
        odd.next = even_head 
        return head
