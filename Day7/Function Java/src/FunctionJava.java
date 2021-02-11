import java.util.Scanner;

public class FunctionJava {
	public static void main(String a[]) {
		Scanner s = new Scanner(System.in);
		System.out.println("Enter 2 numbers");
		
		int num1, num2, res;
		num1 = s.nextInt();
		num2 = s.nextInt();
		
		res = sum(num1, num2);
		System.out.println("Result: " + res);
	}
	
	static int sum(int a, int b) {
		return a + b;
	}
}
