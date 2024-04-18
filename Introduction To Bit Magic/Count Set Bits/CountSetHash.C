using System;

class Program
{
    static int CountSetBits(int n)
    {
        int count = 0;
        while (n != 0)
        {
            n = n & (n - 1); // Clears the rightmost set bit
            count++;
        }
        return count;
    }

    static void Main(string[] args)
    {
        int n = 23; // Example input
        Console.WriteLine("Number of set bits: " + CountSetBits(n));
    }
}
