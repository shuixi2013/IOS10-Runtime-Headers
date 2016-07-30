//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/SFCardSection.h>

@class NSArray, SFActionItem, SFMediaItem;

@interface SFMediaInfoCardSection : SFCardSection
{
    SFMediaItem *_mediaItem;
    NSArray *_details;
    SFActionItem *_playAction;
    NSArray *_offers;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *offers; // @synthesize offers=_offers;
@property(retain, nonatomic) SFActionItem *playAction; // @synthesize playAction=_playAction;
@property(copy, nonatomic) NSArray *details; // @synthesize details=_details;
@property(retain, nonatomic) SFMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

