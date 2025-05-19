/*Given two strings s and t, return true if the two strings are anagrams of each other, otherwise return false.

An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.

Example 1:

Input: s = "racecar", t = "carrace"

Output: true
Example 2:

Input: s = "jar", t = "jam"

Output: false */

class Solution {
    public boolean isAnagram(String s, String t) {
        int size1 = s.length();
        int size2 = t.length();
        
        if(size1 != size2) return false;
        
        char[] chars = s.toCharArray();
        char[] chars2 = t.toCharArray();

        Arrays.sort(chars);
        Arrays.sort(chars2);
        
        return Arrays.equals(chars, chars2);
    }
}
