//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPPackage.h>

@class TSUZipArchive;

__attribute__((visibility("hidden")))
@interface TSPFilePackage : TSPPackage
{
    TSUZipArchive *_componentZipArchive;
}

+ (unsigned long long)zipArchiveOptions;
+ (id)zipArchiveURLFromPackageURL:(id)arg1;
+ (_Bool)isValidPackageAtURL:(id)arg1;
+ (_Bool)isValidPackageAtZipArchive:(id)arg1;
- (void).cxx_destruct;
- (void)prepareForDocumentReplacementWithSuccess:(_Bool)arg1 forSafeSave:(_Bool)arg2 originalURL:(id)arg3;
- (id)newDocumentPropertiesWithURL:(id)arg1 zipProvider:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (_Bool)hasDataAtRelativePath:(id)arg1;
- (id)newRawDataReadChannelAtRelativePath:(id)arg1;
- (id)newDataStorageAtRelativePath:(id)arg1 decryptionInfo:(id)arg2;
- (id)componentZipArchive;
- (_Bool)didReloadZipArchive:(id)arg1 error:(id *)arg2;
- (long long)packageType;

@end

