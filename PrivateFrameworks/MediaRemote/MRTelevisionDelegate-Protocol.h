//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaRemote/NSObject-Protocol.h>

@class MRTelevision, MRTelevisionController;

@protocol MRTelevisionDelegate <NSObject>

@optional
- (void)televisionController:(MRTelevisionController *)arg1 didRemoveTelevision:(MRTelevision *)arg2;
- (void)televisionController:(MRTelevisionController *)arg1 didDiscoverTelevision:(MRTelevision *)arg2;
@end

