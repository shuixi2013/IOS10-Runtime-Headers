//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDPQLCache.h>

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDPCSSQLCache : CKDPQLCache
{
    NSObject<OS_dispatch_queue> *_recordQueue;
    unsigned long long _cacheRequestCount;
    unsigned long long _cacheHitCount;
}

@property unsigned long long cacheHitCount; // @synthesize cacheHitCount=_cacheHitCount;
@property unsigned long long cacheRequestCount; // @synthesize cacheRequestCount=_cacheRequestCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *recordQueue; // @synthesize recordQueue=_recordQueue;
- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (void)clearCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)removePCSDataForItemsInShareWithID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removePCSDataForItemsInZoneWithID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setSharePCSData:(id)arg1 forShareWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)setRecordPCSData:(id)arg1 forRecordWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)setZonePCSData:(id)arg1 forZoneWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_setPCSData:(id)arg1 forItemWithID:(id)arg2 databaseScope:(long long)arg3 itemType:(unsigned long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (void)_lockedSetPCSData:(id)arg1 databaseScope:(long long)arg2 itemType:(unsigned long long)arg3 forID:(id)arg4;
- (void)fetchPCSDataForShareWithID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)fetchPCSDataForZoneWithID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)fetchPCSDataForRecordWithID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)_lockedFetchPCSDataForID:(id)arg1 databaseScope:(long long)arg2 itemType:(unsigned long long)arg3 ofClass:(Class)arg4;
@property(readonly, nonatomic) double earliestValidDate;
- (id)upgradeInfoForVersion:(unsigned long long)arg1;
- (id)createInitialTablesSQL;
- (id)path;

@end

