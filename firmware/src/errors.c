#include "errors.h"


inline void CATCH(err_t err) {
	if (err <= -100) {
		terminate();
	}

	switch (err) {
		case ERR_GENERIC:
			break;
		case ERR_UNKNOWN:
			break;
		default:
			break;
	}
}


// Called when error handling fails
void terminate() {
	// TODO: Call system restart
}