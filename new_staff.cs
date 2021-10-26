using System;

namespace Name
{
    class Program
    {
        static void Main(string[] args)
        {   
            
            
            /*
            int a;
            double q;
            char t;
            string s;
            Console.Write("Write your name - ");
            s=Console.ReadLine();
            string r="Hi, "+ s + "!"; //конкатенация
            Console.WriteLine(r);
            */

           /* int a;
            int b;
            Console.WriteLine("Write a - ");
            Console.ReadLine(a);
            Console.WriteLine("Write b - ");
            Console.ReadLine(b);
            int c = a + b;
            int c1 = a - b;
            int c2 = a*b;
            double  c3 = double(a) / double(b);
            */
            
            /*double a,b,c;
            Console.Wtite("Enter a,b,c - ");
            a = ConvertToDouble(Console.Readline());
            b = ConvertToDouble(Console.Readline());
            c = ConvertToDouble(Console.Readline());
            
            double d = b*b - 4*a*c;
            
            if (d>0){
                double x1 = (-b + Math.Sqrt(d))/(2*a);
                double x2 = (-b - Math.Sqrt(d))/(2*a);
                Console.WtiteLine($"x1 = {x1} i  x2 = {x2}");
            }
            else{
                if (d == 0){
                    double x = (-b )/(2*a);
                    Console.WtiteLine($"x = {x}");
                }
                else{
                     Console.WtiteLine("Net korney!");
                    }
            */
            /*
            int x;
            int min = 1000000000000000000;
            int  max = 0, pr=1, summa=0, ot=0;
            double srzn;
            x = Convert.ToInt32(ConsoleReadLine());

            for (int i = 0; i < x; i++)
            {
                ot = Convert.ToInt32(ConsoleReadLine());
                
                if (ot > max){
                    max = ot;
                }

                if (ot < min){
                    min = ot;
                }

                summa += ot;
                pr *= ot;
            }
            srzn = (double)summa / (double)x;

            Console.WriteLine($"summa = {summa}, max = {max}, min = {min}, pr = {pr}, srzn = {srzn}");
            }
            */

    /*massivy
            int[] nums = new int[4];

            for (int i = 0; i < 4; i++){
                nums[i] = Convert.ToInt32(Console.ReadLine());
            }

            for (int i = 0; i < 4; i++){
                Console.Write($"{nums[i]}  ");
            }
    */
    /*
            int n;
            n = Convert.ToInt32(Console.ReadLine());
            int[] nums = new int[n];
            
            for (int i = 0; i < n; i++){
                nums[i] = Convert.ToInt32(Console.ReadLine());
            }

            for (int i = 0; i < n; i++){
                Console.Write($"{nums[i]}  ");
            }

    */
    /*
            int[] nums = new int[7];

            nums[0] = 9;
            nums[3] = 4;
            nums[5] = -2;
            
            foreach(int q in nums)
            {
                Console.Write($"{q}  ");
            }
            ///////////vyvedet 9 0 0 4 0 -2 0/////////////
    */

            int n;
            n = Convert.ToInt32(Console.ReadLine());

            int[] nums = new int[n];

            for (int i = 0; i < n; i++){
                nums[i] = Convert.ToInt32(Console.ReadLine()); 
            }

            int min, max;
            min = max = nums[0];

            foreach (int q in mas){
                if (q > max){
                    max = q;
                }

                if (q < min){
                    min = q;
                }
            }    
            Console.WriteLine($"max = {max} i min = {min}");  
        }
    }
}