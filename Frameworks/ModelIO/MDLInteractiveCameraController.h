//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MDLStereoscopicCamera;

@interface MDLInteractiveCameraController : NSObject
{
    // Error parsing type: , name: _lookAt
    // Error parsing type: , name: _clickPoint
    // Error parsing type: , name: _dragVector
    float _pitch;
    float _yaw;
    // Error parsing type: {MDLAABB="maxBounds""minBounds"}, name: _framingBounds
    float _targetElevation;
    float _tumbleSpeed;
    float _zoomSpeed;
    float _trackSpeed;
    float _targetDistance;
    float _zoom;
    MDLStereoscopicCamera *_camera;
    // Error parsing type: , name: _dragPoint
    unsigned long long _mode;
    // Error parsing type: , name: _viewSize
    // Error parsing type: , name: _trackVector
}

@property(nonatomic) float zoom; // @synthesize zoom=_zoom;
// Error parsing type for property viewSize:
// Property attributes: T,N,V_viewSize

@property(nonatomic) float targetDistance; // @synthesize targetDistance=_targetDistance;
@property(nonatomic) float trackSpeed; // @synthesize trackSpeed=_trackSpeed;
@property(nonatomic) float zoomSpeed; // @synthesize zoomSpeed=_zoomSpeed;
@property(nonatomic) float tumbleSpeed; // @synthesize tumbleSpeed=_tumbleSpeed;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
// Error parsing type for property trackVector:
// Property attributes: T,N,V_trackVector

// Error parsing type for property dragPoint:
// Property attributes: T,N,V_dragPoint

@property(copy, nonatomic) MDLStereoscopicCamera *camera; // @synthesize camera=_camera;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)update:(float)arg1;
- (void)frameObject;
- (void)mouseMotionX:(float)arg1 Y:(float)arg2;
// Error parsing type for property position:
// Property attributes: T,N

// Error parsing type for property targetPosition:
// Property attributes: T,N

// Error parsing type for property clickPoint:
// Property attributes: T,N

@property(nonatomic) struct MDLAABB framingBounds;
- (void)frameBounds;
- (id)init;

@end

