//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NSDate, NSString, UIButton, UIImage, UIView;

@protocol NCLookView <NSObject>
@property(retain, nonatomic) UIView *colorInfusionView;
@property(nonatomic, getter=isBackgroundBlurred) _Bool backgroundBlurred;
@property(nonatomic, getter=isBanner) _Bool banner;
@property(readonly, nonatomic) UIView *customContentView;
@property(readonly, nonatomic) UIButton *utilityButton;
@property(readonly, nonatomic) UIButton *iconButton;
@property(copy, nonatomic) NSDate *date;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) UIImage *icon;
- (struct CGSize)contentSizeForSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFitsContentWithSize:(struct CGSize)arg1;
@end

