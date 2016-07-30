//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BLCannyEdgeAutoThres : NSObject
{
    int _cols;
    int _rows;
    float _sigma;
    char *_dataPointer;
    int *_smoothedImg;
    int *_deriv_x;
    int *_deriv_y;
    int *_magnitude;
    char *_nonMaxSup;
    float *_anglePointer;
}

- (void)follow_edges:(char *)arg1 edgeMagPtr:(int *)arg2 lowVal:(int)arg3;
- (void)apply_hysteresis:(char *)arg1;
- (void)non_max_supp;
- (void)magnitude_x_y;
- (void)derivative_x_y;
- (void)genGaussianKernel:(float *)arg1;
- (void)gaussianSmooth;
- (void)CannyEdge:(char *)arg1 rows:(int)arg2 cols:(int)arg3 output:(char *)arg4 outputAngle:(float *)arg5;

@end

