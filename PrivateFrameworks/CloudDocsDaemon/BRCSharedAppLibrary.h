//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCAppLibrary.h>

@class BRCSharedClientZone;

__attribute__((visibility("hidden")))
@interface BRCSharedAppLibrary : BRCAppLibrary
{
}

- (id)pathRelativeToRoot;
@property(readonly, nonatomic) BRCSharedClientZone *clientZone; // @dynamic clientZone;
- (id)asSharedAppLibrary;
- (_Bool)isSharedAppLibrary;

@end

