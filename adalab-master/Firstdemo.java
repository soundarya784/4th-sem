import java.io.*;
import java.util.Scanner;
public class Firstdemo {
	public static void main(String args[]){
		int t1;
		int i=0;
		First1 obj=new First1();
		t1=obj.testinput();
		while(i<t1){
			obj.input();
			obj.search();
			
			
		}
		
	}
}

	
class First1{
	int a[];
	int t,key,size;
	int testinput()
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("enter number of test cases");
		t=sc.nextInt();
		sc.close();
		return t;
		
	}
	void input(){
		Scanner sc=new Scanner(System.in);
				System.out.println("enter number of elements in the array");
		size=sc.nextInt();
		System.out.println("enter the key element");
		key=sc.nextInt();
		int a[]=new int[size];
		System.out.println("enter array elements");
		for(int i=0;i<size;i++)
		{
			a[i]=sc.nextInt();
		}
		sc.close();
		
	}
	void search()
	{
		for(int i=0;i<size;i++)
		{
			if(a[i]==key)
			
				System.out.println("1");
			else
				System.out.println("-1");	
		}
	}
	
}
	
	
