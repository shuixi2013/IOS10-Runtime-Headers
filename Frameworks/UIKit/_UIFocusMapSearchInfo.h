//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIFocusMapSearchInfo : NSObject
{
    NSMutableArray *_mutableSnapshots;
    NSMutableArray *_mutableDestinationRegions;
}

@property(retain, nonatomic) NSMutableArray *mutableDestinationRegions; // @synthesize mutableDestinationRegions=_mutableDestinationRegions;
@property(retain, nonatomic) NSMutableArray *mutableSnapshots; // @synthesize mutableSnapshots=_mutableSnapshots;
- (void).cxx_destruct;
- (void)addDestinationRegion:(id)arg1;
- (void)addSnapshot:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *destinationRegions;
@property(readonly, copy, nonatomic) NSArray *snapshots;
- (id)init;

@end

