//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CompanionSync/NSCopying-Protocol.h>

@class NSDictionary, NSMutableArray, NSString, SYLogDeviceState, SYLogEngineState, SYLogSessionState;

__attribute__((visibility("hidden")))
@interface SYLogServiceState : PBCodable <NSCopying>
{
    SYLogEngineState *_engine;
    int _enqueuedSyncType;
    NSString *_name;
    NSString *_peerGenerationID;
    NSString *_peerID;
    SYLogSessionState *_session;
    SYLogDeviceState *_targetedDevice;
    NSMutableArray *_transportOptions;
    _Bool _sessionQueueRunning;
}

+ (Class)transportOptionsType;
@property(retain, nonatomic) NSString *peerGenerationID; // @synthesize peerGenerationID=_peerGenerationID;
@property(retain, nonatomic) NSString *peerID; // @synthesize peerID=_peerID;
@property(retain, nonatomic) NSMutableArray *transportOptions; // @synthesize transportOptions=_transportOptions;
@property(nonatomic) int enqueuedSyncType; // @synthesize enqueuedSyncType=_enqueuedSyncType;
@property(retain, nonatomic) SYLogDeviceState *targetedDevice; // @synthesize targetedDevice=_targetedDevice;
@property(nonatomic) _Bool sessionQueueRunning; // @synthesize sessionQueueRunning=_sessionQueueRunning;
@property(retain, nonatomic) SYLogSessionState *session; // @synthesize session=_session;
@property(retain, nonatomic) SYLogEngineState *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPeerGenerationID;
@property(readonly, nonatomic) _Bool hasPeerID;
- (id)transportOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)transportOptionsCount;
- (void)addTransportOptions:(id)arg1;
- (void)clearTransportOptions;
- (int)StringAsEnqueuedSyncType:(id)arg1;
- (id)enqueuedSyncTypeAsString:(int)arg1;
@property(readonly, nonatomic) _Bool hasTargetedDevice;
@property(readonly, nonatomic) _Bool hasSession;
@property(readonly, nonatomic) _Bool hasEngine;
@property(retain, nonatomic) NSDictionary *cocoaTransportOptions;

@end

