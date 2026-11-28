template<class... Ts>
struct common_comparison_category;

template<class... Ts>
using common_comparison_category_t =
    typename common_comparison_category<Ts...>::type;
