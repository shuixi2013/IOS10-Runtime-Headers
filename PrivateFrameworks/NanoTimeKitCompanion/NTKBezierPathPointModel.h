//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, UIBezierPath;

@interface NTKBezierPathPointModel : NSObject
{
    UIBezierPath *_path;
    NSArray *_pathElements;
    NSDictionary *_horizontalPercentageCache;
}

@property(readonly, nonatomic) UIBezierPath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (struct CGPoint)_computePointOnPathForHorizontalPercentage:(double)arg1;
- (id)_buildHorizontalPercentageCache;
- (struct CGPoint)pointOnPathForHorizontalPercentage:(double)arg1;
- (id)initWithPath:(id)arg1;

@end

