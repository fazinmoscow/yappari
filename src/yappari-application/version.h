#define STR_HELPER(x) #x
#define STR(x) STR_HELPER(x)

#define BUILD_NUMBER 4815
#define VERSION "1.1.53"
#define FULL_VERSION VERSION " Build " STR(BUILD_NUMBER)
