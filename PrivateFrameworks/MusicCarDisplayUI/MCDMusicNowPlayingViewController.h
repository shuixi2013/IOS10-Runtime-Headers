//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MusicCarDisplayUI/AFContextProvider-Protocol.h>
#import <MusicCarDisplayUI/MCDNowPlayingViewControllerDataSource-Protocol.h>
#import <MusicCarDisplayUI/MCDNowPlayingViewControllerDelegate-Protocol.h>

@class MCDNowPlayingViewController, MPAVController, MPMediaQuery, MPWeakTimer, NSArray, NSDictionary, NSString, UIActivityIndicatorView, UIAlertController, UIImage, UILabel;
@protocol MCDCarDisplayServiceProvider;

@interface MCDMusicNowPlayingViewController : UIViewController <AFContextProvider, MCDNowPlayingViewControllerDataSource, MCDNowPlayingViewControllerDelegate>
{
    id <MCDCarDisplayServiceProvider> _serviceProvider;
    MPAVController *_player;
    MCDNowPlayingViewController *_nowPlayingViewController;
    MPMediaQuery *_albumQuery;
    NSString *_nowPlayingTitle;
    NSString *_nowPlayingArtist;
    NSString *_nowPlayingAlbum;
    UIImage *_nowPlayingAlbumArt;
    UILabel *_rightTitleLabel;
    NSString *_rightTitleText;
    UIActivityIndicatorView *_activityIndicator;
    MPWeakTimer *_activityTimer;
    UIAlertController *_actionSheetAlertController;
    NSDictionary *_supportedCommands;
    _Bool _observingMediaRemoteCommandChanges;
    _Bool _isLive;
    _Bool _isExplicitTrack;
    int _viewMode;
    NSArray *_controlPages;
    unsigned long long _currentPageIndex;
}

@property(nonatomic) int viewMode; // @synthesize viewMode=_viewMode;
@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(retain, nonatomic) NSArray *controlPages; // @synthesize controlPages=_controlPages;
- (void).cxx_destruct;
- (id)newPresentationNavigationController;
- (void)_presentNowPlayingInfo;
- (void)_setNextRepeatState;
- (void)_invalidateActivityTimer;
- (void)_setupActivityTimer;
- (void)_stopObservingRemoteCommandChanges;
- (void)_startObservingRemoteCommandChanges;
- (void)_updateSupportedCommandsWithArray:(id)arg1;
- (void)_updateSupportedCommands;
- (void)updateTrackInformation;
- (void)_rateDidChange:(id)arg1;
- (void)_bufferingStateChanged:(id)arg1;
- (_Bool)_trackBuffering;
- (void)_playbackStateChanged:(id)arg1;
- (void)_playbackContentsChanged:(id)arg1;
- (void)_itemStoreIDDidChangeNotification:(id)arg1;
- (void)_itemTitlesDidChangeNotification:(id)arg1;
- (void)_itemIsExplicitDidChangeNotification:(id)arg1;
- (void)_itemChanged:(id)arg1;
- (void)_addItemsToLibrary;
- (void)_addSongToLibrary;
- (void)nowPlayingViewControllerMore:(id)arg1;
- (void)_presentCreateStationError;
- (_Bool)_itemAlreadyAddedToLibrary;
- (_Bool)_itemCanBeAddedToLibrary;
- (void)nowPlayingViewControllerAddToLibrary:(id)arg1;
- (void)nowPlayingViewControllerToggleRepeat:(id)arg1;
- (void)nowPlayingViewControllerToggleShuffle:(id)arg1;
- (_Bool)nowPlayingViewControllerCanShowAddToLibrary:(id)arg1;
- (_Bool)nowPlayingViewControllerCanShowMore:(id)arg1;
- (_Bool)nowPlayingViewControllerCanRepeat:(id)arg1;
- (_Bool)nowPlayingViewControllerCanShuffle:(id)arg1;
- (void)nowPlayingViewController:(id)arg1 didSendAction:(long long)arg2 state:(long long)arg3;
- (_Bool)nowPlayingViewController:(id)arg1 shouldEnableButton:(long long)arg2;
- (_Bool)nowPlayingViewController:(id)arg1 shouldDisplayButton:(long long)arg2 withImage:(out id *)arg3 tinted:(out _Bool *)arg4;
- (_Bool)nowPlayingViewController:(id)arg1 buttonShouldBeActive:(long long)arg2;
- (long long)repeatTypeForNowPlayingViewController:(id)arg1;
- (id)shuffleStringForNowPlayingViewController:(id)arg1;
- (long long)shuffleTypeForNowPlayingViewController:(id)arg1;
- (_Bool)nowPlayingViewControllerIsPlaying:(id)arg1;
- (_Bool)playbackIsLiveStreamForNowPlayingViewController:(id)arg1;
- (double)playbackElapsedTimeForNowPlayingViewController:(id)arg1;
- (double)playbackDurationForNowPlayingViewController:(id)arg1;
- (_Bool)nowPlayingViewControllerIsShowingExplicitTrack:(id)arg1;
- (id)backgroundArtForNowPlayingController:(id)arg1;
- (id)titleForNowPlayingController:(id)arg1;
- (id)artistTextForNowPlayingController:(id)arg1;
- (id)albumTextForNowPlayingController:(id)arg1;
- (id)getCurrentContext;
- (_Bool)allowContextProvider:(id)arg1;
- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (void)_adjustRightTitleLabelToFit;
- (void)setRightTitle:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)preferredFocusedItem;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithQueryToShuffle:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;
- (id)initWithQuery:(id)arg1 startingAtIndex:(unsigned long long)arg2 player:(id)arg3 serviceProvider:(id)arg4;
- (id)initWithPlayer:(id)arg1 serviceProvider:(id)arg2 startPlay:(_Bool)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

