void shift(int a[], int n) {
	int i;
	for (i = 0; i != n-1; i++)
		a[i] = a[i + 1];
}