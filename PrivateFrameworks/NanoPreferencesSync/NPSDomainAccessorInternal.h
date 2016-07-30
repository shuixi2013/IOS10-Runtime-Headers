//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPreferencesSync/NPSDomainAccessorFilePresenterDelegate-Protocol.h>

@class NPSDomainAccessorFilePresenter, NSMutableDictionary, NSMutableSet, NSString, NSURL, NSUUID;
@protocol OS_dispatch_queue;

@interface NPSDomainAccessorInternal : NSObject <NPSDomainAccessorFilePresenterDelegate>
{
    _Bool _nanoSettingsDirectoryExists;
    _Bool _hasReadFromDisk;
    NSUUID *_pairingID;
    NSString *_pairingStorePath;
    NSString *_domain;
    NSURL *_domainURL;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_externalQueue;
    unsigned long long _referenceCounter;
    NSMutableSet *_dirtyKeysForWriting;
    NSMutableDictionary *_map;
    NPSDomainAccessorFilePresenter *_filePresenter;
}

+ (id)writeDomain:(id)arg1 toURL:(id)arg2;
+ (id)readDomainURL:(id)arg1 withError:(id *)arg2;
+ (id)copyDomainListForPairingDataStore:(id)arg1;
+ (void)mergeDirtyKeys:(id)arg1 fromDictionary:(id)arg2 toDictionary:(id)arg3;
+ (id)cfTypeNameForCFPropertyListRef:(void *)arg1;
+ (_Bool)valueIsValid:(id)arg1;
+ (_Bool)domainIsValid:(id)arg1;
+ (id)urlForDomain:(id)arg1 pairingDataStore:(id)arg2;
+ (void)invalidateAndReleaseUnreferencedAccessors;
+ (void)decrementInternalAccessorReferenceCount:(id)arg1;
+ (id)internalAccessorForPairingID:(id)arg1 pairingDataStore:(id)arg2 domain:(id)arg3;
+ (void)extensionWillResignActive;
+ (void)extensionDidBecomeActive;
+ (void)applicationDidEnterBackground;
+ (void)applicationDidResume;
+ (void)initialize;
@property(retain, nonatomic) NPSDomainAccessorFilePresenter *filePresenter; // @synthesize filePresenter=_filePresenter;
@property(retain, nonatomic) NSMutableDictionary *map; // @synthesize map=_map;
@property(retain, nonatomic) NSMutableSet *dirtyKeysForWriting; // @synthesize dirtyKeysForWriting=_dirtyKeysForWriting;
@property(nonatomic) _Bool hasReadFromDisk; // @synthesize hasReadFromDisk=_hasReadFromDisk;
@property(nonatomic) _Bool nanoSettingsDirectoryExists; // @synthesize nanoSettingsDirectoryExists=_nanoSettingsDirectoryExists;
@property(nonatomic) unsigned long long referenceCounter; // @synthesize referenceCounter=_referenceCounter;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *externalQueue; // @synthesize externalQueue=_externalQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSURL *domainURL; // @synthesize domainURL=_domainURL;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSString *pairingStorePath; // @synthesize pairingStorePath=_pairingStorePath;
@property(retain, nonatomic) NSUUID *pairingID; // @synthesize pairingID=_pairingID;
- (void).cxx_destruct;
- (void)filePresenterDidBecomeNonCurrent:(id)arg1;
- (id)createNanoSettingsDirectory;
- (id)canSynchronizeForWritingURL:(id)arg1 readFirst:(_Bool)arg2;
- (id)canSynchronizeForReadingURL:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)dictionaryRepresentation;
- (void)setURL:(id)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setLong:(long long)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (id)URLForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1 keyExistsAndHasValidFormat:(_Bool *)arg2;
- (double)doubleForKey:(id)arg1 keyExistsAndHasValidFormat:(_Bool *)arg2;
- (float)floatForKey:(id)arg1 keyExistsAndHasValidFormat:(_Bool *)arg2;
- (long long)longForKey:(id)arg1 keyExistsAndHasValidFormat:(_Bool *)arg2;
- (long long)integerForKey:(id)arg1 keyExistsAndHasValidFormat:(_Bool *)arg2;
- (_Bool)boolForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (float)floatForKey:(id)arg1;
- (long long)longForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (id)stringArrayForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)_setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)_objectForKey:(id)arg1 error:(id *)arg2;
- (void)objectForKey:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)objectForKey:(id)arg1;
- (id)_synchronizeReadOnly:(_Bool)arg1;
- (void)synchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)synchronize;
- (id)_copyKeyList;
- (id)copyKeyList;
- (void)dealloc;
- (id)initWithPairingID:(id)arg1 pairingDataStore:(id)arg2 domain:(id)arg3;
- (void)_invalidatePresenter;
- (void)invalidatePresenter;

@end

