// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifndef PCH_H
#define PCH_H

// 請於此新增您要先行編譯的標頭
#include "framework.h"

//Define OPENNURBS_OUT_DIR
#if defined (WIN64)
#if defined (_DEBUG)
#define OPENNURBS_OUTPUT_DIR "C:\Users\Username\Desktop\opennurbs-7.x\bin\Win32\Debug"
#else
#define OPENNURBS_OUTPUT_DIR "C:\Users\Username\Desktop\opennurbs-7.x\bin\Win32\Release"
#endif
#else
#if defined(_DEBUG)
#define OPENNURBS_OUTPUT_DIR "C:\Users\Username\Desktop\opennurbs-7.x\bin\x64\Debug"
#else
#define OPENNURBS_OUTPUT_DIR "C:\Users\Username\Desktop\opennurbs-7.x\bin\x64\Release"
#endif
#endif

#include "D:\C++&Java\opennurbs-7.x\opennurbs_public_examples.h"

#endif //PCH_H
