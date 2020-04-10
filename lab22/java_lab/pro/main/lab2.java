package pro.main;


import pro.Out.Output;
import pro.Inp.Input;
import pro.F.Func;

public class lab2{
	public static void main(String[] args){
		int n=7;
		int m=9; 
		int array[][]=new int [n][m];
		
		Input.Input_Array(array,n, m);
		Output.Out_Array(array,n, m );
		Func.Search(array,n, m);
		//Output.Out_Array(array,n,m);
	}
}			
