//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_xpc_object;

@interface BSXPCReply : NSObject
{
    NSObject<OS_xpc_object> *_reply;
    int _sent;
}

+ (id)messageWithReply:(id)arg1;
+ (id)replyForMessage:(id)arg1;
- (id)message;
- (long long)messageKind;
- (id)initWithReply:(id)arg1;
- (void)sendReply:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initForMessage:(id)arg1;
- (id)_initWithReply:(id)arg1;

@end

