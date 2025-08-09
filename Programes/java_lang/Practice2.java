import java.util.Scanner;
class Practice2{
	public static void main(String[] args){
		Scanner inp=new Scanner(System.in);
		System.out.println("iam artist 19 $$");
		//this is practice set 2
		// in this programe ,user give input of  3 subject and check is subject pass or fail ,
		//overall percentage sould be 40% above or 40% and 33% in each
		int math,science,py;
		math=34;  
		science=43;
		py=3;
		int total=math+science+py;
		float total_percent=total/300f*100f;

		System.out.println(total_percent);

		if (total_percent>40.0){
			System.out.println("Student passed by overall percentage");
		}
		else if (math>33.0 && science >33.0 && py>33.0){
			System.out.println("You are passed by each subject percentage");
			}
		else{
			System.out.println("You are faild");
		}
		inp.close();
		// my name is sukhnam singh 

		

	}
}