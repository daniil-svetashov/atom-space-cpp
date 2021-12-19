#include <iostream>

int main()
{

    int ar[] = { 3,5,12,24,52,64,72,75,82,92,119,134,156,159,189,192 };
    const int LENGHT=sizeof(ar) / sizeof(*ar);
    int left=0, right=LENGHT-1;//this are the left and the right borders of the part of the array in which
    //we are searching for the element.
    int searchElement;
    std::cout << "Enter the element which you are searching: ";
    std::cin >> searchElement;
    
    while (true)
    {
        int middle = (left + right) / 2;
        if (searchElement == ar[middle])
        {
            std::cout << "This element is in array, it`s index is: " << middle << std::endl;
            break;
        }
        else if (searchElement>ar[middle])
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
     
        if (left > right)
        {
            std::cout << "There is no element " << searchElement << " in the array" << std::endl;
            break;
        }
    }

    return 0;
}
