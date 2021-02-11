import java.util.Scanner;

public class assignment {
	// Second Assignment
	public static void main(String a[]) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter 2 numbers you want !");
		int input1 = sc.nextInt();
		int input2 = sc.nextInt();
		
		System.out.println("Ok, Plz choice below");
		System.out.println("1 = addition \n2 = subtraction \n3 = multiplication \n4 = divition");
		int x = sc.nextInt();
		
		Hello h1 = new Hello();
		if(x==1) {
			h1.addition(input1, input2);
		}else if(x==2) {
			h1.subtraction(input1, input2);
		}else if(x==3) {
			h1.multiplication(input1, input2);
		}else if(x==4) {
			h1.division(input1, input2);
		}
	}
}

	// First Assignment "Failed ! ! ! !"
	
	/*
	Scanner s = new Scanner(System.in);
	int a = s.nextInt();
	System.out.print("U Entered number: ",a);
	
	if (a == 0) {
        int flag = 1;
        break;
    }

    if (int flag == 1)
      System.out.println(a + " is a prime number.");
    else
      System.out.println(a + " is not a prime number.");
	*/