
public class Sample extends Hello {
	void onText(String text) {
		System.out.println(text);
	}
	
	Sample(){
		TextScanner textscan = new TextScanner(this);
		textscan.scan();
	}
	
	public static void main(String a[]) {
		Sample s = new Sample();
	}
}
