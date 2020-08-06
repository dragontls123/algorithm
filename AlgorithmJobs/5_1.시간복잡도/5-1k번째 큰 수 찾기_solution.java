import java.util.Scanner;
import java.util.Arrays;
public class Main {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);

		int n = s.nextInt();
		int arr[] = new int[n];
		int k = s.nextInt();
		for (int i = 0; i < n; i++) {
			arr[i] = s.nextInt();
		}
		Arrays.sort(arr);
		System.out.print(arr[n - k]);

	
	}
}