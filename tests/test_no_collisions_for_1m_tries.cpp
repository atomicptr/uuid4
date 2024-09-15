#include "test_base.hpp"

#include <algorithm>
#include <unordered_map>
#include <string>

int main() {
    const auto num_attempts = 1'000'000;
  
    std::unordered_map<std::string, bool> attempts;

    for (auto i = 0; i < num_attempts; i++) {
        auto uuid = uuid4::generate();
        assert(!attempts.contains(uuid), "uuid should not be inside of attempts yet (UUID: {}, index: {})", uuid, i);
        attempts[uuid] = true;
    }
}
