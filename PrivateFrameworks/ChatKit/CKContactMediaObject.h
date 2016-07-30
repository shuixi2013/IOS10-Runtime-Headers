//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKCardMediaObject.h>

@class ABVCardRecord, UIImage;

@interface CKContactMediaObject : CKCardMediaObject
{
    ABVCardRecord *_vCard;
    UIImage *_vCardImage;
}

+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;
+ (id)UTITypes;
@property(retain, nonatomic) UIImage *vCardImage; // @synthesize vCardImage=_vCardImage;
@property(retain, nonatomic) ABVCardRecord *vCard; // @synthesize vCard=_vCard;
- (void).cxx_destruct;
- (id)vCardImageOfSize:(struct CGSize)arg1;
- (id)generateThumbnailFillToSize:(struct CGSize)arg1 contentAlignmentInsets:(struct UIEdgeInsets)arg2;
- (struct CGSize)bbSize;
- (id)subtitle;
- (id)icon;
- (id)title;
- (Class)coloredBalloonViewClass;
- (int)mediaType;

@end

