IFNDEF SHLWAPI_INC
SHLWAPI_INC equ <1>

PROTO64 external,AssocCreate, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AssocGetPerceivedType, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AssocIsDangerous, :QWORD
PROTO64 external,AssocQueryKeyA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AssocQueryKeyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AssocQueryStringA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AssocQueryStringByKeyA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AssocQueryStringByKeyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AssocQueryStringW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ChrCmpIA, :QWORD,:QWORD
PROTO64 external,ChrCmpIW, :QWORD,:QWORD
PROTO64 external,ColorAdjustLuma, :QWORD,:QWORD,:QWORD
PROTO64 external,ColorHLSToRGB, :QWORD,:QWORD,:QWORD
PROTO64 external,ColorRGBToHLS, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ConnectToConnectionPoint, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetAcceptLanguagesA, :QWORD,:QWORD
PROTO64 external,GetAcceptLanguagesW, :QWORD,:QWORD
PROTO64 external,GetMenuPosFromID, :QWORD,:QWORD
PROTO64 external,HashData, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IStream_Copy, :QWORD,:QWORD,:QWORD
PROTO64 external,IStream_Read, :QWORD,:QWORD,:QWORD
PROTO64 external,IStream_ReadPidl, :QWORD,:QWORD
PROTO64 external,IStream_ReadStr, :QWORD,:QWORD
PROTO64 external,IStream_Reset, :QWORD
PROTO64 external,IStream_Size, :QWORD,:QWORD
PROTO64 external,IStream_Write, :QWORD,:QWORD,:QWORD
PROTO64 external,IStream_WritePidl, :QWORD,:QWORD
PROTO64 external,IStream_WriteStr, :QWORD,:QWORD
PROTO64 external,IUnknown_AtomicRelease, :QWORD
PROTO64 external,IUnknown_GetSite, :QWORD,:QWORD,:QWORD
PROTO64 external,IUnknown_GetWindow, :QWORD,:QWORD
PROTO64 external,IUnknown_QueryService, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IUnknown_Set, :QWORD,:QWORD
PROTO64 external,IUnknown_SetSite, :QWORD,:QWORD
PROTO64 external,IntlStrEqWorkerA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IntlStrEqWorkerW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IsCharSpaceA, :QWORD
PROTO64 external,IsCharSpaceW, :QWORD
PROTO64 external,IsInternetESCEnabled, 
PROTO64 external,IsOS, :QWORD
PROTO64 external,MLLoadLibraryA, :QWORD,:QWORD,:QWORD
PROTO64 external,MLLoadLibraryW, :QWORD,:QWORD,:QWORD
PROTO64 external,ParseURLA, :QWORD,:QWORD
PROTO64 external,ParseURLW, :QWORD,:QWORD
PROTO64 external,PathAddBackslashA, :QWORD
PROTO64 external,PathAddBackslashW, :QWORD
PROTO64 external,PathAddExtensionA, :QWORD,:QWORD
PROTO64 external,PathAddExtensionW, :QWORD,:QWORD
PROTO64 external,PathAppendA, :QWORD,:QWORD
PROTO64 external,PathAppendW, :QWORD,:QWORD
PROTO64 external,PathBuildRootA, :QWORD,:QWORD
PROTO64 external,PathBuildRootW, :QWORD,:QWORD
PROTO64 external,PathCanonicalizeA, :QWORD,:QWORD
PROTO64 external,PathCanonicalizeW, :QWORD,:QWORD
PROTO64 external,PathCombineA, :QWORD,:QWORD,:QWORD
PROTO64 external,PathCombineW, :QWORD,:QWORD,:QWORD
PROTO64 external,PathCommonPrefixA, :QWORD,:QWORD,:QWORD
PROTO64 external,PathCommonPrefixW, :QWORD,:QWORD,:QWORD
PROTO64 external,PathCompactPathA, :QWORD,:QWORD,:QWORD
PROTO64 external,PathCompactPathExA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PathCompactPathExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PathCompactPathW, :QWORD,:QWORD,:QWORD
PROTO64 external,PathCreateFromUrlA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PathCreateFromUrlAlloc, :QWORD,:QWORD,:QWORD
PROTO64 external,PathCreateFromUrlW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PathFileExistsA, :QWORD
PROTO64 external,PathFileExistsW, :QWORD
PROTO64 external,PathFindExtensionA, :QWORD
PROTO64 external,PathFindExtensionW, :QWORD
PROTO64 external,PathFindFileNameA, :QWORD
PROTO64 external,PathFindFileNameW, :QWORD
PROTO64 external,PathFindNextComponentA, :QWORD
PROTO64 external,PathFindNextComponentW, :QWORD
PROTO64 external,PathFindOnPathA, :QWORD,:QWORD
PROTO64 external,PathFindOnPathW, :QWORD,:QWORD
PROTO64 external,PathFindSuffixArrayA, :QWORD,:QWORD,:QWORD
PROTO64 external,PathFindSuffixArrayW, :QWORD,:QWORD,:QWORD
PROTO64 external,PathGetArgsA, :QWORD
PROTO64 external,PathGetArgsW, :QWORD
PROTO64 external,PathGetCharTypeA, :QWORD
PROTO64 external,PathGetCharTypeW, :QWORD
PROTO64 external,PathGetDriveNumberA, :QWORD
PROTO64 external,PathGetDriveNumberW, :QWORD
PROTO64 external,PathIsContentTypeA, :QWORD,:QWORD
PROTO64 external,PathIsContentTypeW, :QWORD,:QWORD
PROTO64 external,PathIsDirectoryA, :QWORD
PROTO64 external,PathIsDirectoryEmptyA, :QWORD
PROTO64 external,PathIsDirectoryEmptyW, :QWORD
PROTO64 external,PathIsDirectoryW, :QWORD
PROTO64 external,PathIsFileSpecA, :QWORD
PROTO64 external,PathIsFileSpecW, :QWORD
PROTO64 external,PathIsLFNFileSpecA, :QWORD
PROTO64 external,PathIsLFNFileSpecW, :QWORD
PROTO64 external,PathIsNetworkPathA, :QWORD
PROTO64 external,PathIsNetworkPathW, :QWORD
PROTO64 external,PathIsPrefixA, :QWORD,:QWORD
PROTO64 external,PathIsPrefixW, :QWORD,:QWORD
PROTO64 external,PathIsRelativeA, :QWORD
PROTO64 external,PathIsRelativeW, :QWORD
PROTO64 external,PathIsRootA, :QWORD
PROTO64 external,PathIsRootW, :QWORD
PROTO64 external,PathIsSameRootA, :QWORD,:QWORD
PROTO64 external,PathIsSameRootW, :QWORD,:QWORD
PROTO64 external,PathIsSystemFolderA, :QWORD,:QWORD
PROTO64 external,PathIsSystemFolderW, :QWORD,:QWORD
PROTO64 external,PathIsUNCA, :QWORD
PROTO64 external,PathIsUNCServerA, :QWORD
PROTO64 external,PathIsUNCServerShareA, :QWORD
PROTO64 external,PathIsUNCServerShareW, :QWORD
PROTO64 external,PathIsUNCServerW, :QWORD
PROTO64 external,PathIsUNCW, :QWORD
PROTO64 external,PathIsURLA, :QWORD
PROTO64 external,PathIsURLW, :QWORD
PROTO64 external,PathMakePrettyA, :QWORD
PROTO64 external,PathMakePrettyW, :QWORD
PROTO64 external,PathMakeSystemFolderA, :QWORD
PROTO64 external,PathMakeSystemFolderW, :QWORD
PROTO64 external,PathMatchSpecA, :QWORD,:QWORD
PROTO64 external,PathMatchSpecExA, :QWORD,:QWORD,:QWORD
PROTO64 external,PathMatchSpecExW, :QWORD,:QWORD,:QWORD
PROTO64 external,PathMatchSpecW, :QWORD,:QWORD
PROTO64 external,PathParseIconLocationA, :QWORD
PROTO64 external,PathParseIconLocationW, :QWORD
PROTO64 external,PathQuoteSpacesA, :QWORD
PROTO64 external,PathQuoteSpacesW, :QWORD
PROTO64 external,PathRelativePathToA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PathRelativePathToW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PathRemoveArgsA, :QWORD
PROTO64 external,PathRemoveArgsW, :QWORD
PROTO64 external,PathRemoveBackslashA, :QWORD
PROTO64 external,PathRemoveBackslashW, :QWORD
PROTO64 external,PathRemoveBlanksA, :QWORD
PROTO64 external,PathRemoveBlanksW, :QWORD
PROTO64 external,PathRemoveExtensionA, :QWORD
PROTO64 external,PathRemoveExtensionW, :QWORD
PROTO64 external,PathRemoveFileSpecA, :QWORD
PROTO64 external,PathRemoveFileSpecW, :QWORD
PROTO64 external,PathRenameExtensionA, :QWORD,:QWORD
PROTO64 external,PathRenameExtensionW, :QWORD,:QWORD
PROTO64 external,PathSearchAndQualifyA, :QWORD,:QWORD,:QWORD
PROTO64 external,PathSearchAndQualifyW, :QWORD,:QWORD,:QWORD
PROTO64 external,PathSetDlgItemPathA, :QWORD,:QWORD,:QWORD
PROTO64 external,PathSetDlgItemPathW, :QWORD,:QWORD,:QWORD
PROTO64 external,PathSkipRootA, :QWORD
PROTO64 external,PathSkipRootW, :QWORD
PROTO64 external,PathStripPathA, :QWORD
PROTO64 external,PathStripPathW, :QWORD
PROTO64 external,PathStripToRootA, :QWORD
PROTO64 external,PathStripToRootW, :QWORD
PROTO64 external,PathUnExpandEnvStringsA, :QWORD,:QWORD,:QWORD
PROTO64 external,PathUnExpandEnvStringsW, :QWORD,:QWORD,:QWORD
PROTO64 external,PathUndecorateA, :QWORD
PROTO64 external,PathUndecorateW, :QWORD
PROTO64 external,PathUnmakeSystemFolderA, :QWORD
PROTO64 external,PathUnmakeSystemFolderW, :QWORD
PROTO64 external,PathUnquoteSpacesA, :QWORD
PROTO64 external,PathUnquoteSpacesW, :QWORD
PROTO64 external,QISearch, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHAllocShared, :QWORD,:QWORD,:QWORD
PROTO64 external,SHAnsiToAnsi, :QWORD,:QWORD,:QWORD
PROTO64 external,SHAnsiToUnicode, :QWORD,:QWORD,:QWORD
PROTO64 external,SHAutoComplete, :QWORD,:QWORD
PROTO64 external,SHCopyKeyA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHCopyKeyW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHCreateMemStream, :QWORD,:QWORD
PROTO64 external,SHCreateShellPalette, :QWORD
PROTO64 external,SHCreateStreamOnFileA, :QWORD,:QWORD,:QWORD
PROTO64 external,SHCreateStreamOnFileEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHCreateStreamOnFileW, :QWORD,:QWORD,:QWORD
PROTO64 external,SHCreateThread, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHCreateThreadRef, :QWORD,:QWORD
PROTO64 external,SHCreateThreadWithHandle, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHDeleteEmptyKeyA, :QWORD,:QWORD
PROTO64 external,SHDeleteEmptyKeyW, :QWORD,:QWORD
PROTO64 external,SHDeleteKeyA, :QWORD,:QWORD
PROTO64 external,SHDeleteKeyW, :QWORD,:QWORD
PROTO64 external,SHDeleteValueA, :QWORD,:QWORD,:QWORD
PROTO64 external,SHDeleteValueW, :QWORD,:QWORD,:QWORD
PROTO64 external,SHEnumKeyExA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHEnumKeyExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHEnumValueA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHEnumValueW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHFormatDateTimeA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHFormatDateTimeW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHFreeShared, :QWORD,:QWORD
PROTO64 external,SHGetInverseCMAP, :QWORD,:QWORD
PROTO64 external,SHGetThreadRef, :QWORD
PROTO64 external,SHGetValueA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHGetValueW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHGetViewStatePropertyBag, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHGlobalCounterDecrement, :QWORD
PROTO64 external,SHGlobalCounterGetValue, :QWORD
PROTO64 external,SHGlobalCounterIncrement, :QWORD
PROTO64 external,SHIsChildOrSelf, :QWORD,:QWORD
PROTO64 external,SHIsLowMemoryMachine, :QWORD
PROTO64 external,SHLoadIndirectString, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHLockShared, :QWORD,:QWORD
PROTO64 external,SHMessageBoxCheckA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHMessageBoxCheckW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHOpenRegStream2A, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHOpenRegStream2W, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHOpenRegStreamA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHOpenRegStreamW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHPropertyBag_ReadStrAlloc, :QWORD,:QWORD,:QWORD
PROTO64 external,SHPropertyBag_WriteBSTR, :QWORD,:QWORD,:QWORD
PROTO64 external,SHQueryInfoKeyA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHQueryInfoKeyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHQueryValueExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHQueryValueExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHRegCloseUSKey, :QWORD
PROTO64 external,SHRegCreateUSKeyA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHRegCreateUSKeyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHRegDeleteEmptyUSKeyA, :QWORD,:QWORD,:QWORD
PROTO64 external,SHRegDeleteEmptyUSKeyW, :QWORD,:QWORD,:QWORD
PROTO64 external,SHRegDeleteUSValueA, :QWORD,:QWORD,:QWORD
PROTO64 external,SHRegDeleteUSValueW, :QWORD,:QWORD,:QWORD
PROTO64 external,SHRegDuplicateHKey, :QWORD
PROTO64 external,SHRegEnumUSKeyA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHRegEnumUSKeyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHRegEnumUSValueA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHRegEnumUSValueW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHRegGetBoolUSValueA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHRegGetBoolUSValueW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHRegGetIntW, :QWORD,:QWORD,:QWORD
PROTO64 external,SHRegGetPathA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHRegGetPathW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHRegGetUSValueA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHRegGetUSValueW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHRegGetValueA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHRegGetValueW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHRegOpenUSKeyA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHRegOpenUSKeyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHRegQueryInfoUSKeyA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHRegQueryInfoUSKeyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHRegQueryUSValueA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHRegQueryUSValueW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHRegSetPathA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHRegSetPathW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHRegSetUSValueA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHRegSetUSValueW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHRegWriteUSValueA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHRegWriteUSValueW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHReleaseThreadRef, 
PROTO64 external,SHRunIndirectRegClientCommand, :QWORD,:QWORD
PROTO64 external,SHSendMessageBroadcastA, :QWORD,:QWORD,:QWORD
PROTO64 external,SHSendMessageBroadcastW, :QWORD,:QWORD,:QWORD
PROTO64 external,SHSetThreadRef, :QWORD
PROTO64 external,SHSetValueA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHSetValueW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHSkipJunction, :QWORD,:QWORD
PROTO64 external,SHStrDupA, :QWORD,:QWORD
PROTO64 external,SHStrDupW, :QWORD,:QWORD
PROTO64 external,SHStripMneumonicA, :QWORD
PROTO64 external,SHStripMneumonicW, :QWORD
PROTO64 external,SHUnicodeToAnsi, :QWORD,:QWORD,:QWORD
PROTO64 external,SHUnicodeToUnicode, :QWORD,:QWORD,:QWORD
PROTO64 external,SHUnlockShared, :QWORD
PROTO64 external,StrCSpnA, :QWORD,:QWORD
PROTO64 external,StrCSpnIA, :QWORD,:QWORD
PROTO64 external,StrCSpnIW, :QWORD,:QWORD
PROTO64 external,StrCSpnW, :QWORD,:QWORD
PROTO64 external,StrCatBuffA, :QWORD,:QWORD,:QWORD
PROTO64 external,StrCatBuffW, :QWORD,:QWORD,:QWORD
PROTO64 external,StrCatChainW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StrCatW, :QWORD,:QWORD
PROTO64 external,StrChrA, :QWORD,:QWORD
PROTO64 external,StrChrIA, :QWORD,:QWORD
PROTO64 external,StrChrIW, :QWORD,:QWORD
PROTO64 external,StrChrNIW, :QWORD,:QWORD,:QWORD
PROTO64 external,StrChrNW, :QWORD,:QWORD,:QWORD
PROTO64 external,StrChrW, :QWORD,:QWORD
PROTO64 external,StrCmpCA, :QWORD,:QWORD
PROTO64 external,StrCmpCW, :QWORD,:QWORD
PROTO64 external,StrCmpICA, :QWORD,:QWORD
PROTO64 external,StrCmpICW, :QWORD,:QWORD
PROTO64 external,StrCmpIW, :QWORD,:QWORD
PROTO64 external,StrCmpLogicalW, :QWORD,:QWORD
PROTO64 external,StrCmpNA, :QWORD,:QWORD,:QWORD
PROTO64 external,StrCmpNCA, :QWORD,:QWORD,:QWORD
PROTO64 external,StrCmpNCW, :QWORD,:QWORD,:QWORD
PROTO64 external,StrCmpNIA, :QWORD,:QWORD,:QWORD
PROTO64 external,StrCmpNICA, :QWORD,:QWORD,:QWORD
PROTO64 external,StrCmpNICW, :QWORD,:QWORD,:QWORD
PROTO64 external,StrCmpNIW, :QWORD,:QWORD,:QWORD
PROTO64 external,StrCmpNW, :QWORD,:QWORD,:QWORD
PROTO64 external,StrCmpW, :QWORD,:QWORD
PROTO64 external,StrCpyNW, :QWORD,:QWORD,:QWORD
PROTO64 external,StrCpyW, :QWORD,:QWORD
PROTO64 external,StrDupA, :QWORD
PROTO64 external,StrDupW, :QWORD
PROTO64 external,StrFormatByteSize64A, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StrFormatByteSizeA, :QWORD,:QWORD,:QWORD
PROTO64 external,StrFormatByteSizeEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StrFormatByteSizeW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StrFormatKBSizeA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StrFormatKBSizeW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StrFromTimeIntervalA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StrFromTimeIntervalW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StrIsIntlEqualA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StrIsIntlEqualW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StrNCatA, :QWORD,:QWORD,:QWORD
PROTO64 external,StrNCatW, :QWORD,:QWORD,:QWORD
PROTO64 external,StrPBrkA, :QWORD,:QWORD
PROTO64 external,StrPBrkW, :QWORD,:QWORD
PROTO64 external,StrRChrA, :QWORD,:QWORD,:QWORD
PROTO64 external,StrRChrIA, :QWORD,:QWORD,:QWORD
PROTO64 external,StrRChrIW, :QWORD,:QWORD,:QWORD
PROTO64 external,StrRChrW, :QWORD,:QWORD,:QWORD
PROTO64 external,StrRStrIA, :QWORD,:QWORD,:QWORD
PROTO64 external,StrRStrIW, :QWORD,:QWORD,:QWORD
PROTO64 external,StrRetToBSTR, :QWORD,:QWORD,:QWORD
PROTO64 external,StrRetToBufA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StrRetToBufW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StrRetToStrA, :QWORD,:QWORD,:QWORD
PROTO64 external,StrRetToStrW, :QWORD,:QWORD,:QWORD
PROTO64 external,StrSpnA, :QWORD,:QWORD
PROTO64 external,StrSpnW, :QWORD,:QWORD
PROTO64 external,StrStrA, :QWORD,:QWORD
PROTO64 external,StrStrIA, :QWORD,:QWORD
PROTO64 external,StrStrIW, :QWORD,:QWORD
PROTO64 external,StrStrNIW, :QWORD,:QWORD,:QWORD
PROTO64 external,StrStrNW, :QWORD,:QWORD,:QWORD
PROTO64 external,StrStrW, :QWORD,:QWORD
PROTO64 external,StrToInt64ExA, :QWORD,:QWORD,:QWORD
PROTO64 external,StrToInt64ExW, :QWORD,:QWORD,:QWORD
PROTO64 external,StrToIntA, :QWORD
PROTO64 external,StrToIntExA, :QWORD,:QWORD,:QWORD
PROTO64 external,StrToIntExW, :QWORD,:QWORD,:QWORD
PROTO64 external,StrToIntW, :QWORD
PROTO64 external,StrTrimA, :QWORD,:QWORD
PROTO64 external,StrTrimW, :QWORD,:QWORD
PROTO64 external,UrlApplySchemeA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UrlApplySchemeW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UrlCanonicalizeA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UrlCanonicalizeW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UrlCombineA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UrlCombineW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UrlCompareA, :QWORD,:QWORD,:QWORD
PROTO64 external,UrlCompareW, :QWORD,:QWORD,:QWORD
PROTO64 external,UrlCreateFromPathA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UrlCreateFromPathW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UrlEscapeA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UrlEscapeW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UrlFixupW, :QWORD,:QWORD,:QWORD
PROTO64 external,UrlGetLocationA, :QWORD
PROTO64 external,UrlGetLocationW, :QWORD
PROTO64 external,UrlGetPartA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UrlGetPartW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UrlHashA, :QWORD,:QWORD,:QWORD
PROTO64 external,UrlHashW, :QWORD,:QWORD,:QWORD
PROTO64 external,UrlIsA, :QWORD,:QWORD
PROTO64 external,UrlIsNoHistoryA, :QWORD
PROTO64 external,UrlIsNoHistoryW, :QWORD
PROTO64 external,UrlIsOpaqueA, :QWORD
PROTO64 external,UrlIsOpaqueW, :QWORD
PROTO64 external,UrlIsW, :QWORD,:QWORD
PROTO64 external,UrlUnescapeA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UrlUnescapeW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WhichPlatform, 
PROTO64 external,wvnsprintfA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wvnsprintfW, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file shlwapi.inc
echo -----------------------------------------
ENDIF
