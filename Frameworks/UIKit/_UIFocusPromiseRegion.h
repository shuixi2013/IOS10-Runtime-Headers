//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIFocusRegion.h>

@protocol _UIFocusPromiseRegionDelegate;

__attribute__((visibility("hidden")))
@interface _UIFocusPromiseRegion : _UIFocusRegion
{
    id <_UIFocusPromiseRegionDelegate> _delegate;
}

@property(nonatomic) __weak id <_UIFocusPromiseRegionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (_Bool)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1;
- (long long)_visualRepresentationPatternType;
- (id)_visualRepresentationColor;
- (id)_delegateFulfillFocusPromiseRegion;
- (unsigned long long)_focusableBoundaries;
- (id)_destinationItemForFocusMovement:(id)arg1 inMap:(id)arg2;
- (_Bool)_shouldCropRegionToSearchArea;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

