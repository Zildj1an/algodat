////////////////////////////////////////////////////////////////////////////
// HEAPSORT ////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

MAX-HEAPIFY(A,i)
  l = LEFT(i)
  r = RIGHT(i)
  if l <= A.heap-size and A[l] > A[i]
    largest = l
  else largest = i
  if r <= A.heap-size and A[r] > A[largest]
    largest = r
  if largest != i
    exchange A[i] with A[largest]
    MAX-HEAPIFY(A,largest)

BUILD-MAX-HEAP(A)
  A.heap-size = A.length
  for i = [A.length/2] downto 1
    MAX-HEAPIFY(A,i)

HEAPSORT(A)
  BUILD-MAX-HEAP(A)
  for i = A.length downto 2
    exchange A[1] with A[i]
    A.heap-size = A.heap-size - 1
    MAX-HEAPIFY(A,1)
