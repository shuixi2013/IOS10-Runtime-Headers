//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol NTKContainerViewLayoutDelegate;

@interface NTKContainerView : UIView
{
    id <NTKContainerViewLayoutDelegate> _layoutDelegate;
}

@property(nonatomic) __weak id <NTKContainerViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)setNeedsLayout;
- (void)layoutSubviews;

@end

