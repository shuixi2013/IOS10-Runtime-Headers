//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSString, _INVocabularyValidator;
@protocol OS_dispatch_queue;

@interface _INVocabularyStoreManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSBundle *_appBundle;
    _INVocabularyValidator *_validator;
    NSString *_appBundleID;
    NSString *_baseDirectoryPath;
    NSString *_appBundlePath;
}

+ (id)savedCustomVocabularyOverviewDictionary;
+ (id)managerForBundleID:(id)arg1 bundlePath:(id)arg2;
+ (id)appDatastoreDirectoryForAppBundleID:(id)arg1 bundlePath:(id)arg2;
+ (id)_hashOfAppPath:(id)arg1;
+ (id)_customVocabularyDirectory;
@property(copy, nonatomic) NSString *appBundlePath; // @synthesize appBundlePath=_appBundlePath;
@property(copy, nonatomic) NSString *baseDirectoryPath; // @synthesize baseDirectoryPath=_baseDirectoryPath;
@property(copy, nonatomic) NSString *appBundleID; // @synthesize appBundleID=_appBundleID;
- (void).cxx_destruct;
- (void)writeLatestVocabularyItems:(id)arg1 forIntentSlot:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkIfSyncSlot:(id)arg1 isAllowedWithCompletion:(CDUnknownBlockType)arg2;
- (void)_writeLatestVocabularyItems:(id)arg1 forIntentSlot:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)deleteEverything;
- (id)getPathToLatestVocabulary:(id *)arg1 pathDuringReading:(id *)arg2 sentVocabulary:(id *)arg3 forIntentSlot:(id)arg4;
- (id)deleteIntentSlot:(id)arg1;
- (id)_validator;
- (id)_appBundle;
- (id)init;
- (id)initWithBaseDirectory:(id)arg1 appBundleID:(id)arg2 appBundlePath:(id)arg3 error:(id *)arg4;
- (id)_baseDirectoryPathForIntentSlot:(id)arg1 error:(id *)arg2;
- (id)_documentWithItems:(id)arg1 forIntentSlot:(id)arg2;
- (id)_createDirectoryAtPath:(id)arg1;

@end

