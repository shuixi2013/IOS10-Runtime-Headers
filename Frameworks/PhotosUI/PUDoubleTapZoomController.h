//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UITapGestureRecognizer;
@protocol PUDoubleTapZoomControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUDoubleTapZoomController : NSObject <UIGestureRecognizerDelegate>
{
    struct {
        _Bool respondsToViewHostingGestureRecognizers;
        _Bool respondsToTilingView;
        _Bool respondsToDelegateForGestureRecognizer;
        _Bool respondsToCanDoubleTapBeginAtLocationFromProvider;
    } _delegateFlags;
    _Bool __needsUpdateGestureRecognizers;
    id <PUDoubleTapZoomControllerDelegate> _delegate;
    UITapGestureRecognizer *__doubleTapGestureRecognizer;
}

@property(retain, nonatomic, setter=_setDoubleTapGestureRecognizer:) UITapGestureRecognizer *_doubleTapGestureRecognizer; // @synthesize _doubleTapGestureRecognizer=__doubleTapGestureRecognizer;
@property(nonatomic, setter=_setNeedsUpdateGestureRecognizers:) _Bool _needsUpdateGestureRecognizers; // @synthesize _needsUpdateGestureRecognizers=__needsUpdateGestureRecognizers;
@property(nonatomic) __weak id <PUDoubleTapZoomControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)_userTransformViewAtLocationFromProvider:(id)arg1;
- (void)_handleDoubleTapGestureRecognizer:(id)arg1;
- (void)_updateGestureRecognizersIfNeeded;
- (void)_invalidateGestureRecognizers;
- (_Bool)shouldDoubleTapBeginAtLocationFromProvider:(id)arg1;
@property(readonly, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer;
- (void)invalidateViewHostingGestureRecognizers;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

