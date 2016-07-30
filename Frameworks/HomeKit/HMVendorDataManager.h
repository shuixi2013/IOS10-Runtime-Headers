//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface HMVendorDataManager : NSObject
{
    long long _dataVersion;
    NSDictionary *_database;
    NSObject<OS_dispatch_queue> *_databaseQueue;
}

+ (id)sharedVendorDataManager;
+ (void)initialize;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue; // @synthesize databaseQueue=_databaseQueue;
@property(retain, nonatomic) NSDictionary *database; // @synthesize database=_database;
@property(nonatomic) long long dataVersion; // @synthesize dataVersion=_dataVersion;
- (void).cxx_destruct;
- (_Bool)_boolForManufacturer:(id)arg1 model:(id)arg2 key:(id)arg3;
- (id)_stringForManufacturer:(id)arg1 model:(id)arg2 key:(id)arg3;
- (id)_modelDictionaryForManufacturer:(id)arg1 model:(id)arg2;
- (_Bool)overrideForManufacturer:(id)arg1 model:(id)arg2;
- (_Bool)additionalSetupNeededForManufacturer:(id)arg1 model:(id)arg2;
- (id)bundleIDForManufacturer:(id)arg1 model:(id)arg2;
- (id)storeIDForManufacturer:(id)arg1 model:(id)arg2;
- (id)init;

@end

