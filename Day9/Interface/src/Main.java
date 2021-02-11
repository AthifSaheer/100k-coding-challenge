
public class Main implements Interface{
	int y = 10;
	public void Screen(int x) {
		System.out.println("Hi, I'm Main Function "+x);
	}
	
	Main(){
		Screen(this.y);
	}
	
	public static void main(String[] args) {
		Main m = new Main();
	}
}
