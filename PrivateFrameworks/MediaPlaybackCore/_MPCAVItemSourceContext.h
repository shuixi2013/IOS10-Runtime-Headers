//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPAVItemPlaylistIdentifier-Protocol.h>

@class MPQueueFeeder, NSString;
@protocol MPAVItemQueueIdentifier;

@interface _MPCAVItemSourceContext : NSObject <MPAVItemPlaylistIdentifier>
{
    id <MPAVItemQueueIdentifier> _itemIdentifier;
    MPQueueFeeder *_queueFeeder;
}

@property(retain, nonatomic) MPQueueFeeder *queueFeeder; // @synthesize queueFeeder=_queueFeeder;
@property(retain, nonatomic) id <MPAVItemQueueIdentifier> itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

