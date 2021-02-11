package polymorphism;

public class SubClass extends BaseClass{
	int a = 56;
	void display() {
		System.out.println("Sub Class | Polymorphism method overriding");

		// Polymorphism Super
		super.display();
	}
	
	void screen() {
		System.out.println("Sub Class | Polymorphism method overloding");
	}
	
	public static void main(String[] args) {
		SubClass scls = new SubClass();
		
		// Polymorphism method overriding
		scls.display();
		
		// Polymorphism method overloding
		scls.screen();
		scls.screen(27);
	}
}

