#include <iostream>

template<class T, int N>
class Pool
{
private:
	int available;
	T* data;
public:
	int getAvailable() const
	{
		return available;
	}
	Pool()
	{
		available = N;
		data = new T[N];
	}
	T* get()
	{
		available--;
		return &data[N - available + 1];
	}
	void free(T* data)
	{
		available++;
	}
};