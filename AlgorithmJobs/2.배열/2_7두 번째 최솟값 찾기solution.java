import java.util.Scanner;
import java.util.Arrays;
public class Main{
    public static void main(String[] args){
Scanner s=new Scanner(System.in);
int arr[]=new int[9];
int arr1[]=new int[9];

for(int i=0;i<9;i++){
  arr[i]=s.nextInt();
  arr1[i]=arr[i];
}

Arrays.sort(arr);
System.out.println(arr[1]);
for(int i=0;i<9;i++){
  if(arr[1]==arr1[i]){
  System.out.print(i+1);
  break;
    
  }
}
       // Please Enter Your Code Here

    }
}