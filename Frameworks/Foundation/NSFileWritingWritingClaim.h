//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileAccessClaim.h>

@class NSFileAccessNode, NSURL;

__attribute__((visibility("hidden")))
@interface NSFileWritingWritingClaim : NSFileAccessClaim
{
    NSURL *_url1;
    _Bool _url1DidChange;
    unsigned long long _options1;
    NSURL *_url2;
    _Bool _url2DidChange;
    unsigned long long _options2;
    NSFileAccessNode *_location1;
    NSFileAccessNode *_location2;
}

+ (_Bool)supportsSecureCoding;
- (id)allURLs;
- (_Bool)blocksClaim:(id)arg1;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (void)devalueSelf;
- (void)invokeClaimer;
- (void)resolveURLsThenContinueInvokingClaimer:(CDUnknownBlockType)arg1;
- (void)granted;
- (_Bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(_Bool)arg2;
- (void)forwardUsingConnection:(id)arg1 crashHandler:(CDUnknownBlockType)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned long long)arg3 url:(id)arg4 options:(unsigned long long)arg5 claimer:(CDUnknownBlockType)arg6;

@end

