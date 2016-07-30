//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IDSDaemonResponseHandler, IMTimer;

@interface IDSDaemonRequestContext : NSObject
{
    IDSDaemonResponseHandler *_responseHandler;
    CDUnknownBlockType _timeoutBlock;
    IMTimer *_systemTimer;
}

- (void)killSystemTimer;
- (id)systemTimer;
- (CDUnknownBlockType)timeoutBlock;
- (id)responseHandler;
- (id)initWithResponseHandler:(id)arg1 timeoutBlock:(CDUnknownBlockType)arg2 systemTimer:(id)arg3;
- (void)dealloc;

@end

