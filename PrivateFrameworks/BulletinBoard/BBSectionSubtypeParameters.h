//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class BBColor, BBSectionIcon, NSNumber, NSSet, NSString;

@interface BBSectionSubtypeParameters : NSObject <NSSecureCoding>
{
    BBSectionSubtypeParameters *_fallbackParameters;
    NSString *_topic;
    NSString *_missedBannerDescriptionFormat;
    NSString *_fullUnlockActionLabel;
    NSString *_unlockActionLabel;
    NSString *_fullAlternateActionLabel;
    NSString *_alternateActionLabel;
    BBSectionIcon *_sectionIconOverride;
    BBColor *_tintColor;
    NSString *_bannerAccessoryRemoteViewControllerClassName;
    NSString *_bannerAccessoryRemoteServiceBundleIdentifier;
    NSString *_secondaryContentRemoteViewControllerClassName;
    NSString *_secondaryContentRemoteServiceBundleIdentifier;
    NSNumber *_boxedSuppressesAlertsWhenAppIsActive;
    NSNumber *_boxedCoalescesWhenLocked;
    NSNumber *_boxedRealertCount;
    NSNumber *_boxedInertWhenLocked;
    NSNumber *_boxedPreservesUnlockActionCase;
    NSNumber *_boxedVisuallyIndicatesWhenDateIsInFuture;
    NSNumber *_boxedCanBeSilencedByMenuButtonPress;
    NSNumber *_boxedPreventLock;
    NSNumber *_boxedIgnoresQuietMode;
    NSNumber *_boxedSuppressesTitle;
    NSNumber *_boxedShowsUnreadIndicatorForNoticesFeed;
    NSNumber *_boxedShowsContactPhoto;
    NSNumber *_boxedPlaysSoundForModify;
    NSNumber *_boxedSubtypePriority;
    NSNumber *_boxedIPodOutAlertType;
    NSNumber *_boxedAllowsAutomaticRemovalFromLockScreen;
    NSNumber *_boxedAllowsAddingToLockScreenWhenUnlocked;
    NSNumber *_boxedPrioritizeAtTopOfLockScreen;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *boxedPrioritizeAtTopOfLockScreen; // @synthesize boxedPrioritizeAtTopOfLockScreen=_boxedPrioritizeAtTopOfLockScreen;
@property(retain, nonatomic) NSNumber *boxedAllowsAddingToLockScreenWhenUnlocked; // @synthesize boxedAllowsAddingToLockScreenWhenUnlocked=_boxedAllowsAddingToLockScreenWhenUnlocked;
@property(retain, nonatomic) NSNumber *boxedAllowsAutomaticRemovalFromLockScreen; // @synthesize boxedAllowsAutomaticRemovalFromLockScreen=_boxedAllowsAutomaticRemovalFromLockScreen;
@property(retain, nonatomic) NSNumber *boxedIPodOutAlertType; // @synthesize boxedIPodOutAlertType=_boxedIPodOutAlertType;
@property(retain, nonatomic) NSNumber *boxedSubtypePriority; // @synthesize boxedSubtypePriority=_boxedSubtypePriority;
@property(retain, nonatomic) NSNumber *boxedPlaysSoundForModify; // @synthesize boxedPlaysSoundForModify=_boxedPlaysSoundForModify;
@property(retain, nonatomic) NSNumber *boxedShowsContactPhoto; // @synthesize boxedShowsContactPhoto=_boxedShowsContactPhoto;
@property(retain, nonatomic) NSNumber *boxedShowsUnreadIndicatorForNoticesFeed; // @synthesize boxedShowsUnreadIndicatorForNoticesFeed=_boxedShowsUnreadIndicatorForNoticesFeed;
@property(retain, nonatomic) NSNumber *boxedSuppressesTitle; // @synthesize boxedSuppressesTitle=_boxedSuppressesTitle;
@property(retain, nonatomic) NSNumber *boxedIgnoresQuietMode; // @synthesize boxedIgnoresQuietMode=_boxedIgnoresQuietMode;
@property(retain, nonatomic) NSNumber *boxedPreventLock; // @synthesize boxedPreventLock=_boxedPreventLock;
@property(retain, nonatomic) NSNumber *boxedCanBeSilencedByMenuButtonPress; // @synthesize boxedCanBeSilencedByMenuButtonPress=_boxedCanBeSilencedByMenuButtonPress;
@property(retain, nonatomic) NSNumber *boxedVisuallyIndicatesWhenDateIsInFuture; // @synthesize boxedVisuallyIndicatesWhenDateIsInFuture=_boxedVisuallyIndicatesWhenDateIsInFuture;
@property(retain, nonatomic) NSNumber *boxedPreservesUnlockActionCase; // @synthesize boxedPreservesUnlockActionCase=_boxedPreservesUnlockActionCase;
@property(retain, nonatomic) NSNumber *boxedInertWhenLocked; // @synthesize boxedInertWhenLocked=_boxedInertWhenLocked;
@property(retain, nonatomic) NSNumber *boxedRealertCount; // @synthesize boxedRealertCount=_boxedRealertCount;
@property(retain, nonatomic) NSNumber *boxedCoalescesWhenLocked; // @synthesize boxedCoalescesWhenLocked=_boxedCoalescesWhenLocked;
@property(retain, nonatomic) NSNumber *boxedSuppressesAlertsWhenAppIsActive; // @synthesize boxedSuppressesAlertsWhenAppIsActive=_boxedSuppressesAlertsWhenAppIsActive;
@property(copy, nonatomic) NSString *secondaryContentRemoteServiceBundleIdentifier; // @synthesize secondaryContentRemoteServiceBundleIdentifier=_secondaryContentRemoteServiceBundleIdentifier;
@property(copy, nonatomic) NSString *secondaryContentRemoteViewControllerClassName; // @synthesize secondaryContentRemoteViewControllerClassName=_secondaryContentRemoteViewControllerClassName;
@property(copy, nonatomic) NSString *bannerAccessoryRemoteServiceBundleIdentifier; // @synthesize bannerAccessoryRemoteServiceBundleIdentifier=_bannerAccessoryRemoteServiceBundleIdentifier;
@property(copy, nonatomic) NSString *bannerAccessoryRemoteViewControllerClassName; // @synthesize bannerAccessoryRemoteViewControllerClassName=_bannerAccessoryRemoteViewControllerClassName;
@property(retain, nonatomic) BBColor *tintColor; // @synthesize tintColor=_tintColor;
@property(copy, nonatomic) NSString *alternateActionLabel; // @synthesize alternateActionLabel=_alternateActionLabel;
@property(copy, nonatomic) NSString *fullAlternateActionLabel; // @synthesize fullAlternateActionLabel=_fullAlternateActionLabel;
@property(copy, nonatomic) NSString *unlockActionLabel; // @synthesize unlockActionLabel=_unlockActionLabel;
@property(copy, nonatomic) NSString *fullUnlockActionLabel; // @synthesize fullUnlockActionLabel=_fullUnlockActionLabel;
@property(copy, nonatomic) NSString *missedBannerDescriptionFormat; // @synthesize missedBannerDescriptionFormat=_missedBannerDescriptionFormat;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic) __weak BBSectionSubtypeParameters *fallbackParameters; // @synthesize fallbackParameters=_fallbackParameters;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic) _Bool prioritizeAtTopOfLockScreen;
@property(nonatomic) _Bool allowsAddingToLockScreenWhenUnlocked;
@property(nonatomic) _Bool allowsAutomaticRemovalFromLockScreen;
@property(nonatomic) long long iPodOutAlertType;
@property(nonatomic) unsigned long long subtypePriority;
@property(nonatomic) _Bool playsSoundForModify;
@property(nonatomic) _Bool showsContactPhoto;
@property(nonatomic) _Bool showsUnreadIndicatorForNoticesFeed;
@property(nonatomic) _Bool suppressesTitle;
@property(nonatomic) _Bool ignoresQuietMode;
@property(nonatomic) _Bool preventLock;
@property(nonatomic) _Bool canBeSilencedByMenuButtonPress;
@property(nonatomic) _Bool visuallyIndicatesWhenDateIsInFuture;
@property(nonatomic) _Bool preservesUnlockActionCase;
@property(nonatomic) _Bool inertWhenLocked;
@property(nonatomic) unsigned long long realertCount;
@property(nonatomic) _Bool coalescesWhenLocked;
@property(nonatomic) _Bool suppressesAlertsWhenAppIsActive;
@property(retain, nonatomic) NSSet *alertSuppressionAppIDs;
@property(copy, nonatomic) BBSectionIcon *sectionIconOverride; // @synthesize sectionIconOverride=_sectionIconOverride;
- (id)initWithFallbackParameters:(id)arg1;

@end

