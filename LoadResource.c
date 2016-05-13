
HRSRC hRsrc = FindResource(NULL, MAKEINTRESOURCEA(IDR_RCEXE), TEXT("RCEXE"));
DWORD dwSize = SizeofResource(NULL, hRsrc); 
HGLOBAL hGlobal = LoadResource(NULL, hRsrc);
LPVOID pBuffer = LockResource(hGlobal); //在内存中锁定资源，其返回值即为一个指向资源第一个字节的指针

FILE* fp = fopen("C:\\Users\\Phtih0n\\AppData\\Local\\Temp\\tmp100.exe", "wb");
		if (fp != NULL)
		{
			fwrite(pBuffer, sizeof(char), dwSize, fp)
			fclose(fp);
		}
		