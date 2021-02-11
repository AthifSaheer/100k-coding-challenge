
public class Scanner {
	Abstract x;
	
	public Scanner(Abstract x) {
		this.x = x;
	}
	
	void scan() {
		x.onText("Scanned Text is Recieved");
	}
}
