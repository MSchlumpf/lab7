/* Lab7
 * 
 */

#include<iostream>
#include<cmath>
#include<fstream>

using namespace std;

void func(double y1, double y2, double* f, const double& eta);

int main(){
  const double eta = 0.5, xstart = 0, xend = 100, dx = 0.1;
  int N = (xend-xstart)/dx+1;
  double k[6], y[2], f[2];
  y[0] = 1E-5;
  y[1] = sqrt(eta)*y[0];
  
  ofstream out("data.txt");
  out << xstart << "\t" << y[0] << "\t" << y[1] << "\t" << sqrt(2*eta)/cosh(-17.2) << endl;
  
  for(int i=0; i<N; i++){

    func(y[0], y[1], f, eta);
    k[0] = f[0];
    k[1] = f[1];
    
    func(y[0]+dx*0.5*k[0], y[1]+dx*0.5*k[1], f, eta);
    k[2] = f[0];
    k[3] = f[1];
    
    func(y[0]+dx*(-1*k[0]+2*k[2]), y[1]+dx*(-1*k[1]+2*k[3]), f, eta);
    k[4] = f[0];
    k[5] = f[1];
    
    y[0] += dx/6*(k[0]+4*k[2]+k[4]);
    y[1] += dx/6*(k[1]+4*k[3]+k[5]);
    
    out << i*dx << "\t" << y[0] << "\t" << y[1] << "\t"<< sqrt(2*eta)/cosh(sqrt(eta)*(i*dx-17.2)) <<endl;
  }
  out.close();
  return 0;
}


void func(double y1, double y2, double* f, const double& eta){

f[0] = y2;
f[1] = (eta-y1*y1)*y1;
  
  
}