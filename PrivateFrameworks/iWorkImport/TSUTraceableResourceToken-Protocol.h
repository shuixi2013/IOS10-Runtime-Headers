//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSArray, NSObject, NSString;

@protocol TSUTraceableResourceToken <NSObject>
@property(readonly, nonatomic) NSObject *context;
@property(readonly, nonatomic) NSArray *relinquishCallStackSymbols;
@property(readonly, nonatomic) NSArray *acquireCallStackSymbols;
@property(readonly, nonatomic) double timeout;
@property(readonly, nonatomic) NSString *intent;
- (void)resumeTimeout;
- (void)pauseTimeout;
@end

