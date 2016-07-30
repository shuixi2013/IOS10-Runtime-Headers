//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUInteractiveDismissalController.h>

#import <PhotosUI/PUPinchedTileTrackerDelegate-Protocol.h>
#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, PUChangeDirectionValueFilter, PUPinchedTileTracker, UIPinchGestureRecognizer;

__attribute__((visibility("hidden")))
@interface PUInteractivePinchDismissalController : PUInteractiveDismissalController <UIGestureRecognizerDelegate, PUPinchedTileTrackerDelegate>
{
    _Bool _handlingPinchGestureRecognizer;
    UIPinchGestureRecognizer *__pinchGestureRecognizer;
    PUChangeDirectionValueFilter *__scaleDirectionValueFilter;
    PUPinchedTileTracker *__pinchedTileTracker;
}

@property(retain, nonatomic, setter=_setPinchedTileTracker:) PUPinchedTileTracker *_pinchedTileTracker; // @synthesize _pinchedTileTracker=__pinchedTileTracker;
@property(retain, nonatomic, setter=_setScaleDirectionValueFilter:) PUChangeDirectionValueFilter *_scaleDirectionValueFilter; // @synthesize _scaleDirectionValueFilter=__scaleDirectionValueFilter;
@property(nonatomic, getter=_isHandlingPinchGestureRecognizer, setter=_setHandlingPinchGestureRecognizer:) _Bool handlingPinchGestureRecognizer; // @synthesize handlingPinchGestureRecognizer=_handlingPinchGestureRecognizer;
@property(retain, nonatomic, setter=_setPinchGestureRecognizer:) UIPinchGestureRecognizer *_pinchGestureRecognizer; // @synthesize _pinchGestureRecognizer=__pinchGestureRecognizer;
- (void).cxx_destruct;
- (id)pinchedTiledTracker:(id)arg1 finalLayoutInfoForInitialLayoutInfo:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_handlePinchGestureRecognizer:(id)arg1;
- (void)updateGestureRecognizersWithHostingView:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

