
public class Sample {
	int a=81, b=96;
	Sample(int c, int d){
		
		int num1 = this.a;
		int num2 = this.b;
		
		System.out.println("Global argument: "+ num1 + " | " + num2);
		System.out.println("Local argument: " + c + " | " + d);
	}
}
