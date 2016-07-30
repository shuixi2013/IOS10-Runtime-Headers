//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProtocolBuffer/NSURLConnectionDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableData, NSMutableDictionary, NSRunLoop, NSString, NSThread, NSURL, NSURLConnection, PBDataReader;
@protocol PBRequesterDelegate;

@interface PBRequester : NSObject <NSURLConnectionDelegate>
{
    NSURL *_URL;
    id <PBRequesterDelegate> _delegate;
    NSURLConnection *_connection;
    NSRunLoop *_connectionRunLoop;
    NSThread *_startThread;
    NSMutableData *_data;
    PBDataReader *_dataReader;
    unsigned long long _lastGoodDataOffset;
    unsigned long long _uploadPayloadSize;
    unsigned long long _downloadPayloadSize;
    unsigned long long _timeRequestSent;
    unsigned long long _timeResponseReceived;
    long long _responseStatusCode;
    NSMutableArray *_requests;
    NSMutableArray *_responses;
    NSMutableArray *_internalRequests;
    NSMutableArray *_internalResponses;
    NSDictionary *_httpResponseHeaders;
    NSMutableDictionary *_httpRequestHeaders;
    double _timeoutSeconds;
    struct __CFRunLoopTimer *_timeoutTimer;
    NSString *_logRequestToFile;
    NSString *_logResponseToFile;
    _Bool _didNotifyRequestCompleted;
    NSArray *_clientCertificates;
    NSDictionary *_connectionProperties;
    _Bool _shouldHandleCookies;
    struct {
        unsigned int ignoresResponse:1;
        unsigned int loading:1;
        unsigned int needsCancel:1;
        unsigned int responseStatusSet:1;
        unsigned int parsedResponseHeader:1;
        unsigned int delegateDidReceiveResponse:1;
        unsigned int delegateDidFinish:1;
        unsigned int delegateDidCancel:1;
        unsigned int delegateDidFailWithError:1;
        unsigned int paused:1;
        unsigned int resuming:1;
    } _flags;
}

+ (_Bool)usesEncodedMessages;
@property(nonatomic) _Bool shouldHandleCookies; // @synthesize shouldHandleCookies=_shouldHandleCookies;
@property(retain, nonatomic) NSArray *clientCertificates; // @synthesize clientCertificates=_clientCertificates;
@property(readonly, nonatomic) unsigned long long downloadPayloadSize; // @synthesize downloadPayloadSize=_downloadPayloadSize;
@property(readonly, nonatomic) unsigned long long uploadPayloadSize; // @synthesize uploadPayloadSize=_uploadPayloadSize;
@property(retain, nonatomic) NSString *logResponseToFile; // @synthesize logResponseToFile=_logResponseToFile;
@property(retain, nonatomic) NSString *logRequestToFile; // @synthesize logRequestToFile=_logRequestToFile;
@property(nonatomic) double timeoutSeconds; // @synthesize timeoutSeconds=_timeoutSeconds;
@property(retain, nonatomic) NSDictionary *httpResponseHeaders; // @synthesize httpResponseHeaders=_httpResponseHeaders;
@property(retain, nonatomic) NSRunLoop *connectionRunLoop; // @synthesize connectionRunLoop=_connectionRunLoop;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) id <PBRequesterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)startWithConnectionProperties:(id)arg1;
- (id)newConnectionWithCFURLRequest:(struct _CFURLRequest *)arg1 delegate:(id)arg2 connectionProperties:(id)arg3;
- (id)newConnectionWithCFURLRequest:(struct _CFURLRequest *)arg1 delegate:(id)arg2;
- (struct _CFURLRequest *)newCFMutableURLRequestWithURL:(id)arg1;
- (id)decodeResponseData:(id)arg1;
- (void)encodeRequestData:(id)arg1 startRequestCallback:(CDUnknownBlockType)arg2;
- (void)_timeoutTimerFired;
- (void)_resetTimeoutTimer;
- (void)_removeTimeoutTimer;
- (void)_startTimeoutTimer;
@property(readonly, nonatomic) unsigned long long requestResponseTime;
- (id)connection:(id)arg1 willSendRequestForEstablishedConnection:(id)arg2 properties:(id)arg3;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (_Bool)_tryParseData;
- (id)tryReadResponseData:(id)arg1 forRequest:(id)arg2 forResponseClass:(Class)arg3;
- (_Bool)readResponsePreamble:(id)arg1;
- (void)cancelWithErrorCode:(long long)arg1;
- (void)cancelWithErrorCode:(long long)arg1 description:(id)arg2;
- (void)_cancelWithErrorDomain:(id)arg1 errorCode:(long long)arg2 userInfo:(id)arg3;
- (void)_failWithErrorDomain:(id)arg1 errorCode:(long long)arg2 userInfo:(id)arg3;
- (void)_failWithError:(id)arg1;
- (void)resume;
- (_Bool)isPaused;
- (void)pause;
- (void)cancel;
- (void)_cancelNoNotify;
- (void)_start;
- (void)start;
- (void)_serializePayload:(CDUnknownBlockType)arg1;
- (void)_logErrorIfNecessary:(id)arg1;
- (void)_logResponsesIfNecessary:(id)arg1;
- (void)_logRequestsIfNecessary:(id)arg1;
- (_Bool)_sendPayload:(id)arg1 error:(id *)arg2;
- (id)_connectionRunLoop;
- (void)writeRequest:(id)arg1 into:(id)arg2;
- (id)requestPreamble;
- (id)_osVersion;
- (id)_applicationID;
- (id)_languageLocale;
- (void)setHttpRequestHeader:(id)arg1 forKey:(id)arg2;
@property(copy, nonatomic) NSDictionary *httpRequestHeaders;
- (void)handleResponse:(id)arg1 forInternalRequest:(id)arg2;
- (id)responseForInternalRequest:(id)arg1;
- (void)addInternalRequest:(id)arg1;
- (id)internalRequests;
- (id)responseForRequest:(id)arg1;
- (void)addRequest:(id)arg1;
- (void)clearRequests;
@property(readonly, nonatomic) NSArray *requests;
- (void)setNeedsCancel;
@property _Bool needsCancel;
@property(nonatomic) _Bool ignoresResponse;
- (void)_cleanup;
- (void)dealloc;
- (id)initWithURL:(id)arg1 andDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

