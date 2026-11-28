#include <compare>
#include <type_traits>

using T1 = std::common_comparison_category_t<
    std::strong_ordering,
    std::weak_ordering>;

static_assert(
    std::is_same_v<T1, std::weak_ordering>);

using T2 = std::common_comparison_category_t<
    std::strong_ordering,
    std::partial_ordering>;

static_assert(
    std::is_same_v<T2, std::partial_ordering
