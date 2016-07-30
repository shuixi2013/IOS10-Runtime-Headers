//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FMCoreUI/FMDynamicTypeLabel.h>

@class UIColor;

@interface FMDistanceBadge : FMDynamicTypeLabel
{
    UIColor *_badgeColor;
    struct UIEdgeInsets _insets;
}

@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(retain, nonatomic) UIColor *badgeColor; // @synthesize badgeColor=_badgeColor;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)_commonSetup;
- (void)prepareForInterfaceBuilder;
- (void)awakeFromNib;

@end

