nt MinThree( int x, int y, int z )
{
	int min;
	if (x >= y) {
		if (y >= z) {
			min = z;
		}
		else {
			min = y;
			}
		}
	else {
		if (x >= z) {
			min = z;
		}
		else {
			min = x;
		}
	}
	return min;
}