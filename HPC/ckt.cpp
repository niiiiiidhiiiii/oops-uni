


#include <string_view>

std::size_t findFirstChar(std::string_view string, char ch)
{
    for (std::size_t index{ 0 }; index < string.length(); ++index)
    {
        if (string[index] == ch)
            return index;
    }

    return std::string_view::npos;
}