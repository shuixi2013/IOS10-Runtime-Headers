//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class _UIFocusMap, _UIFocusMovementInfo;
@protocol UIFocusEnvironment, UIFocusItem;

@protocol _UIFocusMapDelegate <NSObject>

@optional
- (id <UIFocusItem>)_focusMap:(_UIFocusMap *)arg1 preferredDestinationItemForFocusMovement:(_UIFocusMovementInfo *)arg2;
- (id <UIFocusItem>)_focusMap:(_UIFocusMap *)arg1 preferredDefaultFocusItemInEnvironment:(id <UIFocusEnvironment>)arg2;
@end

