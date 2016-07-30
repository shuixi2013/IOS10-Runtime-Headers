//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKColoredBalloonView.h>

#import <ChatKit/CKContactBalloonViewProtocol-Protocol.h>

@class CKMediaObject, NSString, UIImageView, UILabel;

@interface CKContactBalloonView : CKColoredBalloonView <CKContactBalloonViewProtocol>
{
    CKMediaObject *_mediaObject;
    UIImageView *_chevron;
    UIImageView *_contactImageView;
    UILabel *_nameLabel;
    UILabel *_organizationLabel;
}

@property(retain, nonatomic) UILabel *organizationLabel; // @synthesize organizationLabel=_organizationLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *contactImageView; // @synthesize contactImageView=_contactImageView;
@property(retain, nonatomic) UIImageView *chevron; // @synthesize chevron=_chevron;
@property(retain, nonatomic) CKMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, copy) NSString *description;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;
- (void)configureForComposition:(id)arg1;
- (void)configureForMessagePart:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

