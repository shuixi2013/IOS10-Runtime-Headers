//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface BBObserverBulletinAttachmentInfo : NSObject
{
    NSMutableDictionary *_imageSizePairs;
    _Bool _imagesFetched;
    _Bool _sizesFetched;
    NSString *_imagesRecordID;
    NSString *_sizesRecordID;
}

@property(copy, nonatomic) NSString *sizesRecordID; // @synthesize sizesRecordID=_sizesRecordID;
@property(nonatomic) _Bool sizesFetched; // @synthesize sizesFetched=_sizesFetched;
@property(copy, nonatomic) NSString *imagesRecordID; // @synthesize imagesRecordID=_imagesRecordID;
@property(nonatomic) _Bool imagesFetched; // @synthesize imagesFetched=_imagesFetched;
- (void).cxx_destruct;
- (_Bool)isSizesFetchedForRecordID:(id)arg1;
- (void)noteSizesFetchedForRecordID:(id)arg1;
- (_Bool)isImagesFetchedForRecordID:(id)arg1;
- (void)noteImagesFetchedForRecordID:(id)arg1;
- (struct CGSize)sizeForKey:(id)arg1;
- (id)imageForKey:(id)arg1;
- (void)setSize:(struct CGSize)arg1 forKey:(id)arg2;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (id)_pairForKey:(id)arg1 create:(_Bool)arg2;
- (id)init;

@end

