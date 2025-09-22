#include <iostream>
#include "external_sort.h"

int main() {
    std::cout << "ExternalSorting demo running...\n";

    // 示例：调用占位接口
    external_sort::Version version;
    std::cout << "Library version: " << version.major << "." << version.minor << "." << version.patch << "\n";

    return 0;
}
