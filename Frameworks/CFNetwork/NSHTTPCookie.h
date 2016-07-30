//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSHTTPCookieInternal, NSString, NSURL;

@interface NSHTTPCookie : NSObject
{
    NSHTTPCookieInternal *_cookiePrivate;
}

+ (id)_cookieForSetCookieString:(id)arg1 forURL:(id)arg2 partition:(id)arg3;
+ (id)cookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2;
+ (id)_parsedCookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2;
+ (id)_cookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2 singleCookie:(_Bool)arg3;
+ (id)requestHeaderFieldsWithCookies:(id)arg1;
+ (const struct __CFArray *)_ns2cfCookies:(id)arg1;
+ (id)_cf2nsCookies:(struct __CFArray *)arg1;
+ (id)cookieWithCFHTTPCookie:(struct OpaqueCFHTTPCookie *)arg1;
+ (id)cookieWithProperties:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)_isExpired;
- (id)_key;
- (long long)_compareForHeaderOrder:(id)arg1;
- (id)MaxAge;
- (id)Port;
- (id)Discard;
- (id)Secure;
- (id)Version;
- (id)OriginURL;
- (id)StoragePartition;
- (id)CommentURL;
- (id)Comment;
- (id)Expires;
- (id)Path;
- (id)Domain;
- (id)Value;
- (id)Name;
- (id)_storagePartition;
@property(readonly, copy) NSArray *portList;
@property(readonly, copy) NSURL *commentURL;
@property(readonly, copy) NSString *comment;
@property(readonly, copy) NSString *path;
@property(readonly, copy) NSString *domain;
@property(readonly, copy) NSString *value;
@property(readonly, copy) NSString *name;
@property(readonly, copy) NSDate *expiresDate;
@property(readonly, getter=isHTTPOnly) _Bool HTTPOnly;
@property(readonly, getter=isSecure) _Bool secure;
@property(readonly, getter=isSessionOnly) _Bool sessionOnly;
@property(readonly) unsigned long long version;
- (const struct OpaqueCFHTTPCookie *)_CFHTTPCookie;
- (const struct OpaqueCFHTTPCookie *)_GetInternalCFHTTPCookie;
@property(readonly, copy) NSDictionary *properties;
- (void)dealloc;
- (id)init;
- (id)initWithCFHTTPCookie:(struct OpaqueCFHTTPCookie *)arg1;
- (id)initWithProperties:(id)arg1;

@end

