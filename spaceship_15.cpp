#include <compare>
#include <type_traits>

using S = std::strong_ordering;
using W = std::weak_ordering;
using P = std::partial_ordering;

static_assert(std::is_convertible_v<S, W>);
static_assert(std::is_convertible_v<S, P>);
static_assert(std::is_convertible_v<W, P>);

static_assert(!std::is_convertible_v<W, S>);
static_assert(!std::is_convertible_v<P, W>);
static_assert(!std::is_convertible_v<P, S>);
