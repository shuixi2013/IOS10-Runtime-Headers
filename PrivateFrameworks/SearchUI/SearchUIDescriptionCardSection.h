//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/SearchUICardSection.h>

#import <SearchUI/SearchUIDescriptionCardSection-Protocol.h>

@class NSArray, NSNumber, NSString, NSURL, UIImage;

@interface SearchUIDescriptionCardSection : SearchUICardSection <SearchUIDescriptionCardSection>
{
    NSString *_title;
    NSNumber *_titleNoWrap;
    NSNumber *_titleWeight;
    NSString *_descriptionText;
    unsigned long long _descriptionMaxLines;
    NSNumber *_descriptionExpand;
    NSString *_descriptionExpandText;
    NSNumber *_descriptionSize;
    NSNumber *_descriptionWeight;
    UIImage *_image;
    NSString *_imageAlign;
}

@property(copy, nonatomic) NSString *imageAlign; // @synthesize imageAlign=_imageAlign;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSNumber *descriptionWeight; // @synthesize descriptionWeight=_descriptionWeight;
@property(retain, nonatomic) NSNumber *descriptionSize; // @synthesize descriptionSize=_descriptionSize;
@property(copy, nonatomic) NSString *descriptionExpandText; // @synthesize descriptionExpandText=_descriptionExpandText;
@property(retain, nonatomic) NSNumber *descriptionExpand; // @synthesize descriptionExpand=_descriptionExpand;
@property(nonatomic) unsigned long long descriptionMaxLines; // @synthesize descriptionMaxLines=_descriptionMaxLines;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(retain, nonatomic) NSNumber *titleWeight; // @synthesize titleWeight=_titleWeight;
@property(retain, nonatomic) NSNumber *titleNoWrap; // @synthesize titleNoWrap=_titleNoWrap;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasBottomPadding;
@property(readonly, nonatomic) _Bool hasTopPadding;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool hideDivider;
@property(readonly, nonatomic) NSArray *punchoutOptions;
@property(readonly, nonatomic) NSString *punchoutPickerDismissLabel;
@property(readonly, nonatomic) NSString *punchoutPickerLabel;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, copy, nonatomic) NSURL *url;

@end

