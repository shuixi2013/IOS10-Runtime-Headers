//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKTranscriptMultilineLabelCell.h>

@class UIImage, UIImageView, UIView;

@interface CKPluginMessageStatusCell : CKTranscriptMultilineLabelCell
{
    UIView *_previousPluginSnapshot;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *previousPluginSnapshot; // @synthesize previousPluginSnapshot=_previousPluginSnapshot;
- (void).cxx_destruct;
@property(copy, nonatomic) UIImage *image;
- (void)performInsertion:(CDUnknownBlockType)arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureForChatItem:(id)arg1;

@end

