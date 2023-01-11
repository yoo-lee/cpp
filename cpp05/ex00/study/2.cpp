#include <stdio.h>

bool verbose;
int setVerbose(bool v)
{
    // errormsg = "";
    verbose = v;
    if (verbose == v)
        return 0;
    else
        return -1;
}

int main ()
{
	if(setVerbose(verbose))
	{
		return(0);
	}
	else
	return(1);
}