import java.util.Scanner;

public class Function4types_InJava {
	public static void main(String a[]) {
		Scanner s = new Scanner(System.in);
		System.out.println("Enter 2 numbers");
		
		int x, y;
		x = s.nextInt();
		y = s.nextInt();
		
		System.out.println("Function 1 ----------------------------------");
		int z = func1(x, y);
		System.out.println("Values " + x + " " + y);
		
		System.out.println("Function 2 ----------------------------------");
		func2();
		
		System.out.println("Function 3 ----------------------------------");
		String q = "Gates";
		func3(q);
		
		System.out.println("Function 4 ----------------------------------");
		int w = func4();
		System.out.println("Result: " + w);
		
	}

	// Function with argument with return value
	static int func1(int a, int b) {
		int result;
		return result = a + b;
	}
	
	// Function without argument without return value
	static void func2() {
		System.out.println("Athif Saheer");
	}
	
	// Function with argument without return value
	static void func3(String string) {
		System.out.println("Bill "+ string);
	}
	
	// Function without argument with return value
	static int func4() {
		int j, k, g;
		j = 48;
		k = 64;
		g = j + k;
		return g;
	}
}