//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLSessionTaskTransactionMetrics.h>

@class NSDate, NSString, NSURLRequest, NSURLResponse;

__attribute__((visibility("hidden")))
@interface __NSCFURLSessionTaskTransactionMetrics : NSURLSessionTaskTransactionMetrics
{
    NSURLRequest *_request;
    NSURLResponse *_response;
    NSDate *_fetchStartDate;
    NSDate *_domainLookupStartDate;
    NSDate *_domainLookupEndDate;
    NSDate *_connectStartDate;
    NSDate *_connectEndDate;
    NSDate *_secureConnectionStartDate;
    NSDate *_secureConnectionEndDate;
    NSDate *_requestStartDate;
    NSDate *_requestEndDate;
    NSDate *_responseStartDate;
    NSDate *_responseEndDate;
    NSString *_networkProtocolName;
    _Bool _proxyConnection;
    _Bool _reusedConnection;
    long long _resourceFetchType;
    _Bool __secureConnection;
    _Bool __localCache;
    _Bool __serverPush;
    _Bool __cellular;
    unsigned int __redirected;
}

- (void)set_redirected:(unsigned int)arg1;
- (unsigned int)_redirected;
- (void)set_cellular:(_Bool)arg1;
- (_Bool)_cellular;
- (void)set_serverPush:(_Bool)arg1;
- (_Bool)_serverPush;
- (void)set_localCache:(_Bool)arg1;
- (_Bool)_localCache;
- (void)set_secureConnection:(_Bool)arg1;
- (_Bool)_secureConnection;
- (void)setResourceFetchType:(long long)arg1;
- (long long)resourceFetchType;
- (void)setReusedConnection:(_Bool)arg1;
- (_Bool)isReusedConnection;
- (void)setProxyConnection:(_Bool)arg1;
- (_Bool)isProxyConnection;
- (void)setNetworkProtocolName:(id)arg1;
- (id)networkProtocolName;
- (void)setResponseEndDate:(id)arg1;
- (id)responseEndDate;
- (void)setResponseStartDate:(id)arg1;
- (id)responseStartDate;
- (void)setRequestEndDate:(id)arg1;
- (id)requestEndDate;
- (void)setRequestStartDate:(id)arg1;
- (id)requestStartDate;
- (void)setSecureConnectionEndDate:(id)arg1;
- (id)secureConnectionEndDate;
- (void)setSecureConnectionStartDate:(id)arg1;
- (id)secureConnectionStartDate;
- (void)setConnectEndDate:(id)arg1;
- (id)connectEndDate;
- (void)setConnectStartDate:(id)arg1;
- (id)connectStartDate;
- (void)setDomainLookupEndDate:(id)arg1;
- (id)domainLookupEndDate;
- (void)setDomainLookupStartDate:(id)arg1;
- (id)domainLookupStartDate;
- (void)setFetchStartDate:(id)arg1;
- (id)fetchStartDate;
- (void)setResponse:(id)arg1;
- (id)response;
- (void)setRequest:(id)arg1;
- (id)request;
- (void)dealloc;
- (id)_initWithPerformanceTiming:(struct __PerformanceTiming *)arg1;
- (id)init;

@end

