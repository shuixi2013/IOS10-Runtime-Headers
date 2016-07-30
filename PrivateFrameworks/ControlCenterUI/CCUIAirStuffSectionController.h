//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUI/CCUIControlCenterSectionViewController.h>

#import <ControlCenterUI/MPAVRoutingControllerDelegate-Protocol.h>
#import <ControlCenterUI/SFAirDropDiscoveryAlertControllerDelegate-Protocol.h>
#import <ControlCenterUI/SFAirDropDiscoveryControllerDelegate-Protocol.h>
#import <ControlCenterUI/UIPopoverControllerDelegate-Protocol.h>

@class BSTimer, CCUIControlCenterPushButton, MPAVRoutingController, MPAVRoutingSheet, MPAudioVideoRoutingPopoverController, NSString, SFAirDropDiscoveryController, UIAlertController;

@interface CCUIAirStuffSectionController : CCUIControlCenterSectionViewController <MPAVRoutingControllerDelegate, UIPopoverControllerDelegate, SFAirDropDiscoveryControllerDelegate, SFAirDropDiscoveryAlertControllerDelegate>
{
    CCUIControlCenterPushButton *_airPlaySection;
    CCUIControlCenterPushButton *_airDropSection;
    MPAVRoutingController *_airPlayController;
    MPAVRoutingSheet *_airPlayModalSheet;
    MPAudioVideoRoutingPopoverController *_airPlayPopoverController;
    SFAirDropDiscoveryController *_airDropDiscoveryController;
    UIAlertController *_airDropAlertController;
    _Bool _isVisible;
    BSTimer *_airPlayTimer;
    unsigned long long _mode;
}

+ (id)defaultFontTight;
+ (Class)viewClass;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)discoveryController:(id)arg1 alertControllerDidDismiss:(id)arg2;
- (void)discoveryControllerVisibilityDidChange:(id)arg1;
- (void)discoveryControllerSettingsDidChange:(id)arg1;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)_dismissAirplayControllerAnimated:(_Bool)arg1;
- (void)_updateAirDropControlAsEnabled:(_Bool)arg1;
- (void)_updateForAirDropStateChange;
- (void)_updateForAirPlayStateChange;
- (void)_airPlayDoneButtonTapped:(id)arg1;
- (void)_presentAirDropWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dismissAirDropWithCompletion:(CDUnknownBlockType)arg1;
- (void)_airDropTapped:(id)arg1;
- (void)_airPlayTapped:(id)arg1;
- (void)_showAirPlayView:(id)arg1;
- (void)_noteSectionEnabledStateDidChange;
- (void)_updateSubsectionVisibility;
- (void)_updateLayoutForSizeCategoryChange;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (_Bool)dismissModalFullScreenIfNeeded;
- (void)viewDidLoad;
- (id)view;
- (_Bool)enabled;
- (id)sectionIdentifier;
- (id)_selectedStateColor;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

