/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeKLists(ListNode[] lists) {
        PriorityQueue<ListNode> pq = new PriorityQueue<>(
            (a, b) -> a.val - b.val
        );
        for (int i = 0; i < lists.length; i++) {
            if (lists[i] != null) {
                pq.offer(lists[i]);
            }
        }

        ListNode dummyNode = new ListNode(-1);
        ListNode temp = dummyNode;

        while (!pq.isEmpty()) {
            ListNode current = pq.poll();

            if (current.next != null) {
                pq.offer(current.next);
            }

            temp.next = current;
            temp = temp.next;
        }

        return dummyNode.next;
    }
}