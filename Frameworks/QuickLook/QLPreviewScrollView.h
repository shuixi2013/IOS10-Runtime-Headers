//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <QuickLook/UIScrollViewDelegate-Protocol.h>

@class NSString;
@protocol QLPreviewScrollViewZoomDelegate;

__attribute__((visibility("hidden")))
@interface QLPreviewScrollView : UIScrollView <UIScrollViewDelegate>
{
    _Bool _inSizeChange;
    struct CGSize _lastUpdatedSize;
    _Bool _readyToCancelPanGesture;
    _Bool _needsZoomUpdate;
    _Bool _shouldFit;
    double _minZoomScale;
    double _maxZoomScale;
    double _pinchMaxZoomScale;
    double _fillZoomScale;
    double _fitZoomScale;
    double _contentIsSmallerThanView;
    id <QLPreviewScrollViewZoomDelegate> _zoomDelegate;
    struct CGSize _contentViewSize;
}

@property _Bool shouldFit; // @synthesize shouldFit=_shouldFit;
@property __weak id <QLPreviewScrollViewZoomDelegate> zoomDelegate; // @synthesize zoomDelegate=_zoomDelegate;
@property(readonly) double contentIsSmallerThanView; // @synthesize contentIsSmallerThanView=_contentIsSmallerThanView;
@property(readonly) double fitZoomScale; // @synthesize fitZoomScale=_fitZoomScale;
@property(readonly) double fillZoomScale; // @synthesize fillZoomScale=_fillZoomScale;
@property(readonly) double pinchMaxZoomScale; // @synthesize pinchMaxZoomScale=_pinchMaxZoomScale;
@property(readonly) double maxZoomScale; // @synthesize maxZoomScale=_maxZoomScale;
@property(readonly) double minZoomScale; // @synthesize minZoomScale=_minZoomScale;
@property(nonatomic) struct CGSize contentViewSize; // @synthesize contentViewSize=_contentViewSize;
@property(nonatomic) _Bool needsZoomUpdate; // @synthesize needsZoomUpdate=_needsZoomUpdate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (struct CGRect)zoomRectForScale:(double)arg1 withCenter:(struct CGPoint)arg2;
- (void)resetZoomScale;
- (void)updateZoomScalesWithSize:(struct CGSize)arg1;
- (void)updateZoomScales;
- (double)_maxZoomScaleForContentSize:(struct CGSize)arg1;
- (void)_updateScrollViewZomming;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

