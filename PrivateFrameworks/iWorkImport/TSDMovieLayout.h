//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDMediaLayout.h>

@class TSDInfoGeometry;

__attribute__((visibility("hidden")))
@interface TSDMovieLayout : TSDMediaLayout
{
    TSDInfoGeometry *mDynamicInfoGeometry;
}

- (void)p_destroyDynamicCopies;
- (void)p_createDynamicCopies;
- (struct CGRect)computeAlignmentFrameInRoot:(_Bool)arg1;
- (id)computeLayoutGeometry;
- (struct CGRect)fullReflectionFrame;
- (struct CGRect)fullReflectionBoundsForRect:(struct CGRect)arg1;
- (id)movieInfo;
- (id)layoutGeometryFromInfo;
- (_Bool)supportsRotation;
- (id)i_computeWrapPath;
- (void)processChangedProperty:(int)arg1;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;

@end

