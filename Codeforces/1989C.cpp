#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;

        vector<int> arrA(size), arrB(size);

        for (int i = 0; i < size; i++)
            cin >> arrA[i];
        for (int i = 0; i < size; i++)
            cin >> arrB[i];

        int posCount = 0, negCount = 0;

        for (int i = 0; i < size; i++)
        {
            if (arrA[i] == arrB[i])
            {
                if (arrA[i] == -1)
                {
                    negCount--;
                }
                else if (arrA[i] == 1)
                {
                    posCount++;
                }
            }
        }

        int sumA = 0, sumB = 0;

        for (int i = 0; i < size; i++)
        {
            if (arrA[i] == arrB[i])
                continue;

            if (arrA[i] > arrB[i])
            {
                sumA += arrA[i];
            }
            else
            {
                sumB += arrB[i];
            }
        }

        if (sumA > sumB)
            swap(sumA, sumB);

        int remPos = posCount;
        int diff = min(sumB - sumA, remPos);
        sumA += diff;
        remPos -= diff;
        int halfRem = remPos / 2;
        remPos -= halfRem;
        sumA += max(halfRem, remPos);
        sumB += min(halfRem, remPos);

        if (sumA > sumB)
            swap(sumA, sumB);

        int remNeg = negCount;
        diff = max(sumA - sumB, remNeg);
        sumB += diff;
        remNeg -= diff;
        halfRem = remNeg / 2;
        remNeg -= halfRem;
        sumA += max(halfRem, remNeg);
        sumB += min(halfRem, remNeg);

        cout << min(sumA, sumB) << endl;
    }

    return 0;
}
