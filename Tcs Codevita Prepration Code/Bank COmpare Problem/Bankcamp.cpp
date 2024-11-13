/*Question – : There are two banks – Bank A and Bank B. Their interest rates vary. 
You have received offers from both banks in terms of the annual rate of interest, 
tenure, and variations of the rate of interest over the entire tenure.You have to 
choose the offer which costs you least interest and reject the other. Do the 
computation and make a wise choice.

The loan repayment happens at a monthly frequency and Equated Monthly Installment 
(EMI) is calculated using the formula given below :

EMI = loanAmount * monthlyInterestRate / ( 1 – 1 / (1 + monthlyInterestRate)^(numberOfYears * 12))
*/

#include  <iostream> 
#include  <math.h> 
using namespace std;
int main() 
{
double p,s,mi,sum,emi,bank[5],sq;
int y,n,k,i,yrs,l=0;

cin>>p;
cin>>y;
for(k=0;k<2;k++) { cin>>n;
sum=0;
for(i=0;i<n;i++) { cin>>yrs;
  cin>>s;
  mi=0;
  sq=pow((1+s),yrs*12);
  emi= (p*(s))/(1-1/sq);
  sum= sum + emi;
}
bank[l++]=sum;

}

if(bank[0]<bank[1])

cout<<("Bank A");

else

cout<<("Bank B");

return 0;

}