//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VectorKit/VKCameraController-Protocol.h>

@class GEOMapRegion, NSString, VKCamera;
@protocol MDRenderTarget, VKCameraControllerDelegate;

__attribute__((visibility("hidden")))
@interface VKCameraController : NSObject <VKCameraController>
{
    VKCamera *_camera;
    id <MDRenderTarget> _canvas;
    id <VKCameraControllerDelegate> _delegate;
    _Bool _gesturing;
    unsigned long long _regionChangeCount;
    _Bool _inProgressRegionChangeIsAnimated;
    struct VKEdgeInsets _edgeInsets;
    _Bool _staysCenteredDuringPinch;
    _Bool _staysCenteredDuringRotation;
    _Bool _isPitchEnabled;
    _Bool _isRotateEnabled;
    _Bool _allowDatelineWraparound;
}

@property(nonatomic) _Bool allowDatelineWraparound; // @synthesize allowDatelineWraparound=_allowDatelineWraparound;
@property(nonatomic) _Bool isRotateEnabled; // @synthesize isRotateEnabled=_isRotateEnabled;
@property(nonatomic) _Bool isPitchEnabled; // @synthesize isPitchEnabled=_isPitchEnabled;
@property(nonatomic) _Bool staysCenteredDuringRotation; // @synthesize staysCenteredDuringRotation=_staysCenteredDuringRotation;
@property(nonatomic) _Bool staysCenteredDuringPinch; // @synthesize staysCenteredDuringPinch=_staysCenteredDuringPinch;
- (_Bool)centerCoordinate:(CDStruct_c3b9c2ee *)arg1 andDistanceFromCenter:(double *)arg2 forMapRegion:(id)arg3;
- (void)updateWithTimestamp:(double)arg1;
- (_Bool)wantsTimerTick;
- (_Bool)restoreViewportFromInfo:(id)arg1;
- (id)viewportInfo;
@property(readonly, nonatomic) double altitude;
@property(readonly, nonatomic) double maxPitch;
@property(nonatomic) double pitch;
@property(readonly, nonatomic) double presentationHeading;
@property(nonatomic) double heading;
@property(nonatomic) double distanceFromCenterCoordinate;
@property(nonatomic) CDStruct_c3b9c2ee centerCoordinate;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
- (void)updateCameraToPositionOrientationLimits;
- (void)stylesheetDidReload;
- (void)stylesheetDidChange;
@property(readonly, nonatomic) _Bool isRotated;
@property(readonly, nonatomic) _Bool isFullyPitched;
@property(readonly, nonatomic) _Bool isPitched;
@property(readonly, nonatomic) _Bool canRotate;
@property(readonly, nonatomic) _Bool canPitch;
- (_Bool)canZoomOutForTileSize:(long long)arg1;
- (_Bool)canZoomInForTileSize:(long long)arg1;
- (double)topDownMinimumZoomLevelForTileSize:(long long)arg1;
- (double)currentZoomLevelForTileSize:(long long)arg1;
- (double)maximumZoomLevelForTileSize:(long long)arg1;
- (double)minimumZoomLevelForTileSize:(long long)arg1;
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;
- (double)topDownMinimumZoomLevel;
- (double)currentZoomLevel;
- (double)maximumZoomLevel;
- (double)minimumZoomLevel;
- (void)edgeInsetsDidEndAnimating;
- (void)edgeInsetsWillBeginAnimating;
- (struct VKEdgeInsets)edgeInsets;
- (void)setEdgeInsets:(struct VKEdgeInsets)arg1;
- (Matrix_443f5d51)cursorFromScreenPoint:(struct CGPoint)arg1;
- (struct CGPoint)scaledScreenPointForPoint:(struct CGPoint)arg1;
- (struct CGPoint)centerScreenPoint;
- (id)detailedDescriptionDictionaryRepresentation;
- (id)detailedDescription;
- (_Bool)isAnimating;
- (void)endRegionChange;
- (void)beginRegionChange:(_Bool)arg1;
- (void)canvasDidLayout;
- (void)setGesturing:(_Bool)arg1;
- (_Bool)isGesturing;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setCanvas:(id)arg1;
- (id)canvas;
- (id)camera;
- (void)setCamera:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

