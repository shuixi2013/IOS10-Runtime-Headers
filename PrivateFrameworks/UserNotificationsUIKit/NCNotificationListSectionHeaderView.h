//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import <UserNotificationsUIKit/NCNotificationListClearButtonDelegate-Protocol.h>

@class NCNotificationListClearButton, NSString, UILabel;
@protocol NCNotificationListSectionHeaderViewDelegate;

@interface NCNotificationListSectionHeaderView : UICollectionReusableView <NCNotificationListClearButtonDelegate>
{
    id <NCNotificationListSectionHeaderViewDelegate> _delegate;
    UILabel *_titleLabel;
    NCNotificationListClearButton *_clearButton;
    NSString *_sectionIdentifier;
}

+ (id)_labelFont;
+ (double)headerHeight;
@property(copy, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property(retain, nonatomic) NCNotificationListClearButton *clearButton; // @synthesize clearButton=_clearButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <NCNotificationListSectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_layoutClearButtonWithScale:(double)arg1;
- (void)_layoutTitleLabelWithScale:(double)arg1;
- (double)_titleLabelBaselineOffset;
- (void)_resetClearButtonStateAnimated:(_Bool)arg1;
- (void)_clearButtonAction:(id)arg1;
- (long long)_graphicsQuality;
- (void)clearButtonViewDidDismissForceTouchView:(id)arg1;
- (void)clearButtonViewDidPresentForceTouchView:(id)arg1;
- (_Bool)dismissModalFullScreenIfNeeded;
- (void)resetAnimated:(_Bool)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1 forSectionIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

