
public class ThreadSample extends Thread {
	@Override
	public void run() {

		super.run();
		
		for(int i=0;i<10;i++) {
			System.out.println("Thread count" + i);
			try {
				Thread.sleep(2000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}
}
