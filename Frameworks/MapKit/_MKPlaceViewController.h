//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKStackingViewController.h>

#import <MapKit/ABContactViewControllerDelegate-Protocol.h>
#import <MapKit/ABNewPersonViewControllerDelegate-Protocol.h>
#import <MapKit/ABPeoplePickerNavigationControllerDelegate-Protocol.h>
#import <MapKit/CNContactViewControllerDelegate-Protocol.h>
#import <MapKit/GEOLogContextDelegate-Protocol.h>
#import <MapKit/MKActivityViewControllerDelegate-Protocol.h>
#import <MapKit/MKOfficialAppViewControllerDelegate-Protocol.h>
#import <MapKit/MKPlaceCardActionControllerDelegate-Protocol.h>
#import <MapKit/MKPlaceCardEncyclopedicControllerDelegate-Protocol.h>
#import <MapKit/MKPlaceCardHeaderViewControllerDelegate-Protocol.h>
#import <MapKit/MKPlaceCardPhotosControllerDelegate-Protocol.h>
#import <MapKit/MKPlaceCardReviewsControllerDelegate-Protocol.h>
#import <MapKit/MKPlaceDealsViewControllerDelegate-Protocol.h>
#import <MapKit/MKPlaceHoursViewControllerDelegate-Protocol.h>
#import <MapKit/MKPlaceInfoViewControllerDelegate-Protocol.h>
#import <MapKit/MKStackingViewControllerDelegate-Protocol.h>
#import <MapKit/MKTransitAttributionViewControllerDelegate-Protocol.h>
#import <MapKit/MKTransitDepaturesViewControllerDelegate-Protocol.h>
#import <MapKit/RadiosPreferencesDelegate-Protocol.h>
#import <MapKit/_MKInfoCardAnaylticsDelegate-Protocol.h>
#import <MapKit/_MKInfoCardController-Protocol.h>

@class CNContact, CNContactNavigationController, GEORouteGenerator, MKInfoCardLoadingView, MKMapItem, MKMapItemMetadataDealRequest, MKOfficialAppViewController, MKPlaceCardActionItem, MKPlaceCardActionsViewController, MKPlaceCardHeaderViewController, MKPlaceDealsViewController, MKPlaceInfoViewController, MKPlaceInlineMapViewController, MKPlaceTransitViewController, NSMapTable, NSMutableArray, NSString, NSUserActivity, RadiosPreferences, _MKDistanceDetailProvider;
@protocol ABContactViewControllerDelegate, UIScrollViewDelegate, _MKPlaceItem, _MKPlaceViewControllerDelegate, _MKPlaceViewControllerFeedbackDelegate;

@interface _MKPlaceViewController : MKStackingViewController <MKStackingViewControllerDelegate, MKPlaceCardActionControllerDelegate, MKActivityViewControllerDelegate, ABContactViewControllerDelegate, ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, RadiosPreferencesDelegate, CNContactViewControllerDelegate, MKOfficialAppViewControllerDelegate, MKPlaceCardPhotosControllerDelegate, MKPlaceCardReviewsControllerDelegate, MKPlaceInfoViewControllerDelegate, MKPlaceCardEncyclopedicControllerDelegate, MKTransitDepaturesViewControllerDelegate, MKPlaceCardHeaderViewControllerDelegate, MKPlaceDealsViewControllerDelegate, _MKInfoCardAnaylticsDelegate, MKPlaceHoursViewControllerDelegate, MKTransitAttributionViewControllerDelegate, GEOLogContextDelegate, _MKInfoCardController>
{
    MKPlaceCardHeaderViewController *_headerViewController;
    MKPlaceInfoViewController *_infoViewController;
    MKPlaceDealsViewController *_dealsViewController;
    MKPlaceInlineMapViewController *_inlineMapViewController;
    MKPlaceCardActionsViewController *_placeActionViewController;
    NSMutableArray *_placeActionItemsArray;
    MKPlaceCardActionItem *_addToFavoriteItem;
    MKPlaceCardActionItem *_removeFromFavoriteItem;
    MKPlaceCardActionItem *_removeFromSuggestedFavoriteItem;
    MKPlaceTransitViewController *_transitViewController;
    _Bool _attemptedToCreateAddressBook;
    MKOfficialAppViewController *_officialAppViewController;
    MKInfoCardLoadingView *_loadingView;
    void *_addressBook;
    void *_originalContactRecordCopy;
    NSMapTable *_additionalViewControllers;
    _Bool _overrideDefaultShowRAP;
    _Bool _hasContactOnlyMapItem;
    MKMapItemMetadataDealRequest *_dealRequest;
    _Bool _isUpdatingViewControllers;
    NSMutableArray *_analyticsPCPossibleActions;
    NSMutableArray *_analyticsPCUnactionableUIElements;
    NSUserActivity *_donationUserActivity;
    NSString *_actionButtonText;
    CDUnknownBlockType _actionButtonResponseBlock;
    _Bool _hasCheckedDistanceAvailability;
    _Bool _placeInBookmarks;
    _Bool _showContactActions;
    _Bool _isMapItemUpdating;
    _Bool _inAirplaneModeAndNetworkUnreachable;
    NSString *_headerTitle;
    GEORouteGenerator *_routeGenerator;
    _MKDistanceDetailProvider *_distanceMonitor;
    id <_MKPlaceItem> _placeItem;
    CNContact *_contact;
    CNContact *_originalContact;
    id <_MKPlaceViewControllerDelegate> _placeViewControllerDelegate;
    id <_MKPlaceViewControllerFeedbackDelegate> _placeViewFeedbackDelegate;
    CDUnknownBlockType _placeViewFeedbackAppLaunchHandler;
    unsigned long long _options;
    double headerHeight;
    CNContactNavigationController<ABContactViewControllerDelegate> *_contactsNavigationController;
    RadiosPreferences *_radioPreferences;
    id <UIScrollViewDelegate> _scrollViewDelegate;
    NSMutableArray *_viewDidAppearBlocks;
}

+ (double)headerHeightInMinimalMode;
@property(retain, nonatomic) NSMutableArray *viewDidAppearBlocks; // @synthesize viewDidAppearBlocks=_viewDidAppearBlocks;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
@property(retain, nonatomic) RadiosPreferences *radioPreferences; // @synthesize radioPreferences=_radioPreferences;
@property(nonatomic) _Bool inAirplaneModeAndNetworkUnreachable; // @synthesize inAirplaneModeAndNetworkUnreachable=_inAirplaneModeAndNetworkUnreachable;
@property(nonatomic) _Bool isMapItemUpdating; // @synthesize isMapItemUpdating=_isMapItemUpdating;
@property(nonatomic) __weak CNContactNavigationController<ABContactViewControllerDelegate> *contactsNavigationController; // @synthesize contactsNavigationController=_contactsNavigationController;
@property(nonatomic) _Bool showContactActions; // @synthesize showContactActions=_showContactActions;
@property(nonatomic) _Bool placeInBookmarks; // @synthesize placeInBookmarks=_placeInBookmarks;
@property(nonatomic) double headerHeight; // @synthesize headerHeight;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(copy, nonatomic) CDUnknownBlockType placeViewFeedbackAppLaunchHandler; // @synthesize placeViewFeedbackAppLaunchHandler=_placeViewFeedbackAppLaunchHandler;
@property(nonatomic) __weak id <_MKPlaceViewControllerFeedbackDelegate> placeViewFeedbackDelegate; // @synthesize placeViewFeedbackDelegate=_placeViewFeedbackDelegate;
@property(nonatomic) __weak id <_MKPlaceViewControllerDelegate> placeViewControllerDelegate; // @synthesize placeViewControllerDelegate=_placeViewControllerDelegate;
@property(retain, nonatomic) CNContact *originalContact; // @synthesize originalContact=_originalContact;
@property(readonly, nonatomic) id <_MKPlaceItem> placeItem; // @synthesize placeItem=_placeItem;
@property(nonatomic) _Bool hasCheckedDistanceAvailability; // @synthesize hasCheckedDistanceAvailability=_hasCheckedDistanceAvailability;
@property(retain, nonatomic) _MKDistanceDetailProvider *distanceMonitor; // @synthesize distanceMonitor=_distanceMonitor;
@property(retain, nonatomic) GEORouteGenerator *routeGenerator; // @synthesize routeGenerator=_routeGenerator;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void).cxx_destruct;
- (id)logContextForEventType:(int)arg1;
- (id)generateUnactionableUIElementsForAnalytics;
- (id)generateAvailableActionForAnalytics;
- (int)getPlaceCardTypeForAnalytics;
- (void)infoCardTransitAnalyticsDidSelectionAction:(int)arg1 resultIndex:(long long)arg2 targetID:(unsigned long long)arg3 transitSystem:(id)arg4 transitDepartureSequence:(id)arg5 transitCardCategory:(int)arg6 transitIncident:(id)arg7 feedbackDelegateSelector:(int)arg8;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 actionURL:(id)arg4 photoID:(id)arg5 feedbackDelegateSelector:(int)arg6;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 feedbackDelegateSelector:(int)arg4;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 eventValue:(id)arg2 feedbackDelegateSelector:(int)arg3;
- (void)officialAppViewControllerDidFinishLoading:(id)arg1 error:(id)arg2;
- (void)placeCardActionControllerDidSelectionOpenInPinpoint:(id)arg1;
- (void)placeCardActionControllerDidSelectOpenInSkyline:(id)arg1;
- (void)placeCardActionControllerDidSelectSimulateLocation:(id)arg1;
- (void)placeCardActionControllerDidSelectAddToExistingContact:(id)arg1;
- (void)placeCardActionControllerDidSelectViewAllPhotos:(id)arg1;
- (void)placeCardActionControllerDidSelectAddPhoto:(id)arg1;
- (void)placeCardActionControllerDidSelectRemoveFromSuggestedFavorites:(id)arg1;
- (void)placeCardActionControllerDidSelectRemoveFromFavorites:(id)arg1;
- (void)placeCardActionControllerDidSelectAddToFavorites:(id)arg1;
- (void)placeCardActionControllerDidSelectAddToContacts:(id)arg1;
- (void)placeCardActionControllerDidSelectReportAProblem:(id)arg1;
- (void)_updateViewControllerStatesForOffline;
- (void)updateAirplaneModeNetworkUnreachable;
- (void)networkReachableChanged:(id)arg1;
- (void)airplaneModeChanged;
- (void)_dismissModalViewController;
- (void)transitDeparturesViewController:(id)arg1 didSelectTransitLine:(id)arg2 fromCell:(id)arg3;
- (void)transitDeparturesViewController:(id)arg1 showIncidents:(id)arg2;
- (void)transitDeparturesViewController:(id)arg1 didSelectConnectionInformation:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)hideTitle:(_Bool)arg1;
@property(nonatomic) double currentHeaderMinimalModeInterpolationFactor;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void *)arg2;
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (_Bool)_removeMapsDataFromContactWithRecordID:(int)arg1;
- (_Bool)shouldShowDirectionsForInfoViewController:(id)arg1;
- (_Bool)shouldShowInlineMapForInfoViewController:(id)arg1;
- (int)mapTypeForPlaceCardHeaderViewController:(id)arg1;
- (void)placeCardheaderHeaderViewControllerDidSelectShareLocationButton:(id)arg1;
- (void)placeCardheaderHeaderViewControllerDidSelectRerouteButton:(id)arg1;
- (void)placeCardheaderHeaderViewControllerDidSelectDirectionsButton:(id)arg1;
- (double)placeCardHeaderViewControllerTrailingConstantForTitle:(id)arg1;
- (void)_showShareSheet:(id)arg1;
- (void)_showEditSheet:(id)arg1;
- (id)_contactForEditOperations;
- (void)mapkitActivityViewController:(id)arg1 postCompletedActivityOfType:(id)arg2 completed:(_Bool)arg3;
- (void)mapkitActivityViewController:(id)arg1 preCompletedActivityOfType:(id)arg2 completed:(_Bool)arg3;
- (void)_setDeal:(id)arg1 forYelpId:(id)arg2;
- (void)_checkForDealsIfNecessary;
- (void)placeCardEncyclopedicControllerDidExpandTextBlock:(id)arg1;
- (void)placeCardEncyclopedicControllerDidSelectShowArticle:(id)arg1;
- (void)placeCardReviewsController:(id)arg1 didSelectViewReview:(id)arg2;
- (void)placeCardReviewsControllerDidSelectViewAllReviews:(id)arg1;
- (void)placeCardPhotosControllerDidSelectViewAllPhotos:(id)arg1;
- (void)placeCardPhotosControllerDidSelectAddPhoto:(id)arg1;
- (void)infoViewController:(id)arg1 didSelectShareFromView:(id)arg2;
- (void)dealsViewController:(id)arg1 didSelectDeal:(id)arg2;
- (void)placeCardPhotosController:(id)arg1 didSelectViewPhotoWithID:(id)arg2;
- (double)stackingViewController:(id)arg1 heightForSeparatorBetweenUpperViewController:(id)arg2 andLowerViewController:(id)arg3;
- (_Bool)stackingViewController:(id)arg1 showsTitleForViewController:(id)arg2;
- (double)stackingViewController:(id)arg1 minimumVisibleSurfacePercentForAnalyticsSelection:(id)arg2;
- (id)stackingViewController:(id)arg1 scrollViewForViewController:(id)arg2;
- (void)stackingViewController:(id)arg1 didLayoutViewControllers:(id)arg2 remaningViewControllers:(id)arg3;
- (void)removeAdditionalViewController:(id)arg1;
- (void)addAdditionalViewController:(id)arg1 atPosition:(long long)arg2;
- (long long)_sectionPositionForMapTableKey:(id)arg1;
- (id)_mapTableKeyForSectionPosition:(long long)arg1;
- (id)additionalViewControllersAtPosition:(long long)arg1;
- (void)errorLoadingMapItemUpdate:(id)arg1;
- (void)mapItemWillUpdate;
- (void)_didResolveAttribution:(id)arg1;
- (void)setActionButtonText:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) MKMapItem *mapItem;
- (void)setPlaceItem:(id)arg1;
- (void)setPlaceItem:(id)arg1 updateOriginalContact:(_Bool)arg2;
- (void)setMapItem:(id)arg1 contact:(id)arg2 updateOriginalContact:(_Bool)arg3;
- (void)_createViewControllers:(id)arg1;
- (void)_updateViewControllers;
- (void *)_recordForContact:(id)arg1;
- (void *)_addressBook;
- (void)_setDefaultViewControllers:(id)arg1;
- (_Bool)_showReportAProblem;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_performWhenViewHasAppeared:(CDUnknownBlockType)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (void)_commonInit;
- (id)initWithMapItem:(id)arg1;
- (id)initWithContact:(id)arg1 mapItem:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithContact:(id)arg1 mapItem:(id)arg2;
- (id)initWithMapItem:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithPlaceItem:(id)arg1 options:(unsigned long long)arg2;
- (id)init;
- (void)setUseCompactPhotosView:(_Bool)arg1;
- (_Bool)useCompactPhotosView;
- (void)setHideFavoriteToobarButton:(_Bool)arg1;
- (_Bool)hideFavoriteToobarButton;
- (void)setAllowTransitLineSelection:(_Bool)arg1;
- (_Bool)allowTransitLineSelection;
@property(nonatomic) _Bool showShareActionsButton;
@property(nonatomic) _Bool showOpenInPinpoint;
@property(nonatomic) _Bool showOpenInSkyline;
@property(nonatomic) _Bool showSimulateLocation;
@property(nonatomic) _Bool disableReportAProblem;
@property(nonatomic) _Bool showReportAProblem;
@property(nonatomic) _Bool showNearbyApps;
@property(nonatomic) _Bool showInlineMapInHeader;
@property(nonatomic) _Bool hideInlineMap;
@property(nonatomic) _Bool showEditButton;
@property(nonatomic) _Bool hideDirectionsButtons;
@property(nonatomic) _Bool showTitleBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

