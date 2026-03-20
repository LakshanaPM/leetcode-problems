class LRUCache {
    class Node{
        int key,value;
        Node prev,next;
        Node(int k,int v){
            key=k;
            value=v;
        }
    }
    private int capacity;
    private Map<Integer,Node> map;
    private Node head,tail;
    public LRUCache(int capacity) {
        this.capacity=capacity;
        map=new HashMap<>();
        head=new Node(-1,-1);
        tail=new Node(-1,-1);
        head.next=tail;
        tail.prev=head;
    }
    public void insert(Node node){
        Node afterHead=head.next;
        head.next=node;
        node.prev=head;
        node.next=afterHead;
        afterHead.prev=node;
    }
    public void remove(Node node){
        Node prevNode=node.prev;
        Node nextNode=node.next;
        prevNode.next=nextNode;
        nextNode.prev=prevNode;
    }
    public int get(int key) {
        if(!map.containsKey(key)){
            return -1;
        }
        Node node=map.get(key);
        remove(node);
        insert(node);
        return node.value;
    }
    
    public void put(int key, int value) {
        if(map.containsKey(key)){
            Node node=map.get(key);
            node.value=value;
            remove(node);
            insert(node);
        }
        else{
            if(map.size()==capacity){
                Node node=tail.prev;
                map.remove(node.key);
                remove(node);
            }
            Node node=new Node(key,value);
            map.put(key,node);
            insert(node);
        }
    }
}

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache obj = new LRUCache(capacity);
 * int param_1 = obj.get(key);
 * obj.put(key,value);
 */