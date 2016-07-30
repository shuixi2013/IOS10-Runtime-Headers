//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NTKFaceColorScheme, _StrokeAnimatableShapeView;

@interface NTKActivityDialSegment : NSObject
{
    _StrokeAnimatableShapeView *_arcView;
    _StrokeAnimatableShapeView *_tickView;
    double _alpha;
    NTKFaceColorScheme *_colorScheme;
}

@property(retain, nonatomic) NTKFaceColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
- (void).cxx_destruct;
- (void)setColorScheme:(id)arg1 animated:(_Bool)arg2 byBrightening:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 startAngle:(double)arg2 endAngle:(double)arg3;
@property(readonly, nonatomic) _StrokeAnimatableShapeView *tickView;
@property(readonly, nonatomic) _StrokeAnimatableShapeView *arcView;

@end
