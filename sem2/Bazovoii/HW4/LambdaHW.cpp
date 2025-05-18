#include <vector>
#include <iostream>

int main()
{
    std::vector <std::string> strs = { "kakashke", "bugagashke" }; 
    auto count_char = [](const std::vector<std::string>& strings) { 
        std::vector <size_t> lengts;
        for (const auto& str : strings) {
            lengts.push_back(str.size());
        }
        return lengts;
        };
    std::vector<size_t> res = count_char(strs);
    for (size_t len : res) {
        std::cout << len << " " << std::endl;
    }
}

