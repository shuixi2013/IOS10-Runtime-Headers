//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/JSExport-Protocol.h>

@class JSValue, NSString;

@protocol SKUIJSRestrictions <JSExport>
- (void)presentExplicitRestrictionAlertIfNeededOfType:(NSString *)arg1:(JSValue *)arg2;
- (void)didDisplayExplicitRestrictionAlertOfType:(NSString *)arg1;
- (void)shouldDisplayExplicitRestrictionAlertOfType:(NSString *)arg1:(JSValue *)arg2;
- (void)setAllowExplicitContent;
- (void)isRestrictionsPasscodeSet:(JSValue *)arg1;
- (void)isExplicitContentDisallowedInCurrentStoreFront:(JSValue *)arg1;
- (void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(JSValue *)arg1;
@end

