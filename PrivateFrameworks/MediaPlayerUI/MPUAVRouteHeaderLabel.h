//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class MPAVRoute;

@interface MPUAVRouteHeaderLabel : UILabel
{
    _Bool _animating;
    _Bool _needsAttributedTextReload;
    _Bool _showNowPlayingText;
    MPAVRoute *_route;
}

@property(nonatomic) _Bool showNowPlayingText; // @synthesize showNowPlayingText=_showNowPlayingText;
@property(retain, nonatomic) MPAVRoute *route; // @synthesize route=_route;
- (void).cxx_destruct;
- (void)_reloadAttributedText;
- (void)_setNeedsAttributedTextReload;
- (id)_nowPlayingAttributedTextForRoute:(id)arg1;
- (id)_labelAttributesUsingDarkStyle:(_Bool)arg1;
- (id)_currentDeviceLocalRoutingNowPlayingText;
- (void)setShowNowPlayingText:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_init;

@end

