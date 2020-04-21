#Remove all elements from a linked list of integers that have value val.

#Example:

#Input:  1->2->6->3->4->5->6, val = 6
#Output: 1->2->3->4->5

class Solution:
    def removeElements(self, head: ListNode, val: int) -> ListNode:
        zero_node = ListNode(0)
        zero_node.next = head
        cur_node = zero_node
        while cur_node.next:
            if cur_node.next.val == val:
                cur_node.next = cur_node.next.next
            else:
                cur_node = cur_node.next
        return zero_node.next
        
