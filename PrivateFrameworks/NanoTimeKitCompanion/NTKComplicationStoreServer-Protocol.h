//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class CLKComplicationTemplate, NSNumber, NSString, NSUUID;

@protocol NTKComplicationStoreServer <NSObject>
- (void)removeComplicationForClientIdentifier:(NSString *)arg1;
- (void)updateLocalizableSampleDataTemplate:(CLKComplicationTemplate *)arg1 forClientIdentifier:(NSString *)arg2 family:(long long)arg3;
- (void)registerForCollectionIdentifier:(NSString *)arg1 deviceUUID:(NSUUID *)arg2 withSeqId:(NSNumber *)arg3;
@end

