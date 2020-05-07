def hoare_recur(a, left, right, pivot):
    if left>right:
        return right
    else:
        if a[left] > pivot and a[right] <= pivot:
            temp = a[left]
            a[left] = a[right]
            a[right] = temp
            return hoare_recur(a,left+1, right-1,pivot)
        else:

            if a[left] <= pivot:
                left = left+1
            if a[right] > pivot:
                right = right -1
            return hoare_recur(a, left, right, pivot)

def hoare_recur_wrapper(a, lower, upper):
    if upper>=0:
        middle = (lower + upper) //2
        pivot = a[middle]
        a[middle] = a[lower]
        a[lower] = pivot

        right = hoare_recur(a, lower+1, upper, pivot)

        a[lower] = a[right]
        a[right] = pivot

        return right

if __name__ == '__main__':
    n = int(input("Enter number of elements : "))
    a = list(map(int,input("\nEnter the numbers : ").strip().split()))[:n]
    hoare_recur_wrapper(a, 0, len(a)-1)
    print(a)
