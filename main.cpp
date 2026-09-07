#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout<<"Welcome to Shruti's Math Tool!"<<endl;

    while (true)
    {

        // Main Title 

        cout<<
    "\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
     cout<<" * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * " <<endl;
     cout<<" * * * * * * * * * * * * * * * *         SHRUTI'S MATH TOOL       * * * * * * * * * * * * * * *" <<endl;
     cout<<" * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * "<<endl;
     cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;

     // Main Menu

     cout<< "\n1. Basic Calculations "<<endl;
     cout<< "2. Number Analysis"<<endl;
     cout<< "3. Conversions "<<endl;
     cout<< "4. Exit "<<endl;

            int choice;   
            cout<< "Enter your choice: ";
            cin>>choice;
    
            if (choice == 4)
            {
                cout<<" Thank you for using Shruti's Math Tool. Goodbye!"<<endl;
                break;
            }
    
            switch (choice)
            {
                case 1:
                {   
                    cout<< "\n ##############         BASIC CALCULATIONS           ############## "<<endl;
                    cout<< "1. Addition"<<endl;
                    cout<< "2. Subtraction"<<endl;
                    cout<< "3. Multiplication"<<endl;
                    cout<< "4. Division"<<endl;
                    cout<< "5. Modulus"<<endl;
                    cout<< "6. Power"<<endl;
                    cout<< "7. Square Root"<<endl;
                    cout<< "8. Percentage"<<endl;
                    cout<< "9. Absolute Value"<<endl;
                    cout << "10. Back to main menu"<<endl;
                    
                    int calculationChoice;
                    cout<<"\nEnter your choice:";
                    cin>>calculationChoice;

                    switch(calculationChoice)
                    {
                        case 1:
                        {
                            double num1,num2,number,sum;
                            char addMore;

                            cout<<" Enter number 1:"<<endl;
                            cin>>num1;
                            cout<<" Enter number 2:"<<endl;
                            cin>>num2;
                            sum = num1+num2;
                            
                            cout<<"Add more numbers ? (y/n): ";
                            cin>>addMore;

                            while(addMore=='y' || addMore=='Y')
                            {
                                cout<<"Enter another number:";
                                cin>>number;
                                sum+=number;
                                cout<<"Add more numbers ? (y/n):";
                                cin>>addMore;
                            }
                            cout<<"Final Sum ="<<sum<<endl;
                        }
                        break;
                        case 2:
                        {
                            double num1,num2,diff;

                            cout<<"Enter number 1:"<<endl;
                            cin>>num1;
                            cout<<"Enter number 2:"<<endl;
                            cin>>num2;

                            diff=num1-num2;

                            cout<<"Difference ="<<diff<<endl;
                        }
                        break;
                        case 3:
                        {
                            double num1,num2,number,prod;
                            char prodMore;

                            cout<<"Enter number 1:"<<endl;
                            cin>>num1;
                            cout<<"Enter number 2:"<<endl;
                            cin>>num2;

                            prod=num1*num2;

                            cout<<"Multiply more numbers ? (y/n)";
                            cin>>prodMore;

                            while(prodMore=='y' || prodMore=='Y')
                            {
                                cout<<"Enter another number:";
                                cin>>number;

                                prod*=number;

                                cout<<"Multiply more numbers ? (y/n)";
                                cin>>prodMore;
                            }
                            cout<<"Final product ="<<prod<<endl;
                        }
                        break;
                        case 4:
                        {
                            double num1,num2,div;

                            cout<<"Enter number 1:";
                            cin>>num1;
                            cout<<"Enter number 2:";
                            cin>>num2;

                            if (num2==0)
                            {
                                cout<<"Cannot divide by 0"<<endl;
                            }
                            else
                            {
                                div=num1/num2;
                                cout<<"Division ="<<div<<endl;
                            }
                        }
                        break;
                        case 5:
                        {
                            int num1,num2,mod;

                            cout<<"Enter number 1:";
                            cin>>num1;
                            cout<<"Enter number 2:";
                            cin>>num2;

                            if(num2==0)
                            {
                                cout<<"Cannot find modulus with 0"<<endl;
                            }
                            else
                            {
                                mod=num1%num2;
                                cout<<"Remainder ="<<mod<<endl;
                            }
                        }
                        break;
                        case 6:
                        {
                            double base, exponent,result;

                            cout<<"Enter Base:";
                            cin>>base;
                            cout<<"Enter Exponent:";
                            cin>>exponent;

                            result=pow(base,exponent);

                            cout<<base<<" raised to power "<<exponent<<" = "<<result<<endl;
                        }
                        break;
                        case 7:
                        {
                            double num,result;

                            cout<<"Enter a number:";
                            cin>>num;
                            
                            if(num<0)
                            {
                                cout<<"Square root of negative number is not possible."<<endl;
                            }
                            else
                            {
                                result=sqrt(num);
                                cout<<"Square root of "<<num<<" = "<<result<<endl;
                            }
                        }
                        break;
                        case 8:
                        {

                            cout<<"\n-----------------    Percentage   ----------------------"<<endl;
                            cout<<"1. Percentage of a number"<<endl;
                            cout<<"2. Find what percentage one number is of another"<<endl;
                            cout<<"3. Increase a number by percentage"<<endl;
                            cout<<"4. Decrease a number by percentage"<<endl;
                            cout<<"5. Back"<<endl;

                            int percentChoice;
                            cout<<"Enter your choice";
                            cin>>percentChoice;

                            switch(percentChoice)
                            {
                                case 1: 
                                {
                                    double percent,num,result;

                                    cout<<"Enter Percentage:";
                                    cin>>percent;
                                    cout<<"Enter number:";
                                    cin>>num;

                                    result=(percent*num)/100;

                                    cout<<percent<<"% of "<<num<<" = "<<result<<endl;
                                }
                                break;
                                case 2:
                                {
                                    double num1,num2,result;

                                    cout<<"Enter num1:";
                                    cin>>num1;
                                    cout<<"Enter num2:";
                                    cin>>num2;
                                     
                                    if(num2!=0)
                                    {
                                        result=(num1/num2)*100;
                                        cout<<"Result = "<<result<<"%"<<endl;
                                    }
                                    else
                                    {
                                        cout<<"Error: Can not divided by 0"<<endl;
                                    }
                                }
                                break;
                                case 3:
                                {
                                    double num,percent,result;

                                    cout<<"Enter number:";
                                    cin>>num;
                                    cout<<"Enter percentage to increase:";
                                    cin>>percent;
                                    
                                    result=num+(num*percent/100);

                                    cout<<"Result after increase ="<<result<<endl;
                                }
                                break;
                                case 4:
                                {
                                    double num,percent,result;

                                    cout<<"Enter number:";
                                    cin>>num;
                                    cout<<"Enter percentage to decrease:";
                                    cin>>percent;

                                    result=num-(num*percent/100);

                                    cout<<"Result after decrease:"<<result<<endl;
                                }
                                break;
                                case 5:
                                    break;
                                
                                default:
                                    cout<<"Invalid choice!"<<endl;
                            }
                            break;  
                                
                        }
                        break;
                        case 9:
                        {
                            double num,result;

                            cout<<"Enter a number:";
                            cin>>num;

                            result=abs(num);

                            cout<<"Absolute Value ="<<result<<endl;
                        }
                        break;
                        case 10:
                            break;
                        default:
                            cout<<"Invalid choice!"<<endl;
                    }
                }
                break;        
                case 2:
                {
                    cout<< "\n==============           NUMBER ANALYSIS            ================"<<endl;
                    cout<< "1. Even/Odd"<<endl;
                    cout<< "2. Factorial"<<endl;
                    cout<< "3. Prime Number Check"<<endl;
                    cout<< "4. Factor of Number"<<endl;
                    cout<< "5. GCD"<<endl;
                    cout<< "6. LCM"<<endl;
                    cout<< "7. Palindrome Check"<<endl;
                    cout<< "8. Fibonacci Series"<<endl;
                    cout<< "9. Digit Sum"<<endl;
                    cout<< "10. Reverse Number"<<endl;
                    cout<< "11. Back to main menu"<<endl;
                    
                    int numChoice;
                    cout<<"Enter your choice:";
                    cin>>numChoice;

                    switch(numChoice)
                    {
                        case 1:
                        {
                            int num;
                        
                            cout<<"Enter a number:";
                            cin>>num;

                            if(num%2==0)
                            {
                                cout<<"Even number"<<endl;
                            }
                            else
                            {
                                cout<<"Odd number"<<endl;
                            }
                        }
                        break;
                        case 2:
                        {
                            int num;
                            long long fact=1;

                            cout<<"Enter a number:";
                            cin>>num;

                            if(num<0)
                            {
                                cout<<"Factorial of negative number is not defined."<<endl;
                            }
                            else if(num>20)
                            {
                                cout<<"Number is too large! Factorial may overflow."<<endl;
                            }
                            else
                            {
                                for (int i=1; i<=num; i++)
                                {
                                    fact*=i;
                                }
                                cout<<"Factorial of "<<num<<" = "<<fact<<endl;
                            }
                        }
                        break;
                        case 3:
                        {
                            int num;
                            bool isPrime=true;

                            cout<<"Enter a number: ";
                            cin>>num;

                            if(num<=1)
                            {
                                isPrime=false;
                            }
                            else
                            {
                                 for (int i=2;i<=sqrt(num);i++)
                                 {
                                     if(num%i==0)
                                     {
                                        isPrime=false;
                                        break;
                                     }
                                 }
                            }     
                            if(isPrime)
                            {
                                cout<<num<<" is a prime number."<<endl;
                            }
                            else
                            {
                                cout<<num<<" is not a prime number."<<endl;
                            }
                        }    
                        break;
                        case 4:
                        {
                            int num;

                            cout<<"Enter a number:";
                            cin>>num;

                            if(num<=0)
                            {
                                cout<<"Factors are not defined for negative numbers or zero! Please enter a positive number."<<endl;
                            }
                            else
                            {
                                cout<<"Factors of "<<num<<": ";
                                for(int i=1;i<=num;i++)
                                {
                                   if(num%i==0)
                                    {
                                       cout<<i<<" ";
                                    }
                                }
                                cout<<endl;
                            }
                        }   
                        break;
                        case 5:
                        {
                            int num1,num2;
                            cout<<"Enter first number:";
                            cin>>num1;
                            cout<<"Enter second number:";
                            cin>>num2;

                            num1=abs(num1);
                            num2=abs(num2);

                            while(num2!=0)
                            {
                                int remainder=num1%num2;
                                num1=num2;
                                num2=remainder;
                            }
                            cout<<"GCD = "<<num1<<endl;
                        }
                        break;
                        case 6:
                        {
                            int num1,num2,gcd;

                            cout<<"Enter first number:";
                            cin>>num1;
                            cout<<"Enter second number:";
                            cin>>num2;

                            int a=abs(num1);
                            int b=abs(num2);

                            if(a==0 || b==0)
                            {
                                cout<<"LCM is not defined for 0"<<endl;
                            }
                            else
                            {    
                                 while(b!=0)
                                 {
                                     int remainder=a%b;
                                     a=b;
                                     b=remainder;
                                 }
                                 gcd=a;
                                 long long lcm=(static_cast<long long>(abs(num1))*abs(num2))/gcd;
                                 cout<<"LCM ="<<lcm<<endl;
                           }
                        }
                        break;   
                        case 7:
                        {
                            int num,originalNum,reversedNum=0;

                            cout<<"Enter a number:";
                            cin>>num;

                            originalNum=num;

                            if(num<0)
                            {
                                cout<<"Please enter a positive number."<<endl;
                            }
                            else
                            {
                                while(num!=0)
                                {
                                    int digit=num%10;
                                    reversedNum=reversedNum*10+digit;
                                    num/=10;
                                }
                                if(originalNum==reversedNum)
                                {
                                    cout<<originalNum<<" is palindrome."<<endl;
                                }
                                else
                                {
                                    cout<<originalNum<<" is not palindrome."<<endl;
                                }
                            }
                        }
                        break;
                        case 8:
                        {
                            int n;

                            cout<<"Enter number of terms:";
                            cin>>n;

                            int first=0;
                            int second=1;

                            cout<<"Fibonacci Series:";

                            for (int i=1;i<=n;i++)
                            {
                                cout<<first<<" ";
                                int next=first+second;
                                first=second;
                                second=next;
                            }
                            cout<<endl;
                        }
                        break;
                        case  9:
                        {
                            int num,sum=0;

                            cout<<"Enter a number:";
                            cin>>num;

                            num=abs(num);

                            while (num!=0)
                            {
                                sum+=num%10;
                                num/=10;
                            }
                            cout<<"Sum of Digits ="<<sum<<endl;
                        }
                        break;
                        case 10:
                        {
                            int num,rev=0;

                            cout<<"Enter a number:";
                            cin>>num;

                            while(num!=0)
                            {
                                int digit=num%10;
                                rev=rev*10+digit;
                                num/=10;
                            }
                            cout<<"Reversed Number ="<<rev<<endl;
                        }
                        break;
                        case 11:
                             break;
                        
                        default: 
                           cout<<"Invalid Choice!"<<endl;   
                        break;  
                    }
                }
                break;   

                case 3:
                { 
                    cout<<"\n&&&&&&&&&&&&&&&&&&&&&            CONVERSIONS          &&&&&&&&&&&&&&&&&"<<endl;
                    
                    cout<< "1. Temperature"<<endl;
                    cout<< "2. Length"<<endl;
                    cout<< "3. Weight"<<endl;
                    cout<< "4. Time"<<endl;

                    int conversionChoice;
                    cout<<"\nEnter your choice:";
                    cin>>conversionChoice;

                    switch(conversionChoice)
                    {
                        case 1:
                        {
                            cout<<"\nTemperature Conversion"<<endl;
                            cout<<"1. Celsius to Fahrenheit"<<endl;
                            cout<<"2. Fahrenheit to Celsius"<<endl;
                            cout<<"3. Celsius to Kelvin"<<endl;
                            cout<<"4. Kelvin to Celsius"<<endl;
                        
                            int tempChoice;
                            cout<<"Enter your choice:";
                            cin>>tempChoice;

                            switch(tempChoice)
                            {
                                case 1: 
                                {
                                   double cels,fahr;

                                   cout<<"Enter temperature in celsius:";
                                   cin>>cels;

                                   fahr=(cels*9/5)+32;

                                   cout<<cels<<" Celsius = "<<fahr<<" Fahrenheit "<<endl;
                                }
                                break;   
                                case 2:
                                {
                                    double fahr,cels;
 
                                    cout<<"Enter temperature in fahrenheit:";
                                    cin>>fahr;
                            
                                    cels=(fahr-32)*5/9;
                            
                                    cout<<fahr<<" Fahrenheit = "<<cels<<" Celsius"<<endl;
                                }
                                break;
                                case 3:
                                {
                                    double cels,kel;

                                    cout<<"Enter temperature in celsius:";
                                    cin>>cels;

                                    kel=cels+273.15;

                                    cout<<cels<<" Celsius = "<<kel<<" Kelvin "<<endl;
                                }
                                break;
                                case 4:
                                {
                                    double kel,cels;

                                    cout<<"Enter temperature in kelvin:";
                                    cin>>kel;

                                    if(kel<0)
                                   {
                                       cout<<"Invalid temperature"<<endl;
                                   }
                                   else
                                   { 
                                       cels=kel-273.15;

                                       cout<<kel<<" Kelvin = "<<cels<<" Celsius"<<endl;
                                    }
                                }
                                break;
                                default:
                                cout<<"Invalid Choice!"<<endl;      
                            }
                        }
                        break;    

                        case 2: 
                        {
                            cout<<"\nLength Conversion"<<endl;
                            cout<<"1. Meter to Feet"<<endl;
                            cout<<"2. Feet to Meter"<<endl;
                            cout<<"3. Meter to Inch"<<endl;
                            cout<<"4. Inch to Meter"<<endl;
                            cout<<"5. Centimeter to Inch"<<endl;
                            cout<<"6. Inch to Centimeter"<<endl;

                            int lengthChoice;
                            cout<<"Enter your choice:";
                            cin>>lengthChoice;

                            switch(lengthChoice)
                            {
                                case 1:
                                {
                                    double meter,feet;

                                    cout<<"Enter length in meters:";
                                    cin>>meter;

                                    feet=meter*3.28084;

                                    cout<<meter<<" meters = "<<feet<<" feet"<<endl;
                                }
                                break;
                                case 2:
                                {
                                    double feet,meter;

                                    cout<<"Enter length in feet:";
                                    cin>>feet;

                                    meter=feet/3.28084;

                                    cout<<feet<<" feet = "<<meter<<" meters"<<endl;
                                }
                                break;
                                case 3:
                                {
                                    double meter,inch;

                                    cout<<"Enter lenth in meters:";
                                    cin>>meter;

                                    inch=meter*39.3701;

                                    cout<<meter<<" meters = "<<inch<<" inches"<<endl;
                                }
                                break;
                                case 4:
                                {
                                    double inch,meter;

                                    cout<<"Enter length in inch:";
                                    cin>>inch;

                                    meter=inch/39.3701;

                                    cout<<inch<<" inches = "<<meter<<" meters"<<endl;
                                }
                                break;
                                case 5:
                                {
                                    double cm,inch;

                                    cout<<"Enter length in centimeter:";
                                    cin>>cm;

                                    inch=cm/2.54;

                                    cout<<cm<<" centimeters = "<<inch<<" inches"<<endl;
                                }
                                break;
                                case 6:
                                {
                                    double inch,cm;

                                    cout<<"Enter length in inch:";
                                    cin>>inch;

                                    cm=inch*2.54;

                                    cout<<inch<<" inches ="<<cm<<"centimeters"<<endl;
                                }
                                break;
                                default:
                                    cout<<"Invalid Choice"<<endl;    
                            }    
                        }    
                        break;

                        case 3:
                        {
                            cout<<"\nWeight Conversion"<<endl;
                            cout<<"1. Kilogram to Pound"<<endl;
                            cout<<"2. Kilogram to Ounce"<<endl;
                            cout<<"3. Pound to Ounce"<<endl;
                            cout<<"4. Pound to Kilogram"<<endl;
                            cout<<"5. Ounce to Kilogram"<<endl;
                            cout<<"6. Ounce to Pound"<<endl;

                            int weightChoice;
                            cout<<"Enter your choice:";
                            cin>>weightChoice;

                            switch(weightChoice)
                            {
                                case 1:
                                {
                                    double kg,pound;

                                    cout<<"Enter weight in kilogram:";
                                    cin>>kg;

                                    pound=kg*2.20462;

                                    cout<<kg<<" kilogram = "<<pound<<" pounds"<<endl;
                                }
                                break;
                                case 2:
                                {
                                    double kg,ounce;

                                    cout<<"Enter weight in kg:";
                                    cin>>kg;

                                    ounce=kg*35.274;

                                    cout<<kg<<" kilogram = "<<ounce<<" ounces"<<endl;
                                }
                                break;
                                case 3:
                                {
                                    double pound,ounce;

                                    cout<<"Enter weight in pounds:";
                                    cin>>pound;

                                    ounce=pound*16;

                                    cout<<pound<<" pounds = "<<ounce<<" ounces"<<endl;
                                }
                                break;
                                case 4:
                                {
                                    double pound,kg;

                                    cout<<"Enter weight in pounds:";
                                    cin>>pound;

                                    kg=pound/2.20462;

                                    cout<<pound<<" pounds = "<<kg<<" kilograms"<<endl;
                                }
                                break;
                                case 5:
                                {
                                    double ounce,kg;

                                    cout<<"Enter weight in ounces:";
                                    cin>>ounce;

                                    kg=ounce/35.274;

                                    cout<<ounce<<" ounces = "<<kg<<" kilograms"<<endl;
                                }
                                break;
                                case 6:
                                {
                                    double ounce,pound;

                                    cout<<"Enter weight in ounces:";
                                    cin>>ounce;

                                    pound=ounce/16;

                                    cout<<ounce<<" ounces = "<<pound<<" pounds"<<endl;
                                }
                                break;
                                default:
                                   cout<<"Invalid choice!"<<endl;
                                break;   
                            }
                        }    
                        break;
                        case 4:
                        {
                            cout<<"\nTime Conversion"<<endl;
                            cout<<"1. Seconds to Minutes"<<endl;
                            cout<<"2. Minutes to Hours"<<endl;
                            cout<<"3. Seconds to Hours"<<endl;
                            cout<<"4. Hours to seconds"<<endl;
                            cout<<"5. Minutes to seconds"<<endl;
                            cout<<"6. Hours to Minutes"<<endl;

                            int timeChoice;
                            cout<<"Enter your choice";
                            cin>>timeChoice;

                            switch(timeChoice)
                            {
                                case 1:
                                { 
                                    double sec,min;

                                    cout<<"Enter time in seconds:";
                                    cin>>sec;

                                    min=sec/60;

                                    cout<<sec<<" seconds = "<<min<<" minutes"<<endl;
                                }
                                break;
                                case 2:
                                {
                                    double min,hr;

                                    cout<<"Enter time in minutes:";
                                    cin>>min;

                                    hr=min/60;

                                    cout<<min<<" minutes = "<<hr<<" hours"<<endl;
                                }
                                break;
                                case 3:
                                {
                                    double sec,hr;

                                    cout<<"Enter time in seconds:";
                                    cin>>sec;

                                    hr=sec/3600;

                                    cout<<sec<<" seconds = "<<hr<<" hours"<<endl;
                                }
                                break;
                                case 4:
                                {
                                    double hr,sec;

                                    cout<<"Enter time in hours:";
                                    cin>>hr;

                                    sec=hr*3600;

                                    cout<<hr<<" hours = "<<sec<<" seconds"<<endl;
                                }
                                break;
                                case 5:
                                {
                                    double min,sec;

                                    cout<<"Enter time in minutes:";
                                    cin>>min;

                                    sec=min*60;

                                    cout<<min<<" minutes = "<<sec<<" seconds"<<endl;
                                }
                                break;
                                case 6:
                                {
                                    double hr,min;

                                    cout<<"Enter time in hours:";
                                    cin>>hr;

                                    min=hr*60;

                                    cout<<hr<<" hours = "<<min<<" minutes"<<endl;
                                }
                                break;
                                default :
                                cout<<"Invalid Choice!"<<endl;
                            }
                        }    
                        break;
                        default:
                        cout<< "Invalid choice! Please try again." << endl;
                    }    
                }
                break;    
            }
    }       
    return 0;
} 