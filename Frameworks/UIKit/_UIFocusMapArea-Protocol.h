//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class _UIFocusRegion;

@protocol _UIFocusMapArea <NSObject>
@property(readonly, nonatomic) struct CGRect frame;
- (_UIFocusRegion *)intersectionWithRegion:(_UIFocusRegion *)arg1;
- (_Bool)intersectsRegion:(_UIFocusRegion *)arg1;
- (_Bool)intersectsRect:(struct CGRect)arg1;
@end

