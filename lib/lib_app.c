#include <stddef.h>

#include "lib_app.h"

/* function which switch two values
 * return 0 if SUCCESS
 * return -1 if FAIL
 */
int switchDataAPI (int *ptrA, int *ptrB) {
	int ret = -1;
	if ((NULL != ptrA) && (NULL != ptrB)) {
		int _tmp = *ptrA;
		*ptrA = *ptrB;
		*ptrB = _tmp;
		ret = 0;
	}
	return ret;
}
