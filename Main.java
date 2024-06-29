
public class Main {
    public static void main(String[] args) {
        String str = "10/17, 9/10";
   
        String[] parts = str.split(",\\s");
        

        double numerator1, denominator1, numerator2, denominator2;
        double f1, f2;

    
        String[] fractionParts1 = parts[0].split("/");
        numerator1 = Double.parseDouble(fractionParts1[0]);
        denominator1 = Double.parseDouble(fractionParts1[1]);

        // Parsing the second fraction
        String[] fractionParts2 = parts[1].split("/");
        numerator2 = Double.parseDouble(fractionParts2[0]);
        denominator2 = Double.parseDouble(fractionParts2[1]);

 
        f1 = (double) numerator1 / denominator1;
        f2 = (double) numerator2 / denominator2;

        if( f1 > f2 ){
            System.out.println(parts[0] + " is a greater fraction");
        }
        else if(f1 < f2){
            System.out.println(parts[1] + " is a greater fraction");
            
        }
        else if(f1 == f2){
            System.out.println("Equal");
        }
    }
}


// C:\Program Files (x86)\Common Files\Oracle\Java\javapath

// 1895393

// 1222530

// https://www.geeksforgeeks.org/full-stack-developer-roadmap/