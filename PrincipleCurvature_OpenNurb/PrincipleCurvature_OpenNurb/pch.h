﻿// pch.h: 此為先行編譯的標頭檔。
// 以下所列檔案只會編譯一次，可改善之後組建的組建效能。
// 這也會影響 IntelliSense 效能，包括程式碼完成以及許多程式碼瀏覽功能。
// 但此處所列的檔案，如果其中任一在組建之間進行了更新，即會重新編譯所有檔案。
// 請勿於此處新增會經常更新的檔案，如此將會對於效能優勢產生負面的影響。

#ifndef PCH_H
#define PCH_H

// 請於此新增您要先行編譯的標頭
#include "framework.h"

// defining OPENNURBS_PUBLIC_INSTALL_DIR enables automatic linking using pragmas
#define OPENNURBS_PUBLIC_INSTALL_DIR "D:\C++&Java\opennurbs-7.x"
// uncomment the next line if you want to use opennurbs as a DLL
//#define OPENNURBS_IMPORTS
#include "D:\C++&Java\opennurbs-7.x\opennurbs_public.h"


#endif //PCH_H
