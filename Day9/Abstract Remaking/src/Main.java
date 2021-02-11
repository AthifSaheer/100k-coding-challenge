
public class Main extends Abstract{
	void onText(String text) {
		System.out.println(text);
	}
	
	Main(){
		Scanner onsc = new Scanner(this);
		onsc.scan();
	}
	
	public static void main(String[] args) {
		Main main = new Main();
	}
}
