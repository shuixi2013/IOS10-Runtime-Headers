//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, NSString;

@interface GKConcernInternal : GKInternalRepresentation
{
    GKPlayerInternal *_player;
    NSString *_message;
    unsigned int _concernID;
}

+ (id)secureCodedPropertyKeys;
@property(nonatomic) unsigned int concernID; // @synthesize concernID=_concernID;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) GKPlayerInternal *player; // @synthesize player=_player;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;

@end

