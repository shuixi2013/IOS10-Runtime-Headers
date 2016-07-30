//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIButton;

@interface CKCollapsableToolbar : UIView
{
    _Bool _collapsed;
    _Bool _vertical;
    UIButton *_mainButton;
    NSArray *_additionalButtons;
    double _buttonSpacing;
}

@property(nonatomic, getter=isVertical) _Bool vertical; // @synthesize vertical=_vertical;
@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=_collapsed;
@property(nonatomic) double buttonSpacing; // @synthesize buttonSpacing=_buttonSpacing;
@property(retain, nonatomic) NSArray *additionalButtons; // @synthesize additionalButtons=_additionalButtons;
@property(retain, nonatomic) UIButton *mainButton; // @synthesize mainButton=_mainButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

