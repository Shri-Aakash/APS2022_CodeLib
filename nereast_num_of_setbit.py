def setBitNumber(n):
	if (n == 0):
		return 0

	msb = 0
	n = int(n / 2)

	while (n > 0):
		n = int(n / 2)
		msb += 1

	return (1 << msb)

n = 10
print(setBitNumber(n))