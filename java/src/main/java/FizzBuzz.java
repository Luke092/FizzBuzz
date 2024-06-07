import java.util.ArrayList;

public class FizzBuzz {
    private ArrayList<String> results;

    public FizzBuzz(int n){
        results = new ArrayList<>();
        for(int i = 1; i <= n; i++){
            if(i % 3 == 0 && i % 5 == 0){
                results.add("\"FizzBuzz\"");
            }
            else if(i % 3 == 0){
                results.add("\"Fizz\"");
            }
            else if(i % 5 == 0){
                results.add("\"Buzz\"");
            }
            else{
                results.add("\"" + Integer.toString(i) + "\"");
            }
        }
    }

    @Override
    public String toString() {
        return "[" + String.join(", ", results) + "]";
    }
}
