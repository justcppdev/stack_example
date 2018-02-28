#ifndef STACK_HPP
#define STACK_HPP

template <typename T>
class stack
{
public:
	using size_type = std::size_t;

	stack();
	~stack();
	bool empty() const;
private:
	T * m_ptr;
	size_type m_size;
	size_type m_count;
};

template <typename T>
stack<T>::stack() :
	m_ptr{ nullptr },
	m_size{ 0UL },
	m_count{ 0UL }
{
}

template <typename T>
stack<T>::~stack()
{
	delete [] m_ptr;
}

template <typename T>
bool stack<T>::empty() const
{
	return m_count == 0;
}

#endif
