//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUI/NSObject-Protocol.h>

@class CCUIControlCenterSectionViewController, CCUIControlCenterStatusUpdate;
@protocol CCUIControlCenterSystemAgent;

@protocol CCUIControlCenterSectionViewControllerDelegate <NSObject>
- (long long)layoutStyle;
- (id <CCUIControlCenterSystemAgent>)controlCenterSystemAgent;
- (void)sectionWantsControlCenterDismissal:(CCUIControlCenterSectionViewController *)arg1;
- (void)section:(CCUIControlCenterSectionViewController *)arg1 publishStatusUpdate:(CCUIControlCenterStatusUpdate *)arg2;
- (void)noteSectionEnabledStateDidChange:(CCUIControlCenterSectionViewController *)arg1;
@end

