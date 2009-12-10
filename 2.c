int fun()
{
}

int main(void)
{

	int i = 0, j=0; 
	unsigned int sum = 0;
	for ( i=0; i<10; i++ ) {
		j += i;
	}

	sum = j;
	fun();
	return sum;

}	
