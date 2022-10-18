#include "pch.h"
#include "test.h"
#include "Header.h"

TEST(TestCaseEins, TestName) {
	int x = 12, y = 15;
	x *= 23;
	y /= 5;
	x += 10;
	y -= 1;
	std::cout << x % y << std::endl;
	std::string t1 = "Hallo ";
	std::string t2 = "Welt!\n";
	std::string t3 = t1 + t2;
	std::cout << t3 << std::endl;
}

TEST(TestCaseZwei, TestName) {
	float a = 2.0;
	float b = 0.0;
	a += 2.0;
	a *= 3.0;
	b++;
	--a;
	a--;
	std::cout << std::to_string(a) + "\t" << b << std::endl;
}

TEST(TestCaseDrei, Testaddinsteps) {
	EXPECT_EQ(1683, addinsteps(0,100,3));
}

TEST(TestCaseDrei, TestNamefour) {
	int summe = 0;
	for (int i = -100; i <= 100; i++) {
		if (pow(i, 2) < 256) summe += abs(i);
	}
	EXPECT_EQ(240, summe);
}

TEST(TestCaseDrei, Test_negative_randoms)
{
	int number_of_randoms = -5;
	std::vector<int> randoms;
	EXPECT_THROW(randoms = get_n_randoms(number_of_randoms),std::invalid_argument);
	EXPECT_EQ(randoms.size(), 0);
}

TEST(TestCaseDrei, Test_n_randoms)
{
	int number_of_randoms = rand() % 100;
	std::vector<int> randoms = get_n_randoms(number_of_randoms);
	//output(randoms);
	EXPECT_EQ(number_of_randoms, randoms.size());
}


TEST(TestCaseDrei, Testboolfunctions) {
	EXPECT_TRUE(iseven(4));
	EXPECT_FALSE(iseven(5));
	EXPECT_TRUE(isodd(5));
	EXPECT_FALSE(isodd(6));
}

TEST(TestCaseDrei, Test_after_eraseodds_allareeven) {
	std::vector<int> randoms = get_n_randoms(10);
	eraseodds(randoms);
	for (int n : randoms) EXPECT_TRUE(iseven(n));
	
}

