

void Sortlist
{

}

merge()

void mergelist(std::list<int> &a, int l, int r)
{
	if (r - l > k)
	{

	int m = (l + r) /2;
	mergelist(a, r, m);
	mergelist(a, l + 1, r);

	mergelist(a,m , l, r)
	}else
	

	 
}