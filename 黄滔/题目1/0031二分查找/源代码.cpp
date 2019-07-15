
Position BinarySearch( List L, ElementType X ){
	int left,right,mid;
	left=1;
	right=L->Last;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(L->Data[mid]>X)
			right=mid-1;
		else if(L->Data[mid]<X)
			left=mid+1;
		else return mid;
	}
	return NotFound;
}
