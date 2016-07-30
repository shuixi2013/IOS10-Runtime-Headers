//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/SBFAuthenticationResponder-Protocol.h>

@class NSString;

@interface SBFUserAuthenticationResponder : NSObject <SBFAuthenticationResponder>
{
    CDUnknownBlockType _successHandler;
    CDUnknownBlockType _failureHandler;
    CDUnknownBlockType _invalidHandler;
}

+ (id)responderWithSuccessHandler:(CDUnknownBlockType)arg1 failureHandler:(CDUnknownBlockType)arg2 invalidHandler:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType invalidHandler; // @synthesize invalidHandler=_invalidHandler;
@property(copy, nonatomic) CDUnknownBlockType failureHandler; // @synthesize failureHandler=_failureHandler;
@property(copy, nonatomic) CDUnknownBlockType successHandler; // @synthesize successHandler=_successHandler;
- (void).cxx_destruct;
- (void)handleInvalidAuthenticationRequest:(id)arg1;
- (void)handleFailedAuthenticationRequest:(id)arg1 error:(id)arg2;
- (void)handleSuccessfulAuthenticationRequest:(id)arg1;
- (id)initWithSuccessHandler:(CDUnknownBlockType)arg1 failureHandler:(CDUnknownBlockType)arg2 invalidHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

