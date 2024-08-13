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