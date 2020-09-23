class Program {

	// O(n^2) time | O(n) space
	public static boolean isPalindrome(String str) {
		String reversedString = "";
		for (int i = str.length() - 1; i >= 0; i--) {
			reversedString += str.charAt(i);
		}
		return str.equals(reversedString);
	}
}