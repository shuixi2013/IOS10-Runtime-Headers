//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUInteractiveDismissalController.h>

#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSMutableSet, NSString, PUChangeDirectionValueFilter, PUSwipedDownTileTracker, UIPanGestureRecognizer;

__attribute__((visibility("hidden")))
@interface PUInteractiveSwipeDismissalController : PUInteractiveDismissalController <UIGestureRecognizerDelegate>
{
    _Bool _handlingPanGestureRecognizer;
    UIPanGestureRecognizer *__panGestureRecognizer;
    NSMutableSet *__dependentScrollViews;
    PUChangeDirectionValueFilter *__dismissGestureDirectionValueFilter;
    PUSwipedDownTileTracker *__swipedDownTileTracker;
}

@property(retain, nonatomic, setter=_setSwipedDownTileTracker:) PUSwipedDownTileTracker *_swipedDownTileTracker; // @synthesize _swipedDownTileTracker=__swipedDownTileTracker;
@property(retain, nonatomic, setter=_setDismissGestureDirectionValueFilter:) PUChangeDirectionValueFilter *_dismissGestureDirectionValueFilter; // @synthesize _dismissGestureDirectionValueFilter=__dismissGestureDirectionValueFilter;
@property(nonatomic, getter=_isHandlingPanGestureRecognizer, setter=_setHandlingPanGestureRecognizer:) _Bool handlingPanGestureRecognizer; // @synthesize handlingPanGestureRecognizer=_handlingPanGestureRecognizer;
@property(readonly, nonatomic) NSMutableSet *_dependentScrollViews; // @synthesize _dependentScrollViews=__dependentScrollViews;
@property(retain, nonatomic, setter=_setPanGestureRecognizer:) UIPanGestureRecognizer *_panGestureRecognizer; // @synthesize _panGestureRecognizer=__panGestureRecognizer;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_handlePanGestureRecognizer:(id)arg1;
- (void)updateGestureRecognizersWithHostingView:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

