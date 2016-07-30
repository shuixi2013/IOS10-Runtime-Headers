//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class NSArray, UIView;
@protocol MFDraggableItem;

@protocol MFMultiDragDestination <NSObject>
- (NSArray *)supportedDropTypes:(NSArray *)arg1;
- (struct CGRect)frameForDroppedItem:(id <MFDraggableItem>)arg1;
- (UIView *)destinationViewForDrop;
- (void)willDropItems:(NSArray *)arg1;
- (void)dropItems:(NSArray *)arg1;
- (void)dragExitedWithItems:(NSArray *)arg1;
- (void)dragMovedToPoint:(struct CGPoint)arg1 withItems:(NSArray *)arg2;
- (void)dragEnteredAtPoint:(struct CGPoint)arg1 withItems:(NSArray *)arg2;
@end

