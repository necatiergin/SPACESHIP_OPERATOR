#include <compare>

struct Nec {
    int x;
    auto operator<=>(const Nec&) const = default;
};

static_assert(noexcept(Nec{} <=> Nec{}));
