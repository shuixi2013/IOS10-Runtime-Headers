//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TSUDeferredInvocationQueue : NSObject
{
    NSMutableArray *_invocations;
    id _target;
}

- (void)performInvocations;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)prepareWithInvocationTarget:(id)arg1;
- (void)dealloc;

@end

