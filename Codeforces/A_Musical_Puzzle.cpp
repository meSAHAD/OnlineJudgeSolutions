#include <iostream>
#include <string>
#include <unordered_set>

int calculateMinMelodies(const std::string& melody) {
std::unordered_set<std::string> uniqueSequences;

for (int i = 0; i < melody.length() - 1; i++) {
 std::string sequence = melody.substr(i, 2);
 uniqueSequences.insert(sequence);
}

return uniqueSequences.size();
}

int main() {
int t;
std::cin >> t;

while (t--) {
 int n;
 std::string melody; std::cin >> n >> melody;

int minMelodies = calculateMinMelodies(melody);
std::cout << minMelodies << std::endl;
}
 return 0;
}