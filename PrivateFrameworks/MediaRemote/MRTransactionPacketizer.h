//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface MRTransactionPacketizer : NSObject
{
    NSMutableDictionary *_incomingPackets;
    NSMutableArray *_outgoingPackets;
}

- (void)unpacketize:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)packetize:(id)arg1 packageSize:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool hasMorePacketsToUnpacketize;
@property(readonly, nonatomic) _Bool hasMorePacketsToPacketize;
- (void)dealloc;

@end

