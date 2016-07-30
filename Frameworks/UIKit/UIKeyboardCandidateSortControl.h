//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIKBThemedView, UIKeyboardCandidateBarSegmentControl, UISegmentedControl;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateSortControl : UIView
{
    UIKeyboardCandidateBarSegmentControl *_segmentedControl;
    int _candidatesVisualStyle;
    _Bool _legacyAlertAppearance;
    UIKBThemedView *_themedView;
}

+ (_Bool)_preventsAppearanceProxyCustomization;
@property(retain, nonatomic) UIKBThemedView *themedView; // @synthesize themedView=_themedView;
@property(readonly) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void)setSortControlTitles:(id)arg1;
- (_Bool)needsToUpdateSortControlForTitles:(id)arg1;
- (void)selectNextSegment;
- (void)selectPreviousSegment;
- (void)layoutSubviews;
- (void)_setRenderConfig:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 candidatesVisualStyle:(int)arg2 legacyAlertAppearance:(_Bool)arg3;
- (void)updateTitleTextAttributes;
- (void)addSegmentedControlWithFrame:(struct CGRect)arg1;

@end

