//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSProtocolChecker, NSString;
@protocol OS_xpc_object;

@interface IMLocalObject : NSObject
{
    id _internal;
}

+ (void)initialize;
+ (void)_unregisterIMLocalObject:(id)arg1;
+ (void)_registerIMLocalObject:(id)arg1;
+ (id)_registeredIMLocalObjectForPort:(unsigned int)arg1;
+ (void)_setExceptionHandlingDisabled:(_Bool)arg1;
+ (id)_imLocalObjectQueue;
- (id)description;
- (void)invalidate;
@property(readonly, nonatomic) _Bool forceSecureCoding;
@property(readonly, nonatomic) _Bool isValid;
- (_Bool)isValidSelector:(SEL)arg1;
- (void)_enqueueInvocationWithPriority:(id)arg1 xpcMessage:(id)arg2 priority:(int)arg3;
- (void)_enqueueInvocationWithPriority:(id)arg1 priority:(int)arg2;
- (void)_enqueueInvocation:(id)arg1 xpcMessage:(id)arg2;
- (void)_enqueueInvocation:(id)arg1;
- (void)_popInvocation;
- (id)_peekInvocation;
- (void)_noteNewInvocation;
- (void)_handleNewInvocations;
- (_Bool)handleInvocation:(id)arg1;
- (_Bool)_handleInvocation:(id)arg1;
- (void)_handleInvocationForSendMessage:(id)arg1;
- (id)_currentMessageContext;
@property(retain, nonatomic) NSString *processName;
- (void)setPortName:(id)arg1;
@property(readonly, nonatomic) NSString *portName;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection;
- (void)_systemShutdown:(id)arg1;
- (void)terminated;
- (void)_portDidBecomeInvalid;
- (void)_portInterrupted;
- (void)_cancelHandlerCompleted;
- (void)dealloc;
- (void)_clearPort:(_Bool)arg1;
@property(readonly, nonatomic) NSProtocolChecker *protocolChecker;
@property(nonatomic) id target;
- (id)initWithTarget:(id)arg1 portName:(id)arg2 protocol:(id)arg3;
- (id)initWithTarget:(id)arg1 connection:(id)arg2 protocol:(id)arg3 forceSecureCoding:(_Bool)arg4 offMainThread:(_Bool)arg5;
- (id)initWithTarget:(id)arg1 connection:(id)arg2 protocol:(id)arg3 forceSecureCoding:(_Bool)arg4;
- (id)initWithTarget:(id)arg1 connection:(id)arg2 protocol:(id)arg3;
- (id)initWithTarget:(id)arg1 protocol:(id)arg2;

@end

