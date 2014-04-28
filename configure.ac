AC_INIT(ocelot, 0.8)
AM_INIT_AUTOMAKE([1.11 no-define foreign])

dnl Checks for programs.
AC_PROG_CXX

dnl predefined macros from m4 directory
AX_CHECK_COMPILE_FLAG([-std=c++11], [], [AC_MSG_ERROR([Compiler does not support -std=c++11])])
AX_BOOST_BASE([1.37], [], [AC_MSG_ERROR(Need boost >= 1.37)])
AX_BOOST_IOSTREAMS
AX_BOOST_SYSTEM
AX_BOOST_THREAD
MYSQL_C_API_LOCATION
AC_LANG_PUSH(C++)
MYSQLPP_DEVEL
EV_DEVEL
AC_LANG_POP(C++)
TCMALLOC

dnl Checks for header files.
AC_CHECK_HEADERS([arpa/inet.h fcntl.h netinet/in.h sys/socket.h unistd.h])

dnl Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL
AC_TYPE_SIZE_T
AC_TYPE_UINT64_T

dnl Checks for library functions.
AC_FUNC_ERROR_AT_LINE
AC_CHECK_FUNCS([memset socket strerror])

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
