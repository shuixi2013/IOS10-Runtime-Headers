//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSError;
@protocol PXRunNode;

@protocol PXRunNodeDelegate <NSObject>

@optional
- (void)runNode:(id <PXRunNode>)arg1 didCancelWithError:(NSError *)arg2;
- (void)runNode:(id <PXRunNode>)arg1 didCompleteWithError:(NSError *)arg2;
- (void)runNodeWillStartRunning:(id <PXRunNode>)arg1;
@end

