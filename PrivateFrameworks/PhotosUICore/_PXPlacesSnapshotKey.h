//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@interface _PXPlacesSnapshotKey : NSObject <NSCopying>
{
    struct CGSize __imageSize;
}

@property(nonatomic) struct CGSize _imageSize; // @synthesize _imageSize=__imageSize;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImageSize:(struct CGSize)arg1;

@end

