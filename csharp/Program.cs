namespace csharp;

class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("Example 1:");
        Console.WriteLine(new FizBuzz(3).ToString());
        
        Console.WriteLine("Example 2:");
        Console.WriteLine(new FizBuzz(5).ToString());
        
        Console.WriteLine("Example 3:");
        Console.WriteLine(new FizBuzz(15).ToString());
    }
}

public class FizBuzz
{
    private readonly List<string> _result;
    
    public FizBuzz(int n)
    {
        this._result = Enumerable.Range(1, n)
            .Select(i =>
            {
                if (i % 3 == 0 && i % 5 == 0)
                {
                    return "\"FizzBuzz\"";
                }

                if (i % 5 == 0)
                {
                    return "\"Buzz\"";
                }

                if (i % 3 == 0)
                {
                    return "\"Fizz\"";
                }

                return $"\"{i}\"";
            }).ToList();
    }

    public override string ToString()
    {
        return $"[{string.Join(", ", _result)}]";
    }
}