
public class Static {
	int a = 10;
	int b = 20;
	public static void main(String a[]) {
//		System.out.print(a);
		
		Static s = new Static();
		Static s1 = new Static();
		s.a = 60;
		s1.a = 30;
		s1.a = 50;
		
		System.out.println("s1.a = " + s1.a + " | s = " + s.a);
		
		sample sample = new sample();
		int x = sample.z;
		System.out.println(x);
	}
	void main() {
		System.out.println("-----");
	}
}

