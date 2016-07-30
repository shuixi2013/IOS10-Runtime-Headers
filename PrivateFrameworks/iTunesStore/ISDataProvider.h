//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStore/NSCopying-Protocol.h>

@class ISOperation, NSNumber, NSString, NSURL, SSAuthenticationContext, SSURLBagContext;

@interface ISDataProvider : NSObject <NSCopying>
{
    SSAuthenticationContext *_authenticationContext;
    NSNumber *_authenticatedAccountDSID;
    SSURLBagContext *_bagContext;
    long long _contentLength;
    NSString *_contentType;
    id _output;
    ISOperation *_parentOperation;
    NSURL *_redirectURL;
    long long _errorHandlerResponseType;
}

+ (id)provider;
@property(retain) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property ISOperation *parentOperation; // @synthesize parentOperation=_parentOperation;
@property(retain) id output; // @synthesize output=_output;
@property long long errorHandlerResponseType; // @synthesize errorHandlerResponseType=_errorHandlerResponseType;
@property(retain) NSString *contentType; // @synthesize contentType=_contentType;
@property long long contentLength; // @synthesize contentLength=_contentLength;
@property(retain) SSURLBagContext *bagContext; // @synthesize bagContext=_bagContext;
@property(retain) NSNumber *authenticatedAccountDSID; // @synthesize authenticatedAccountDSID=_authenticatedAccountDSID;
@property(retain) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
- (_Bool)_runServerAuthenticationOperation:(id)arg1 error:(id *)arg2;
- (_Bool)runSubOperation:(id)arg1 error:(id *)arg2;
- (_Bool)runAuthorizationDialog:(id)arg1 error:(id *)arg2;
- (void)setup;
- (_Bool)parseData:(id)arg1 returningError:(id *)arg2;
- (long long)streamedBytes;
- (void)resetStream;
- (void)migrateOutputFromSubProvider:(id)arg1;
- (void)streamDidFailWithError:(id)arg1;
- (void)streamCancelled;
- (_Bool)isStreamComplete;
- (_Bool)isStream;
- (void)configureFromProvider:(id)arg1;
- (id)closeStream;
- (_Bool)canStreamContentLength:(long long)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

