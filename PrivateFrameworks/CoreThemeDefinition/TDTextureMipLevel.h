//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class TDTextureFace, TDTextureImageRenditionSpec, TDTextureRenditionSpec;

@interface TDTextureMipLevel : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) TDTextureFace *face; // @dynamic face;
@property(nonatomic) short level; // @dynamic level;
@property(retain, nonatomic) TDTextureRenditionSpec *texture; // @dynamic texture;
@property(retain, nonatomic) TDTextureImageRenditionSpec *textureImage; // @dynamic textureImage;
@end

