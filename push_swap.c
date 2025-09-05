int	main(int argc, char **argv)
{
	if (argc == 1)
		return (write(2, "Error", 6), 1);
	return (0);
}