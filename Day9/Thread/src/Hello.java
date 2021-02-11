
public class Hello {
	public static void main(String[] args) {
		ThreadSample SM = new ThreadSample();
		ThreadSample SM2 = new ThreadSample();
		ThreadSample SM3 = new ThreadSample();
		SM.start();
		SM2.start();
		SM3.start();
	}
}
