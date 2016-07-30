//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEPrettyDescription-Protocol.h>

@class NSData, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

@interface NEPolicySession : NSObject <NEPrettyDescription>
{
    unsigned int _lastSendMessageID;
    int _controlSocket;
    long long _internalPriority;
    NSMutableDictionary *_policies;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_dispatch_semaphore> *_responseSemaphore;
    NSData *_lastReceivedResponse;
    NSObject<OS_dispatch_source> *_controlSource;
}

+ (id)parseTLVResponseForDump:(id)arg1;
+ (id)policyDumpFromData:(id)arg1;
+ (unsigned int)messageIDForMessage:(id)arg1;
+ (unsigned int)policyIDFromMessage:(id)arg1;
+ (id)errorFromMessage:(id)arg1;
+ (unsigned char)getTLVtypeForBytes:(const char *)arg1 includeHeaderOffset:(_Bool)arg2 nextTLVOffset:(unsigned int *)arg3;
+ (id)copyTLVForBytes:(const char *)arg1 messageLength:(unsigned long long)arg2 type:(unsigned char)arg3 includeHeaderOffset:(_Bool)arg4 n:(int)arg5;
+ (void)addTLVToMessage:(id)arg1 type:(unsigned char)arg2 length:(unsigned long long)arg3 value:(const void *)arg4;
@property int controlSocket; // @synthesize controlSocket=_controlSocket;
@property(retain) NSObject<OS_dispatch_source> *controlSource; // @synthesize controlSource=_controlSource;
@property unsigned int lastSendMessageID; // @synthesize lastSendMessageID=_lastSendMessageID;
@property(retain) NSData *lastReceivedResponse; // @synthesize lastReceivedResponse=_lastReceivedResponse;
@property(retain) NSObject<OS_dispatch_semaphore> *responseSemaphore; // @synthesize responseSemaphore=_responseSemaphore;
@property(retain) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(retain) NSMutableDictionary *policies; // @synthesize policies=_policies;
@property long long internalPriority; // @synthesize internalPriority=_internalPriority;
- (void).cxx_destruct;
- (_Bool)removeAllPolicies;
- (_Bool)removePolicyWithID:(unsigned long long)arg1;
- (id)policyWithID:(unsigned long long)arg1;
- (_Bool)apply;
- (id)dumpKernelPolicies;
- (unsigned long long)addPolicy:(id)arg1;
- (_Bool)unregisterServiceUUID:(id)arg1;
- (_Bool)registerServiceUUID:(id)arg1;
- (_Bool)lockSessionToCurrentProcess;
@property long long priority;
- (_Bool)sendMessage:(id)arg1;
- (id)copyReceivedResponseForMessageID:(unsigned int)arg1;
- (id)openControlSource;
- (id)createTLVMessage:(unsigned char)arg1;
- (int)dupSocket;
- (id)priorityString;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithSocket:(int)arg1;

@end

