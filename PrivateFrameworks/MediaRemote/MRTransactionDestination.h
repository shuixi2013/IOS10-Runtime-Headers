//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MRTransactionPacketizer;

@interface MRTransactionDestination : NSObject
{
    MRTransactionPacketizer *_packetizer;
    unsigned long long _name;
}

@property(readonly, nonatomic) unsigned long long name; // @synthesize name=_name;
- (void)_cleanUp;
- (void)unpacketize:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)packetsFromMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithName:(unsigned long long)arg1;

@end

