//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class MusicEntityTracklistItemView;

@protocol MusicEntityTracklistItemViewDelegate <NSObject>

@optional
- (_Bool)tracklistItemViewShouldLayoutAsEditing:(MusicEntityTracklistItemView *)arg1;
- (void)tracklistItemView:(MusicEntityTracklistItemView *)arg1 didSelectPlayButtonAction:(unsigned long long)arg2;
- (void)tracklistItemViewDidSelectContextualActionsButton:(MusicEntityTracklistItemView *)arg1;
@end

