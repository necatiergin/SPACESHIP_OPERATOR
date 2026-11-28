#include <compare>

struct Date {
    int year;
    int month;
    int day;

    auto operator<=>(const Date&) const = default;

    /* 
    model for compiler generated code
    auto operator<=>(const Date& other) const
    {
        if (auto cmp = year <=> other.year; cmp != 0)
            return cmp;

        if (auto cmp = month <=> other.month; cmp != 0)
            return cmp;

        if (auto cmp = day <=> other.day; cmp != 0)
            return cmp;

        return std::strong_ordering::equal;
    }

    */

};
