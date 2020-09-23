class Program {

	// O(n) time | O(n) space

	public static boolean isPalindrome(String str) {
		StringBuilder reversedString = new StringBuilder();
		for (int i = str.length() - 1; i >= 0; i--) {
			reversedString.append(str.charAt(i));
		}
		return str.equals(reversedString.toString());
	}
}