//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/PLCloudQueueObject-Protocol.h>

@class CPLResource, NSString;

@interface PLCloudOperation : NSObject <PLCloudQueueObject>
{
    NSString *_assetUuid;
    unsigned long long _retryNumber;
    CPLResource *_targetResource;
    double _timeIntervalSinceLastRetry;
}

@property(readonly, nonatomic) double timeIntervalSinceLastRetry; // @synthesize timeIntervalSinceLastRetry=_timeIntervalSinceLastRetry;
@property(readonly, retain, nonatomic) CPLResource *targetResource; // @synthesize targetResource=_targetResource;
@property(nonatomic) unsigned long long retryNumber; // @synthesize retryNumber=_retryNumber;
@property(readonly, retain, nonatomic) NSString *assetUuid; // @synthesize assetUuid=_assetUuid;
- (void)executeWithRemoteLibrary:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)mergeWithObject:(id)arg1;
- (id)identityHash;
@property(readonly, copy) NSString *description;
- (id)copy;
- (id)initWithProperties:(id)arg1;
- (void)dealloc;
- (id)initWithCPLResource:(id)arg1 assetUuid:(id)arg2;
- (id)serializeObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

