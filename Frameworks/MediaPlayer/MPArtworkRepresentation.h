//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIImage;

@interface MPArtworkRepresentation : NSObject
{
    UIImage *_image;
    id _representationToken;
    struct CGSize _representationSize;
}

+ (id)representationWithSize:(struct CGSize)arg1 image:(id)arg2;
@property(retain, nonatomic) id representationToken; // @synthesize representationToken=_representationToken;
@property(nonatomic) struct CGSize representationSize; // @synthesize representationSize=_representationSize;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)debugQuickLookObject;

@end

