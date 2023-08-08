
#ifndef ERRORS_H
#define ERRORS_H

// Errors -100 and lower cause the program to terminate
enum err_t {
	SUCCESS = 0,
	ERR_GENERIC = -1,   // Error occured (Uninformitive and genaric response that should be avoided)
	ERR_UNKNOWN = -2,   // Error occured (Unknown error; Typically used for errors from an external library or device that lack error codes or error handling)
	ERR_BAD_VALUE = -3, // A bad value was passed to a function such as a non-existant value in an enumeration

	ERR_TERMINATE = -100,     // When this 
}

#endif /** END: ERRORS_H */