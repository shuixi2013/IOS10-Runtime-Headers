//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURLSession, NSURLSessionDataTask;
@protocol NSURLSessionDataDelegate;

@interface YahooDoppelganger : NSObject
{
    NSString *_expectedRequestPattern;
    NSData *_response;
    unsigned long long _responseChunkSize;
    unsigned long long _responseChunkDelay;
    unsigned long long _responseChunkInitialDelay;
    unsigned long long _responseOffset;
    _Bool _cancelled;
    NSURLSession *_session;
    NSURLSessionDataTask *_dataTask;
    id <NSURLSessionDataDelegate> _delegate;
}

+ (_Bool)canHandleRequest:(id)arg1;
+ (_Bool)waitForAllDoppelgangersUpToTimeout:(double)arg1;
+ (void)clearDoppelgangerData;
+ (void)spewDoppelgangerData;
+ (void)_spewDoppelgangerArray:(id)arg1 named:(id)arg2;
+ (void)_doppelgangerFinished:(id)arg1;
+ (id)prepDoppelgangerForChartResponseWithSymbol:(id)arg1 numberOfDataPoints:(long long)arg2;
+ (id)prepDoppelgangerForNewsResponseWithSymbol:(id)arg1 numberOfNewsItems:(long long)arg2;
+ (id)prepDoppelgangerForQuotesResponseWithSymbols:(id)arg1 includeMetdata:(_Bool)arg2;
+ (id)prepDoppelgangerWithRequestPattern:(id)arg1 response:(id)arg2;
+ (id)newDoppelgangerMatchingRequestPattern:(id)arg1;
+ (void)setTestHarness:(id)arg1;
+ (void)hookIntoYQLRequestIfNeeded;
@property(nonatomic) __weak id <NSURLSessionDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long responseChunkInitialDelay; // @synthesize responseChunkInitialDelay=_responseChunkInitialDelay;
@property(nonatomic) unsigned long long responseChunkDelay; // @synthesize responseChunkDelay=_responseChunkDelay;
@property(nonatomic) unsigned long long responseChunkSize; // @synthesize responseChunkSize=_responseChunkSize;
@property(retain, nonatomic) NSData *response; // @synthesize response=_response;
@property(retain, nonatomic) NSString *expectedRequestPattern; // @synthesize expectedRequestPattern=_expectedRequestPattern;
- (void).cxx_destruct;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)cancel;
- (void)resume;
- (void)start;
- (id)description;
- (void)_relayDataChunk;
- (id)init;
- (_Bool)matchesRequest:(id)arg1;

@end

