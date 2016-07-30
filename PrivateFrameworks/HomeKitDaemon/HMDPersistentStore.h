//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HMDPersistentStore : NSObject
{
}

+ (id)decryptDataWithMetadataKey:(id)arg1 error:(id *)arg2;
+ (id)encryptDataWithMetadataKey:(id)arg1 error:(id *)arg2;
+ (id)decryptDataWithControllerKey:(id)arg1 totalKeysFound:(unsigned long long *)arg2 deleteExtraKeys:(_Bool)arg3 controllerIdentifierChanged:(_Bool *)arg4 successfulKeyUserName:(id *)arg5 error:(id *)arg6;
+ (id)encryptDataWithControllerKey:(id)arg1 error:(id *)arg2;
+ (id)_decryptData:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
+ (id)_encryptData:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
+ (id)unarchiveBulletinBoard;
+ (id)archiveBulletinBoard:(id)arg1;
+ (id)deserializeBlacklistedBundlesFromData:(id)arg1;
+ (id)serializeBlacklistedBundles:(id)arg1;
+ (id)unarchiveBlacklistedBundles;
+ (id)archiveBlacklistedBundles:(id)arg1;
+ (id)unarchiveIDSDataSyncJournal;
+ (id)archiveIDSDataSyncJournal:(id)arg1;
+ (id)unarchiveTransactionJournal;
+ (id)archiveTransactions:(id)arg1;
+ (id)unarchiveServerTokenData:(_Bool *)arg1;
+ (id)archiveCloudServerTokenData:(id)arg1;
+ (id)archiveMetadata:(id)arg1;
+ (id)encryptUsingLocalKeyAndArchiveData:(id)arg1 storePath:(id)arg2 dataLabel:(id)arg3;
+ (id)serializeMetadata:(id)arg1;
+ (id)unarchiveMetadata:(id *)arg1;
+ (id)decryptUsingLocalKeyAndUnarchiveFromPath:(id)arg1 error:(id *)arg2;
+ (_Bool)deserializeMetadata:(id *)arg1 fromData:(id)arg2;
+ (id)unarchiveVendorStore;
+ (void)archiveVendorStore:(id)arg1;
+ (id)archiveHomeData:(id)arg1;
+ (id)serializeHomeData:(id)arg1 localStorage:(_Bool)arg2 remoteDeviceOnSameAccount:(_Bool)arg3;
+ (void)resetMetadata;
+ (void)resetConfiguration;
+ (void)cleanupKeysInStore;
+ (id)unarchiveHomeData:(id *)arg1;
+ (_Bool)deserializeHomeData:(id *)arg1 localStorage:(_Bool)arg2 fromData:(id)arg3;
+ (id)_writeData:(id)arg1 toStorePath:(id)arg2 dataLabel:(id)arg3;
+ (id)writeData:(id)arg1 toStorePath:(id)arg2 dataLabel:(id)arg3;

@end

