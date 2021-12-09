#include <iostream>

std::ostream llllll(std::cout.rdbuf());
template <typename lllll1, typename llll1l>
void llll11(lllll1& lll1ll, llll1l const& lll1l1)
{
	lll1ll << lll1l1;
}
char lll11l[] = "\n!dfloUHraWeKoqS(lP$ )bzJ%l";
template <int lll111>
auto ll1lll() -> void
{
	llll11(llllll, lll11l[lll111]);
	ll1lll<!(lll111 % 2) ? (lll111 / 2) : ((3 * lll111 + 1) / 2)>();
}
template <>
auto ll1lll<1>() -> void
{
	llll11(llllll, lll11l[1]);
	llll11(llllll, lll11l[0]);
}
int main()
{
	ll1lll<7>();
}