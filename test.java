public class test {
    public static void main(String[] args) {
        
        int arr[] = {10,20,30,40,50};
        // int n = sizeof(arr)/sizeof(arr[0]);
        int n = 5;

        double prev,avg;
        
        prev = 0; 

        for(int i = 1; i <=n; i++){
            avg = 0;
            prev += arr[i-1];
            avg = prev/i;
            System.out.print(avg +" ");  

         }
   }
}
