//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSRequest.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface VSResourceAuthorizationRequest : VSRequest
{
    _Bool _forceAuthentication;
    NSURL *_resourceURL;
    NSString *_localizedResourceTitle;
    NSData *_userInfoJSON;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSData *userInfoJSON; // @synthesize userInfoJSON=_userInfoJSON;
@property(copy, nonatomic) NSString *localizedResourceTitle; // @synthesize localizedResourceTitle=_localizedResourceTitle;
@property(copy, nonatomic) NSURL *resourceURL; // @synthesize resourceURL=_resourceURL;
@property(nonatomic) _Bool forceAuthentication; // @synthesize forceAuthentication=_forceAuthentication;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *userInfo;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

