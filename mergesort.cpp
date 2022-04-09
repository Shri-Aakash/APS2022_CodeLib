#include<bits/stdc++.h>
using namespace std;
template <typename T>
void merge(T * a, size_t begin, size_t center, size_t end) {
	std::size_t i = begin, j = center+1, t = 0;  
	T* buf = new T[end-begin+1];

	while (i <= center && j <= end) {
		if (a[i] < a[j])
			buf[t++] = a[i++];
		else
			buf[t++] = a[j++];
	}

	while (j <= end)	buf[t++] = a[j++];
	while (i <= center)	buf[t++] = a[i++];

	for (t = 0; t < end-begin+1; t++)
		a[begin+t] = buf[t];

	delete [] buf;
}

template <typename T>
void merge_sort(T* a, size_t begin, size_t end) {
	if (begin < end) {
		std::size_t split = (begin+end)/2;
		merge_sort(a, begin, split);
		merge_sort(a, split+1, end);
		merge(a, begin, split, end);
	}
}