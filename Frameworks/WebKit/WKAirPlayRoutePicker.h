//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <WebKit/UIPopoverControllerDelegate-Protocol.h>

@class NSString, WKContentView;

__attribute__((visibility("hidden")))
@interface WKAirPlayRoutePicker : UIView <UIPopoverControllerDelegate>
{
    struct RetainPtr<MPAVRoutingController> _routingController;
    struct RetainPtr<MPAudioVideoRoutingPopoverController> _popoverController;
    struct RetainPtr<MPAudioVideoRoutingActionSheet> _actionSheet;
    WKContentView *_view;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)show:(_Bool)arg1 fromRect:(struct CGRect)arg2;
- (void)showAirPlayPickerIPhone:(long long)arg1;
- (void)showAirPlayPickerIPad:(long long)arg1 fromRect:(struct CGRect)arg2;
- (void)_dismissAirPlayRoutePickerIPad;
- (void)_windowDidRotate:(id)arg1;
- (void)_windowWillRotate:(id)arg1;
- (void)_presentAirPlayPopoverAnimated:(_Bool)arg1 fromRect:(struct CGRect)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

