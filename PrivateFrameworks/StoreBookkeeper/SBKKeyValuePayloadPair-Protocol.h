//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreBookkeeper/NSObject-Protocol.h>

@class NSData, NSString;

@protocol SBKKeyValuePayloadPair <NSObject>
+ (id)pairWithKVSKey:(NSString *)arg1 kvsPayload:(NSData *)arg2;
- (id)kvsValueDescription;
- (double)timestamp;
- (NSData *)kvsPayload;
- (NSString *)kvsKey;
@end

