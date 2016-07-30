//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICDrawingCommandData;
@protocol ICDrawingInputControllerDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface ICDrawingInputController : NSObject
{
    vector_c0e7c5b2 _drawPoints;
    NSObject<OS_dispatch_queue> *_inputQueue;
    NSObject<OS_dispatch_queue> *_outputQueue;
    id <ICDrawingInputControllerDelegate> _delegate;
    ICDrawingCommandData *_currentCommand;
    long long _currentInputType;
    _Bool _ended;
    double _inputScale;
    float _smoothingKernel[7];
    long long _immutableCount;
    vector_c0e7c5b2 _updatedDrawPoints;
    _Bool _drawingEndedButNotFinished;
    NSObject<OS_dispatch_semaphore> *_drawingWaitForFinishSemaphore;
    _Bool _isSnappedToRuler;
    _Bool _useRuler;
    _Bool _isSnappedToRulerTopSide;
    _Bool _canSnapToRuler;
    double _eraserIndicatorAlpha;
    double _rulerWidth;
    double _strokeMaxForce;
    double _touchSensitivity;
    struct ICDrawingPixelSmoothingFilter *_pixelSmoothingFilter;
    struct ICDrawingPointReductionFilter *_pointReductionFilter;
    struct ICDrawingStartHookFilter *_startHookFilter;
    struct ICDrawingEndHookFilter *_endHookFilter;
    struct ICDrawingVelocityCalculationFilter *_velocityFilter;
    struct ICDrawingInputSmoother *_inputSmoother;
    struct ICDrawingInputProviderInitial *_inputProvider;
    struct ICDrawingInputToOutputFilter *_inputToOutputFilter;
    struct ICDrawingAzimuthFilter *_azimuthFilter;
    struct ICDrawingEndCapsFilter *_endCapFilter;
    struct ICDrawingRulerExtremaFilter *_rulerExtremaFilter;
    struct ICDrawingEstimatedAltitudeAndAzimuthFilter *_estimatedAltitudeAndAzimuthFilter;
    struct CGPoint _lastPoint;
    struct CGAffineTransform _rulerTransform;
}

+ (void)loadDefaults;
+ (void)setupDefaults;
+ (void)initialize;
@property(nonatomic) struct ICDrawingEstimatedAltitudeAndAzimuthFilter *estimatedAltitudeAndAzimuthFilter; // @synthesize estimatedAltitudeAndAzimuthFilter=_estimatedAltitudeAndAzimuthFilter;
@property(nonatomic) struct ICDrawingRulerExtremaFilter *rulerExtremaFilter; // @synthesize rulerExtremaFilter=_rulerExtremaFilter;
@property(nonatomic) struct ICDrawingEndCapsFilter *endCapFilter; // @synthesize endCapFilter=_endCapFilter;
@property(nonatomic) struct ICDrawingAzimuthFilter *azimuthFilter; // @synthesize azimuthFilter=_azimuthFilter;
@property(nonatomic) struct ICDrawingInputToOutputFilter *inputToOutputFilter; // @synthesize inputToOutputFilter=_inputToOutputFilter;
@property(nonatomic) struct ICDrawingInputProviderInitial *inputProvider; // @synthesize inputProvider=_inputProvider;
@property(nonatomic) struct ICDrawingInputSmoother *inputSmoother; // @synthesize inputSmoother=_inputSmoother;
@property(nonatomic) struct ICDrawingVelocityCalculationFilter *velocityFilter; // @synthesize velocityFilter=_velocityFilter;
@property(nonatomic) struct ICDrawingEndHookFilter *endHookFilter; // @synthesize endHookFilter=_endHookFilter;
@property(nonatomic) struct ICDrawingStartHookFilter *startHookFilter; // @synthesize startHookFilter=_startHookFilter;
@property(nonatomic) struct ICDrawingPointReductionFilter *pointReductionFilter; // @synthesize pointReductionFilter=_pointReductionFilter;
@property(nonatomic) struct ICDrawingPixelSmoothingFilter *pixelSmoothingFilter; // @synthesize pixelSmoothingFilter=_pixelSmoothingFilter;
@property(nonatomic) double touchSensitivity; // @synthesize touchSensitivity=_touchSensitivity;
@property struct CGPoint lastPoint; // @synthesize lastPoint=_lastPoint;
@property(nonatomic) double strokeMaxForce; // @synthesize strokeMaxForce=_strokeMaxForce;
@property(nonatomic) _Bool canSnapToRuler; // @synthesize canSnapToRuler=_canSnapToRuler;
@property(nonatomic) _Bool isSnappedToRulerTopSide; // @synthesize isSnappedToRulerTopSide=_isSnappedToRulerTopSide;
@property(nonatomic) double rulerWidth; // @synthesize rulerWidth=_rulerWidth;
@property(nonatomic) _Bool useRuler; // @synthesize useRuler=_useRuler;
@property(nonatomic) struct CGAffineTransform rulerTransform; // @synthesize rulerTransform=_rulerTransform;
@property(nonatomic) double eraserIndicatorAlpha; // @synthesize eraserIndicatorAlpha=_eraserIndicatorAlpha;
@property _Bool isSnappedToRuler; // @synthesize isSnappedToRuler=_isSnappedToRuler;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)drawingCancelledWithCompletion:(CDUnknownBlockType)arg1;
- (void)drawingEndedWithPreCompletion:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_drawingAddPoint:(CDStruct_f17e9403)arg1;
- (void)drawingAddPoint:(CDStruct_f17e9403)arg1;
- (void)drawingAddPoints:(vector_c0e7c5b2)arg1;
- (void)removePredictedTouches;
- (void)updateImmutableCount;
- (void)drawingUpdateAllPoints;
- (void)drawingUpdatePoint:(CDStruct_f17e9403)arg1;
- (void)handleMarkerStartCapPoint:(CDStruct_4a3d0796 *)arg1 forInput:(CDStruct_f17e9403 *)arg2;
- (CDStruct_4a3d0796)outputPoint:(CDStruct_f17e9403)arg1 forCommandType:(unsigned int)arg2 baseValues:(CDStruct_4a3d0796)arg3;
- (CDStruct_4a3d0796)outputCurrentCommandPoint:(CDStruct_f17e9403)arg1;
- (CDStruct_4a3d0796)markerOutputPoint:(CDStruct_f17e9403)arg1 baseValues:(CDStruct_4a3d0796)arg2;
- (CDStruct_4a3d0796)pencilOutputPoint:(CDStruct_f17e9403)arg1 baseValues:(CDStruct_4a3d0796)arg2;
- (CDStruct_4a3d0796)eraserOutputPoint:(CDStruct_f17e9403)arg1 baseValues:(CDStruct_4a3d0796)arg2;
- (CDStruct_4a3d0796)penOutputPoint:(CDStruct_f17e9403)arg1 baseValues:(CDStruct_4a3d0796)arg2;
- (CDStruct_f17e9403)calculateVelocityForNewPoint:(CDStruct_f17e9403)arg1 previousPoint:(CDStruct_f17e9403)arg2;
- (CDStruct_f17e9403)calculateVelocityForFirstPoint:(CDStruct_f17e9403)arg1;
- (void)reset;
- (unsigned long long)copyInputUpdatedRangeFromIndex:(unsigned long long)arg1 into:(vector_c0e7c5b2 *)arg2;
- (vector_c0e7c5b2 *)getInputUpdatedRangeFromIndex:(inout unsigned long long *)arg1;
- (vector_82e5b66f *)getUpdatedRangeFromIndex:(inout unsigned long long *)arg1;
- (ICDrawingInputProvider_d48c6870 *)outputFilter;
@property(readonly) _Bool lastPointIsMasked;
- (void)updateRulerSnapping;
- (struct CGPoint)snapPointToRuler:(struct CGPoint)arg1;
- (void)maskToRuler;
- (void)snapToRuler;
- (_Bool)shouldSnapPointToRuler:(struct CGPoint)arg1;
- (double)distanceToRulerCenter:(struct CGPoint)arg1;
- (struct CGPoint)getRulerSnapLineOriginAndTangent:(struct CGPoint *)arg1 andNormal:(struct CGPoint *)arg2;
- (double)rulerOffset;
- (void)snapToRuler:(struct CGAffineTransform)arg1 width:(double)arg2;
- (CDStruct_30364a2d)parametersforCommandType:(unsigned int)arg1;
- (CDStruct_4a3d0796)baseValuesforCommandType:(unsigned int)arg1 inputType:(long long)arg2;
- (double)baseRadiusForCommandType:(unsigned int)arg1 inputType:(long long)arg2;
- (void)drawingBeganWithCommand:(id)arg1 inputType:(long long)arg2 start:(CDUnknownBlockType)arg3;
- (void)setInputScale:(double)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end

