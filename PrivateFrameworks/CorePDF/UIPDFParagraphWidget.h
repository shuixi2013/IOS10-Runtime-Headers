//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CorePDF/UIPDFSelectionWidget-Protocol.h>

@class CALayer, CAShapeLayer, UIPDFPageView;

@interface UIPDFParagraphWidget : NSObject <UIPDFSelectionWidget>
{
    CAShapeLayer *_trackingBorder;
    struct CGRect _initialRect;
    _Bool _tracking;
    struct CGRect _currentTrackingRect;
    CALayer *_leftGrabber;
    CALayer *_rightGrabber;
    CALayer *_topGrabber;
    CALayer *_bottomGrabber;
    CALayer *_selectedGrabber;
    struct CGRect _boundsInPDFSpace;
    struct CGColor *_grabberColor;
    UIPDFPageView *_pageView;
    struct CGPoint _initialSelectionPointOnPage;
}

@property(readonly, nonatomic) struct CGPoint initialSelectionPointOnPage; // @synthesize initialSelectionPointOnPage=_initialSelectionPointOnPage;
@property(nonatomic) UIPDFPageView *pageView; // @synthesize pageView=_pageView;
- (void)hide;
@property(readonly, nonatomic) struct CGPoint currentSelectionPointOnPage;
- (struct CGRect)selectionRectangle;
- (void)endTracking;
- (void)track:(struct CGPoint)arg1;
- (void)setSelectedGrabberPosition:(struct CGRect)arg1;
- (struct CGRect)adjustRect:(struct CGRect)arg1 toPoint:(struct CGPoint)arg2;
- (void)setSelectedGrabber:(unsigned long long)arg1;
- (void)layout;
- (struct CGPoint)viewOffset;
- (struct CGPoint)selectedPointFor:(struct CGPoint)arg1;
- (_Bool)hitTest:(struct CGPoint)arg1 fixedPoint:(struct CGPoint *)arg2 preceeds:(_Bool *)arg3;
- (void)remove;
- (void)setSelection:(id)arg1;
- (struct CGRect)selectionBoundsInEffectsSpace;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)dealloc;
- (id)init;

@end

