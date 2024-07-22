class Solution {
 List<String> sortPeople(List<String> names, List<int> heights) {
  Map<int, String> mp = {};
  for (int i = 0; i < heights.length; i++) {
    mp[heights[i]] = names[i];
  }

  List<int> sortedHeights = heights..sort((a, b) => b.compareTo(a));
  List<String> list = List.filled(heights.length, "");

  for (int i = 0; i < sortedHeights.length; i++) {
    list[i] = mp[sortedHeights[i]]!;
  }

  return list;
}
}