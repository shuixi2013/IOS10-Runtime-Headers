//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVPlaylistItemRepresentation.h>

@class AVPlaylistItemRepresentationInternal, AVURLAsset, NSDictionary, NSString;

@interface AVMutablePlaylistItemRepresentation : AVPlaylistItemRepresentation
{
    AVPlaylistItemRepresentationInternal *_mutableIvars;
}

@property(copy, nonatomic) NSDictionary *gaplessInfo;
@property(copy, nonatomic) NSString *serviceIdentifier;
@property(copy, nonatomic) NSDictionary *audibleDRMInfo;
@property(copy, nonatomic) AVURLAsset *asset;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithURLAsset:(id)arg1;

@end

