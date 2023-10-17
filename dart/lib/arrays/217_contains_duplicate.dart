// [Runtime]
// 335ms
// Beats 35.66% of users with Dart
// [Memory]
// 185.29MB
// Beats 62.79% of users with Dart

bool containsDuplicate(List<int> nums) {
  final map = {};

  for (final element in nums) {
    if (map.containsKey(element)) return true;
    map[element] = element;
  }
  return false;
}

// [Runtime]
// 344ms
// Beats 31.01%of users with Dart
// [Memory]
// 179.62MB
// Beats 77.78%of users with Dart
bool containsDuplicateSecondSolution(List<int> nums) {
  return nums.toSet().length != nums.length;
}

// [Runtime]
// 294ms
// Beats 76.74%of users with Dart
// [Memory]
// 187.16MB
// Beats 35.40%of users with Dart
bool containsDuplicates(List<int> nums) {
  if (nums.length != nums.toSet().length) return true;
  return false;
}

// [Runtime]
// 290ms
// Beats 81.14%of users with Dart
// [Memory]
//186.64MB
// Beats 37.47%of users with Dart
bool containsDuplicateSecondSolutionPreferable(List<int> nums) {
  return nums.length != nums.toSet().length;
}

// [Runtime]
// 274ms
// Beats 94.06%of users with Dart
// [Memory]
// 186.14MB
// Beats 43.41%of users with Dart
bool containsDuplicateThirdSolution(List<int> nums) {
  return nums.toSet().length != nums.length ? true : false;
}
