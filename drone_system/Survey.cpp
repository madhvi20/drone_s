#include "Survey.h"
#include <iostream>  // Include iostream for cout

void Survey::conductSurvey(const std::vector<int>& path) {
    std::cout << "Surveying path: ";
    for (const auto& node : path) {
        std::cout << node << " ";
    }
    std::cout << std::endl;
}
