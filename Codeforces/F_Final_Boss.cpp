#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long heroHealth, numAttacks;
        cin >> heroHealth >> numAttacks;
        vector<long long> attackValues(numAttacks), cooldowns(numAttacks);

        for (auto &val : attackValues)
        {
            cin >> val;
        }

        for (auto &val : cooldowns)
        {
            cin >> val;
        }

        map<long long, long long> attackMap;
        for (int i = 0; i < numAttacks; i++)
        {
            attackMap[cooldowns[i]] += attackValues[i];
        }

        long long totalAttack = 0;
        for (const auto &val : attackValues)
        {
            totalAttack += val;
        }

        heroHealth -= totalAttack;
        if (heroHealth <= 0)
        {
            cout << 1 << endl;
            continue;
        }

        long long left = 0, right = 1e12;
        long long answer = 0;
        while (left <= right)
        {
            long long mid = left + (right - left) / 2;
            long long remainingHealth = heroHealth;
            for (const auto &attack : attackMap)
            {
                if (remainingHealth <= 0)
                    break;
                remainingHealth -= (mid / attack.first) * attack.second;
            }

            if (remainingHealth > 0)
            {
                left = mid + 1;
            }
            else
            {
                answer = mid;
                right = mid - 1;
            }
        }
        cout << answer + 1 << endl;
    }
    return 0;
}