/**
 * hash_djb2- a hash function implementing the djb2 algorithm
 * @str: pointer for string to calculate hash value
 * Return: unsigned long int of hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
