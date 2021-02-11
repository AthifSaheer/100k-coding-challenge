import java.util.Scanner;

public class ifJava {
	public static void main(String a[]) {
		Scanner s = new Scanner(System.in);
		System.out.println("Enter a number");
		
		int num, f, sum=0;
		num = s.nextInt();
		f = s.nextInt();
		
		if(num<0) {
			System.out.println("Number is Negative");
		}else {
			System.out.println("Number is Positive");
			for(int i=0;i<num;i++) {
				for(int j=0;j<f;j++) {
					System.out.println(i+" "+j);
					sum = sum+i;
				}
			}
		}
		System.out.println("Result: "+sum);
		
//		void sum() {
//			char name = s.nextInt();
//			System.out.print("Ur name: "+name);
//		}
	}
}
