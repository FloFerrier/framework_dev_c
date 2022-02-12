#include "unity.h"
#include "lib_app.h" /* The unit to be tested. */

/* Is run before every test, put unit init calls here. */
void setUp (void) {

}

/* Is run after every test, put unit clean-up calls here. */
void tearDown (void) {

}

void test_fakeAPI (void) {
	int a = 1;
	int b = 2;
	TEST_ASSERT_EQUAL_INT(0, fakeAPI(&a, &b));
	TEST_ASSERT_EQUAL_INT(2, a);
	TEST_ASSERT_EQUAL_INT(1, b);
	TEST_ASSERT_EQUAL_INT(-1, fakeAPI(NULL, NULL));
}

int main (void) {
	UNITY_BEGIN();
	RUN_TEST(test_fakeAPI); /* Run the test. */
	return UNITY_END();
}
