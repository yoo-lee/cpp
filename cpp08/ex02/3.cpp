template <class InputIterator>
typename std::iterator_traits<InputIterator>::difference_type
    distance_impl(InputIterator first, InputIterator last,
                  std::input_iterator_tag)
{
  using result_type = typename std::iterator_traits<InputIterator>::difference_type;

  result_type n = 0;
  for (; first != last; ++first) {
    ++n;
  }
  return n;
}

template <class RandomAccessIterator>
typename std::iterator_traits<RandomAccessIterator>::difference_type
    distance_impl(RandomAccessIterator first, RandomAccessIterator last,
                  std::random_access_iterator_tag)
{
  return last - first;
}

template <class InputIterator>
typename std::iterator_traits<InputIterator>::difference_type
    distance(InputIterator first, InputIterator last)
{
  return distance_impl(first, last,
              typename std::iterator_traits<InputIterator>::iterator_category());
}