从graphics.h找到easyx.h,
在#pragma once下面必须加上以下语句:

void *__imp___iob_func=0;	//for cmake +mingw64+vscode 