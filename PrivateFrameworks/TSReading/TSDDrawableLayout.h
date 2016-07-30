//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDLayout.h>

#import <TSReading/TSDWrappable-Protocol.h>

@class NSString, TSDBezierPath, TSDWrapPolygon;

@interface TSDDrawableLayout : TSDLayout <TSDWrappable>
{
    TSDWrapPolygon *mCachedWrapPolygon;
    TSDBezierPath *mCachedWrapPath;
    TSDBezierPath *mCachedExternalWrapPath;
}

- (_Bool)supportsInspectorPositioning;
- (void)invalidateParentForWrap;
- (void)i_invalidateWrap;
- (_Bool)allowsConnections;
- (void)parentDidChange;
- (void)processChangedProperty:(int)arg1;
- (void)setGeometry:(id)arg1;
- (void)dragBy:(struct CGPoint)arg1;
- (void)invalidateExteriorWrap;
- (void)invalidate;
@property(readonly, nonatomic) _Bool hasAlpha;
- (int)wrapFitType;
- (int)wrapDirection;
- (int)wrapType;
- (_Bool)isHTMLWrap;
- (id)wrapPolygon;
- (id)i_externalWrapPath;
- (id)i_wrapPath;
- (id)i_computeWrapPath;
- (id)i_computeWrapPathClosed:(_Bool)arg1;
- (struct CGRect)boundsInRoot;
- (struct CGRect)boundsInfluencingExteriorWrap;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

