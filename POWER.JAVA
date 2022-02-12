package p1;
public class power {
	public static void main(String[] args) {
		int base=2;int exponent=1;int result=1;
		while(exponent <= 6)
		{
			result*=base;
			exponent=exponent+1;
		}
		System.out.printf("the value of result,%d",result);
		// TODO Auto-generated method stub

	}

}
