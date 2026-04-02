class Solution {
    public List<List<Integer>> kSmallestPairs(int[] nums1, int[] nums2, int k) {
        List<List<Integer>> list=new ArrayList<>();
        if(nums1.length==0||nums2.length==0||k==0){
            return list;
        }
        PriorityQueue<int[]> heap=new PriorityQueue<>((a,b)->a[0]-b[0]);
        Set<String> visited=new HashSet<>();
        heap.offer(new int[]{nums1[0]+nums2[0],0,0});
        visited.add("0,0");
        while(!heap.isEmpty()&&k>0){
            int[] curr=heap.poll();
            int i=curr[1];
            int j=curr[2];
            list.add(Arrays.asList(nums1[i], nums2[j]));
            if(i+1<nums1.length){
                String keys=(i+1)+","+j;
                if(!visited.contains(keys)){
                    heap.offer(new int[]{nums1[i+1]+nums2[j],i+1,j});
                    visited.add(keys);
                }
            }
            if(j+1<nums2.length){
                String keys=i+","+(j+1);
                if(!visited.contains(keys)){
                    heap.offer(new int[]{nums1[i]+nums2[j+1],i,j+1});
                    visited.add(keys);
                }
            }
            k--;
        }
        return list;
    }
    
}