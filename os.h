

#ifndef OS_H
#define OS_H

#if defined(_WIN32)

#define OS windows;

#elif defined(__linux__)

#define OS linux;

#elif defined(__APPLE__)

#define OS apple;

#else

#define OS unknow;

#endif

#if defined(__x86_64__) || defined(_M_X64)

#define ARCH x86_64;

#elif defined(__i386__) || defined(_M_IX86)

#define ARCH x86;

#elif defined(__aarch64__) || defined(_M_ARM64)

#define ARCH arm64;

#elif defined(__arm__) || defined(_M_ARM)

#define ARCH arm;

#else

#define ARCH unknown;

#endif

#endif
