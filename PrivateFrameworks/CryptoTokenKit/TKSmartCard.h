//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber, TKSmartCardSlot;
@protocol OS_dispatch_queue;

@interface TKSmartCard : NSObject
{
    TKSmartCardSlot *_slot;
    NSObject<OS_dispatch_queue> *_beginSessionQueue;
    _Bool _sensitive;
    _Bool _sensitiveRequired;
    _Bool _synchronous;
    id _session;
    long long _sessionCounter;
    _Bool _someoneWantsSession;
    long long _sessionEndPolicy;
    NSMutableDictionary *_contexts;
    NSNumber *_reservationId;
    _Bool _useExtendedLength;
    _Bool _useCommandChaining;
    unsigned char _cla;
    _Bool _valid;
    unsigned long long _allowedProtocols;
    unsigned long long _currentProtocol;
}

+ (_Bool)decodeResponse:(id)arg1 sw:(unsigned short *)arg2 appendTo:(id)arg3 error:(id *)arg4;
@property unsigned long long currentProtocol; // @synthesize currentProtocol=_currentProtocol;
@property unsigned long long allowedProtocols; // @synthesize allowedProtocols=_allowedProtocols;
@property _Bool valid; // @synthesize valid=_valid;
@property(readonly, nonatomic) TKSmartCardSlot *slot; // @synthesize slot=_slot;
- (void).cxx_destruct;
- (_Bool)selectApplication:(id)arg1 error:(id *)arg2;
- (id)sendIns:(unsigned char)arg1 p1:(unsigned char)arg2 p2:(unsigned char)arg3 data:(id)arg4 le:(id)arg5 sw:(unsigned short *)arg6 error:(id *)arg7;
- (_Bool)inSessionWithError:(id *)arg1 executeBlock:(CDUnknownBlockType)arg2;
- (void)sendIns:(unsigned char)arg1 p1:(unsigned char)arg2 p2:(unsigned char)arg3 data:(id)arg4 le:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)transmitChunkedIns:(unsigned char)arg1 p1:(unsigned char)arg2 p2:(unsigned char)arg3 data:(id)arg4 fromOffset:(unsigned long long)arg5 realLe:(unsigned long long)arg6 chained:(_Bool)arg7 isCase4:(_Bool)arg8 reply:(CDUnknownBlockType)arg9;
- (id)buildIns:(unsigned char)arg1 p1:(unsigned char)arg2 p2:(unsigned char)arg3 data:(id)arg4 range:(struct _NSRange)arg5 le:(id)arg6 protocol:(unsigned long long)arg7 chained:(_Bool)arg8 extended:(_Bool *)arg9 realLe:(unsigned long long *)arg10;
- (void)encodeLength:(unsigned long long)arg1 into:(id)arg2 sized:(long long)arg3;
- (void)handleApduResponse:(id)arg1 body:(id)arg2 le:(unsigned long long)arg3 isCase4:(_Bool)arg4 error:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)setUseCommandChaining:(_Bool)arg1;
- (_Bool)useCommandChaining;
- (void)setUseExtendedLength:(_Bool)arg1;
- (_Bool)useExtendedLength;
- (void)setCla:(unsigned char)arg1;
- (unsigned char)cla;
- (void)endSessionWithReply:(CDUnknownBlockType)arg1;
- (void)setSessionEndPolicy:(long long)arg1;
- (long long)sessionEndPolicy;
- (_Bool)revalidate;
- (void)unreserve;
- (void)reserveExclusive:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)userInteractionForSecurePINChangeWithPINFormat:(id)arg1 APDU:(id)arg2 currentPINByteOffset:(long long)arg3 newPINByteOffset:(long long)arg4;
- (id)userInteractionForSecurePINVerificationWithPINFormat:(id)arg1 APDU:(id)arg2 PINByteOffset:(long long)arg3;
- (void)setContext:(id)arg1 forKey:(id)arg2;
- (id)contextForKey:(id)arg1;
@property(retain) id context;
- (void)transmitRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)endSession;
- (void)beginSessionWithReply:(CDUnknownBlockType)arg1;
- (void)sessionRequested;
- (void)releaseSessionWithReply:(CDUnknownBlockType)arg1;
- (_Bool)synchronous;
- (void)setSynchronous:(_Bool)arg1;
@property _Bool sensitive;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)remoteSessionWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)initWithSlot:(id)arg1;

@end

