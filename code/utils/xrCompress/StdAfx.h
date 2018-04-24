#pragma once

//. #define MOD_COMPRESS

#include "../../xrcore/xrCore.h"
#include "../../3rd-party/lzo/lzo1x.h"
#include "../../3rd-party/zlib/zlib.h"
#include "../../3rd-party/lzo/lzo1z.h"
#include <mmsystem.h>

#pragma warning	(disable:4995)
#include <io.h>
#include <direct.h>
#include <fcntl.h>
#include <sys\stat.h>
#include <malloc.h>
#pragma warning	(default:4995)

#pragma comment	(lib,"xrCore.lib")
#pragma comment	(lib,"winmm")