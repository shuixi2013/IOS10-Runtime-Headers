//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSDate, PUVideoEditViewController;
@protocol PUEditableAsset;

@protocol PUVideoEditViewControllerPresentationDelegate <NSObject>

@optional
- (void)videoEditViewController:(PUVideoEditViewController *)arg1 didFinishPreparingForTransitionAfterEditingAsset:(id <PUEditableAsset>)arg2 modificationDate:(NSDate *)arg3 seekTime:(CDStruct_1b6d18a9)arg4;
@end

