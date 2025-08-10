public class Method_p{
	public static void table(int n){
		for(int i=0;i<=10;i++){
			System.out.println(n+"x"+i+"="+n*i);
		}
	}

	static void sstar(int n){
		for(int i=0;i<=n;i++){
			System.out.print("\n");
			for(int j=0;j<=i;j++){
				System.out.print("*");
			}
		}
	}
	static void star_(int n){
		for(int i=0;i<n;i++){
			System.out.print("\n");
			for(int j=n;j>i;j--){
				System.out.print("*");
			}
		}
	}

	public static void main(String[] args){
	System.out.println("Sukhnam singh gill");
	//problem 1 is to print multiplication
	// table(9);
	// star(3);
	star_(8);
	}
}