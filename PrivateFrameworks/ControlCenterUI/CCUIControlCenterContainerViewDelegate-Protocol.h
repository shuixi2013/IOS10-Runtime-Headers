//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUI/NSObject-Protocol.h>

@class CCUIControlCenterContainerView, NSArray, UIPageControl, UIScrollView;
@protocol CCUIControlCenterSystemAgent;

@protocol CCUIControlCenterContainerViewDelegate <NSObject>
- (id <CCUIControlCenterSystemAgent>)controlCenterSystemAgent;
- (struct UIEdgeInsets)pageInsetForContainerView:(CCUIControlCenterContainerView *)arg1;
- (struct UIEdgeInsets)marginInsetForContainerView:(CCUIControlCenterContainerView *)arg1;
- (UIPageControl *)pageControlForContainerView:(CCUIControlCenterContainerView *)arg1;
- (UIScrollView *)scrollViewForContainerView:(CCUIControlCenterContainerView *)arg1;
- (NSArray *)pagePlatterViewsForContainerView:(CCUIControlCenterContainerView *)arg1;
- (double)contentHeightForContainerView:(CCUIControlCenterContainerView *)arg1;
@end

