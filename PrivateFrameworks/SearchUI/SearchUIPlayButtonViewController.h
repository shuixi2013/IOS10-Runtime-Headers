//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/SearchUIAccessoryViewController.h>

#import <SearchUI/MPUNowPlayingDelegate-Protocol.h>
#import <SearchUI/NUIContainerStackViewDelegate-Protocol.h>

@class MPMediaItem, NSArray, NSString, SFPunchout, SKUIPlayButton, UILabel;

@interface SearchUIPlayButtonViewController : SearchUIAccessoryViewController <NUIContainerStackViewDelegate, MPUNowPlayingDelegate>
{
    UILabel *_captionLabel;
    SKUIPlayButton *_playButton;
    SFPunchout *_punchout;
    NSArray *_adamIDs;
    MPMediaItem *_localMediaItem;
    NSString *_localMediaItemIdentifier;
    struct CGSize _playButtonSize;
    struct CGSize _captionLabelSize;
}

+ (id)font;
+ (id)playButton;
+ (_Bool)supportsResult:(id)arg1;
+ (unsigned long long)actionButtonType;
@property struct CGSize captionLabelSize; // @synthesize captionLabelSize=_captionLabelSize;
@property struct CGSize playButtonSize; // @synthesize playButtonSize=_playButtonSize;
@property(retain) NSString *localMediaItemIdentifier; // @synthesize localMediaItemIdentifier=_localMediaItemIdentifier;
@property(retain) MPMediaItem *localMediaItem; // @synthesize localMediaItem=_localMediaItem;
@property(retain) NSArray *adamIDs; // @synthesize adamIDs=_adamIDs;
@property(retain) SFPunchout *punchout; // @synthesize punchout=_punchout;
@property(retain) SKUIPlayButton *playButton; // @synthesize playButton=_playButton;
@property(retain) UILabel *captionLabel; // @synthesize captionLabel=_captionLabel;
- (void).cxx_destruct;
- (struct CGRect)containerStackView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect)arg3;
- (struct CGSize)containerStackView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (void)containerStackViewDidInvalidateIntrinsicContentSize:(id)arg1;
- (void)nowPlayingController:(id)arg1 playbackStateDidChange:(_Bool)arg2;
- (void)updateProgressForCurrentlyActiveTrackAnimated:(_Bool)arg1;
- (void)nowPlayingController:(id)arg1 elapsedTimeDidChange:(double)arg2;
- (_Bool)matchesNowPlayingItem;
- (void)didEngage;
- (id)fetchLocalMediaItem;
- (void)updatePlayState;
- (void)updateWithResult:(id)arg1;
- (id)setupViewWithStyle:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

