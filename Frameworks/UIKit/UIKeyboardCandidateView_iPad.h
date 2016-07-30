//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIKeyboardCandidateView.h>

#import <UIKit/UICollectionViewDelegate-Protocol.h>
#import <UIKit/UIKeyboardCandidateBarDelegate-Protocol.h>

@class NSString, UIKBInputBackdropView, UIKeyboardCandidatePageControl;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateView_iPad : UIKeyboardCandidateView <UICollectionViewDelegate, UIKeyboardCandidateBarDelegate>
{
    UIKeyboardCandidatePageControl *_pageControl;
    UIKBInputBackdropView *_backdropView;
    double _extendedViewHeight;
}

+ (double)defaultExtendedControlHeight;
- (void)didEndSplitTransition;
- (void)candidateBarDidScroll:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)shouldUseKeyboardBackground:(id)arg1;
- (void)updatePageControlStatus;
- (double)_additionalClipHeight;
- (void)setCandidateViewExtended:(_Bool)arg1;
- (double)extendedViewHeight;
- (int)_clipCornersOfView:(id)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (unsigned long long)_numberOfColumns:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)rightButtonYOffset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

