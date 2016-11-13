#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "Vtop.h"
#include "Vtop__Syms.h"
using namespace std;

int main () {
  int x;
  int branch_not_cov=0;
  Vtop* circuit = new Vtop();
  string line;
  ifstream myfile ("lev_vec.vec");
  
  getline(myfile, line);
  float coverage;
  int n= atoi(line.c_str());
 
  
  getline(myfile, line);
  vector<bool> bitset(n, false);
  while (line!="END"){
	 
	  

circuit->sim_init();
char *fileName = (char*)line.c_str();
for(int s=0;s<n;s++)
{
if(fileName[s]=='0')
{
	bitset[s]= false;
}
else
{
	bitset[s]=true;
}	
}


circuit-> set_input_with_reset(bitset);
circuit-> eval();
circuit-> toggle_clock();
circuit-> eval();
circuit->toggle_clock();
	  getline(myfile, line);
	}
	int cov_pts=circuit->num_branch_cov_pts();
	
	for(int branch=0;branch<cov_pts;branch++)
	{
	x=circuit->get_cov_pt_value(branch)	;
	
	if(x==0){
		branch_not_cov++;
		}
	}
	
	
	coverage=(float)(((float)cov_pts-(float)branch_not_cov)/(float)cov_pts)*(float)100;
    cout << "Branch coverage of the circuit in % = " << coverage << endl;
    
}
