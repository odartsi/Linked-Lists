class Solution:
    def isPalindrome(self, head: ListNode) -> bool:
        array=[]
        while head !=None:
            array.append(head.val)
            head=head.next
            
        return array==array[::-1]
