class Solution {
    public int maxNumberOfFamilies(int n, int[][] reservedSeats) {
        Map<Integer, Set<Integer>> map = new HashMap<>();

        // Store reserved seats row-wise
        for (int[] seat : reservedSeats) {
            map.putIfAbsent(seat[0], new HashSet<>());
            map.get(seat[0]).add(seat[1]);
        }

        // Rows with no reservations can fit 2 families
        int count = (n - map.size()) * 2;

        for (int row : map.keySet()) {
            Set<Integer> reserved = map.get(row);

            boolean left = !(reserved.contains(2) || reserved.contains(3) ||
                             reserved.contains(4) || reserved.contains(5));

            boolean middle = !(reserved.contains(4) || reserved.contains(5) ||
                               reserved.contains(6) || reserved.contains(7));

            boolean right = !(reserved.contains(6) || reserved.contains(7) ||
                              reserved.contains(8) || reserved.contains(9));

            if (left && right) {
                count += 2;   // two groups possible
            } else if (left || middle || right) {
                count += 1;   // only one group possible
            }
        }

        return count;
    }
}