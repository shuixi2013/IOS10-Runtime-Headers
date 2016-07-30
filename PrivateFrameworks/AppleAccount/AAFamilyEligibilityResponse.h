//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSArray, NSString;

@interface AAFamilyEligibilityResponse : AAResponse
{
    _Bool _hasPendingInvites;
    NSArray *_familyFeaturePrimaryDescriptions;
    NSArray *_familyFeatureSecondaryDescriptions;
    NSString *_familyFeatureSecondaryTitle;
    NSString *_underageEligibilityAlertTitle;
    NSString *_underageEligibilityAlertMessage;
}

@property(readonly, nonatomic) NSString *underageEligibilityAlertMessage; // @synthesize underageEligibilityAlertMessage=_underageEligibilityAlertMessage;
@property(readonly, nonatomic) NSString *underageEligibilityAlertTitle; // @synthesize underageEligibilityAlertTitle=_underageEligibilityAlertTitle;
@property(readonly, nonatomic) NSString *familyFeatureSecondaryTitle; // @synthesize familyFeatureSecondaryTitle=_familyFeatureSecondaryTitle;
@property(readonly, nonatomic) NSArray *familyFeatureSecondaryDescriptions; // @synthesize familyFeatureSecondaryDescriptions=_familyFeatureSecondaryDescriptions;
@property(readonly, nonatomic) NSArray *familyFeaturePrimaryDescriptions; // @synthesize familyFeaturePrimaryDescriptions=_familyFeaturePrimaryDescriptions;
@property(readonly, nonatomic) _Bool hasPendingInvites; // @synthesize hasPendingInvites=_hasPendingInvites;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long eligibilityStatus;
@property(readonly, nonatomic) _Bool eligible;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

