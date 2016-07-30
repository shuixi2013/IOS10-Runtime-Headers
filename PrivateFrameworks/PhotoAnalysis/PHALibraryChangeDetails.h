//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, PHFetchResult;

@interface PHALibraryChangeDetails : NSObject
{
    unsigned long long _changeType;
    NSArray *_inserts;
    NSArray *_deletes;
    NSArray *_updates;
    NSDictionary *_changedAssetIdentifierToWorkerFlagsMap;
    PHFetchResult *_changedAssetsFetchResult;
}

+ (id)changeDetailsForUpdatedMoments:(id)arg1;
@property(retain) PHFetchResult *changedAssetsFetchResult; // @synthesize changedAssetsFetchResult=_changedAssetsFetchResult;
@property(retain) NSDictionary *changedAssetIdentifierToWorkerFlagsMap; // @synthesize changedAssetIdentifierToWorkerFlagsMap=_changedAssetIdentifierToWorkerFlagsMap;
@property(copy, setter=_setUpdates:) NSArray *updates; // @synthesize updates=_updates;
@property(copy, setter=_setDeletes:) NSArray *deletes; // @synthesize deletes=_deletes;
@property(copy, setter=_setInserts:) NSArray *inserts; // @synthesize inserts=_inserts;
- (void).cxx_destruct;
@property(readonly) unsigned long long type;
- (id)initWithType:(unsigned long long)arg1;

@end

