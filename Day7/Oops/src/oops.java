
public class oops {
	public static void main(String a[]) {
		Sample s1 = new Sample();
		Sample s2 = new Sample();
		
		s1.a = 10;
		s1.b = 20;
		s2.a = 50;
		s2.b = 60;
		
		s1.display();
		s2.display();
		
		System.out.println("S1-a "+s1.a);
		System.out.println("S2-a "+s2.a);
		System.out.println("S1-b "+s1.b);
		System.out.println("S2-b "+s2.b);
	}
}
