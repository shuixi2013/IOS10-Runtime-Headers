//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UILabel;

@interface PKPassPaymentSummaryHeaderView : UIView
{
    UILabel *_titleLabel;
    UILabel *_secondaryTitleLabel;
}

+ (struct CGSize)_sizeForLabelWithText:(id)arg1 font:(id)arg2 maximumNumberOfLines:(long long)arg3 width:(double)arg4;
+ (id)_titleFont;
+ (double)preferredHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *color;
@property(retain, nonatomic) NSString *secondaryTitle;
@property(retain, nonatomic) NSString *primaryTitle;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
