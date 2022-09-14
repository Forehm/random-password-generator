










std::string RandPass(int number_of_symbols)
{
	srand(time(NULL));
	char arr[] = { 'q', 'w', 'e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m','1','2','3','4','5','6','7','8','9','0' };
	std::string pass;

	for (int i = 0; i < number_of_symbols; i++)
	{
		pass += arr[rand() % 36];
	}


	return pass;
}



