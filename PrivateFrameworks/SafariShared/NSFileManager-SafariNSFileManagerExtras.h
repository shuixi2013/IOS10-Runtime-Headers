//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (SafariNSFileManagerExtras)
- (_Bool)safari_removeFileAtURL:(id)arg1 error:(id *)arg2;
- (id)safari_productionSafariSettingsDirectory;
- (id)safari_settingsDirectory;
- (id)safari_settingsDirectoryForHomeDirectory:(id)arg1;
- (id)_safari_settingsDirectoryForLibraryDirectory:(id)arg1;
- (id)_safari_safariLibraryDirectory;
- (id)_safari_libraryDirectoryForHomeDirectory:(id)arg1;
- (id)_safari_containerDirectory;
- (id)safari_subdirectoryWithName:(id)arg1 inUserDomainOfDirectory:(unsigned long long)arg2;
- (id)safari_ensureDirectoryExists:(id)arg1;
@end

