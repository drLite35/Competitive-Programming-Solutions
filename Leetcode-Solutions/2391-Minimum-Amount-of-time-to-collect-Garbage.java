class Solution {
    private int noOfTimes(char c, String str) {
        int count = 0;
        for (int i=0 ; i <str.length() ; i++) {
            if (str.charAt(i) == c) {
                count++;
            }
        }
        return count;
    }
    public int garbageCollection(String[] garbage, int[] travel) {
        int t1 = 0;
        int tmp = 0;
        for (int i = 0; i < garbage.length; i++) {
            if (garbage[i].contains("G")) {
                tmp = i;
                t1 += noOfTimes('G', garbage[i]);
            }
        }
        for (int i = 0; i < tmp; i++) {
            t1 += travel[i];
        }
        tmp = 0;
        for (int i = 0; i < garbage.length; i++) {
            if (garbage[i].contains("P")) {
                tmp = i;
                t1 += noOfTimes('P', garbage[i]);
            }
        }
        for (int i = 0; i < tmp; i++) {
            t1 += travel[i];
        }
        tmp = 0;
        for (int i = 0; i < garbage.length; i++) {
            if (garbage[i].contains("M")) {
                tmp = i;
                t1 += noOfTimes('M', garbage[i]);
            }
        }
        for (int i = 0; i < tmp; i++) {
            t1 += travel[i];
        }

        return t1;
    }
}