//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ServerDocsProtocol/NSURLSessionDataDelegate-Protocol.h>

@class NSString;

@interface UnauthHTTPSSessionDelegate : NSObject <NSURLSessionDataDelegate>
{
    _Bool _pkiIsTrusted;
    unsigned int _pkiEvaluationResult;
}

@property _Bool pkiIsTrusted; // @synthesize pkiIsTrusted=_pkiIsTrusted;
@property unsigned int pkiEvaluationResult; // @synthesize pkiEvaluationResult=_pkiEvaluationResult;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

