// aimp_web_ctl.cpp: ���������� ���������������� ������� ��� ���������� DLL.
//

#include "stdafx.h"
#include "aimp_web_ctl.h"

static AIMP2WebControlHeader header;

// ��������������
BOOL WINAPI AIMP_QueryAddonEx(IAIMPAddonHeader **newAddon)
{
	*newAddon = new AIMP2WebControlHeader();
	return TRUE;
}