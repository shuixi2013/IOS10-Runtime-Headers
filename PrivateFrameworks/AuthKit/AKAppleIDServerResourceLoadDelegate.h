//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/NSSecureCoding-Protocol.h>

@class AKAnisetteData, AKDevice, NSString;

@interface AKAppleIDServerResourceLoadDelegate : NSObject <NSSecureCoding>
{
    NSString *_altDSID;
    NSString *_identityToken;
    _Bool _shouldSendEphemeralAuthHeader;
    _Bool _shouldSendAbsintheHeader;
    _Bool _isEligibleToDisableStingray;
    _Bool _shouldSendICSCIntentHeader;
    _Bool _shouldSendLocalUserHasAppleIDLoginHeader;
    NSString *_serviceToken;
    long long _serviceType;
    NSString *_passwordResetToken;
    NSString *_continuationToken;
    AKDevice *_proxiedDevice;
    AKAnisetteData *_proxiedDeviceAnisetteData;
}

+ (unsigned long long)signalFromServerResponse:(id)arg1;
+ (id)sharedController;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) AKAnisetteData *proxiedDeviceAnisetteData; // @synthesize proxiedDeviceAnisetteData=_proxiedDeviceAnisetteData;
@property(retain, nonatomic) AKDevice *proxiedDevice; // @synthesize proxiedDevice=_proxiedDevice;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy, nonatomic) NSString *continuationToken; // @synthesize continuationToken=_continuationToken;
@property(copy, nonatomic) NSString *passwordResetToken; // @synthesize passwordResetToken=_passwordResetToken;
@property(nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic) _Bool shouldSendLocalUserHasAppleIDLoginHeader; // @synthesize shouldSendLocalUserHasAppleIDLoginHeader=_shouldSendLocalUserHasAppleIDLoginHeader;
@property(nonatomic) _Bool shouldSendICSCIntentHeader; // @synthesize shouldSendICSCIntentHeader=_shouldSendICSCIntentHeader;
@property(nonatomic) _Bool isEligibleToDisableStingray; // @synthesize isEligibleToDisableStingray=_isEligibleToDisableStingray;
@property(nonatomic) _Bool shouldSendAbsintheHeader; // @synthesize shouldSendAbsintheHeader=_shouldSendAbsintheHeader;
@property(nonatomic) _Bool shouldSendEphemeralAuthHeader; // @synthesize shouldSendEphemeralAuthHeader=_shouldSendEphemeralAuthHeader;
@property(copy, nonatomic) NSString *serviceToken; // @synthesize serviceToken=_serviceToken;
- (void).cxx_destruct;
- (_Bool)isResponseFinalForHSA2ServerFlow:(id)arg1;
- (_Bool)isResponseActionable:(id)arg1;
- (_Bool)isResponseFinal:(id)arg1;
- (void)signRequest:(id)arg1;
- (id)initWithAltDSID:(id)arg1 identityToken:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

