import java.util.*;
import java.lang.*;
import java.math.*;
import java.io.*;

class GFG {
static int getlargest(int arr[],int n)
  {
    for(int i=0;i<n;++i)
    {
        boolean flag=true;
        for(int j=i;j<n;++j)
        {
            if(arr[j]>arr[i])
            {
                flag=false;
                break;
            }
        }
        if(flag==true)
          {
            return i;
          }
    }
    return -1;
}
  public static void main(String[] args) throws IOException {
     int arr[]={5,8,20,15};
     System.out.println(getlargest(arr,4));
  }
}
