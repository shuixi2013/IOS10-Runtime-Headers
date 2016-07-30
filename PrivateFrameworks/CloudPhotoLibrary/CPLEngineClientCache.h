//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, NSArray, NSString;

@interface CPLEngineClientCache : CPLEngineStorage <CPLAbstractObject>
{
    NSArray *__lastModifiedProperties;
}

@property(copy, setter=_setLastModifiedProperties:) NSArray *_lastModifiedProperties; // @synthesize _lastModifiedProperties=__lastModifiedProperties;
- (void).cxx_destruct;
- (id)statusDictionary;
- (id)status;
- (id)resourceOfType:(unsigned long long)arg1 forRecordWithIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)applyBatch:(id)arg1 direction:(unsigned long long)arg2 withError:(id *)arg3;
- (id)localChangeBatchFromCloudBatch:(id)arg1 usingMapping:(id)arg2 withError:(id *)arg3;
- (id)compactedBatchFromExpandedBatch:(id)arg1;
- (_Bool)resetWithError:(id *)arg1;
- (id)recordsWithRelatedIdentifier:(id)arg1;
- (_Bool)hasRecordWithIdentifier:(id)arg1;
- (id)relatedIdentifierForRecordWithIdentifier:(id)arg1;
- (id)_relatedIdentifierForRecordWithIdentifier:(id)arg1;
- (id)recordWithIdentifier:(id)arg1;
- (_Bool)deleteRecordWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)updateRecord:(id)arg1 error:(id *)arg2;
- (_Bool)addRecord:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

