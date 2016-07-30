//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFAccessoryObserver-Protocol.h>
#import <Home/HFHomeManagerObserver-Protocol.h>
#import <Home/HFHomeObserver-Protocol.h>
#import <Home/HFTemperatureUnitObserver-Protocol.h>

@class HFItem, HMHome, NAFuture, NSArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol HFItemManagerDelegate;

@interface HFItemManager : NSObject <HFHomeManagerObserver, HFHomeObserver, HFAccessoryObserver, HFTemperatureUnitObserver>
{
    _Bool _isRunningFastInitialUpdate;
    id <HFItemManagerDelegate> _delegate;
    HFItem *_sourceItem;
    HMHome *_home;
    unsigned long long _overallLoadingState;
    NAFuture *_firstFastUpdateFuture;
    HMHome *_lastUpdatedHome;
    NSArray *_sectionInfos;
    NSMutableSet *_pendingObservedCharacteristics;
    NSMutableSet *_disableUpdateReasons;
    NSMutableDictionary *_suppressedCharacteristicUpdatesByReason;
    NAFuture *_firstFullUpdateFuture;
}

+ (_Bool)_canReloadDuringUnitTests;
@property(readonly, nonatomic) NAFuture *firstFullUpdateFuture; // @synthesize firstFullUpdateFuture=_firstFullUpdateFuture;
@property(nonatomic) _Bool isRunningFastInitialUpdate; // @synthesize isRunningFastInitialUpdate=_isRunningFastInitialUpdate;
@property(retain, nonatomic) NSMutableDictionary *suppressedCharacteristicUpdatesByReason; // @synthesize suppressedCharacteristicUpdatesByReason=_suppressedCharacteristicUpdatesByReason;
@property(retain, nonatomic) NSMutableSet *disableUpdateReasons; // @synthesize disableUpdateReasons=_disableUpdateReasons;
@property(retain, nonatomic) NSMutableSet *pendingObservedCharacteristics; // @synthesize pendingObservedCharacteristics=_pendingObservedCharacteristics;
@property(retain, nonatomic) NSArray *sectionInfos; // @synthesize sectionInfos=_sectionInfos;
@property(retain, nonatomic) HMHome *lastUpdatedHome; // @synthesize lastUpdatedHome=_lastUpdatedHome;
@property(readonly, nonatomic) NAFuture *firstFastUpdateFuture; // @synthesize firstFastUpdateFuture=_firstFastUpdateFuture;
@property(nonatomic) unsigned long long overallLoadingState; // @synthesize overallLoadingState=_overallLoadingState;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HFItem *sourceItem; // @synthesize sourceItem=_sourceItem;
@property(nonatomic) __weak id <HFItemManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnit:(_Bool)arg2;
- (id)_indexPathForItem:(id)arg1 inDisplayedItemsArray:(id)arg2;
- (id)_allDisplayedItemsIncludingInternalItems;
@property(readonly, nonatomic) NSSet *allDisplayedItems;
- (id)_itemsToUpdateForModifiedResidentDevices:(id)arg1;
- (id)_itemsToUpdateForModifiedCharacteristics:(id)arg1;
- (id)_itemsToUpdateForModifiedServiceTypes:(id)arg1;
- (id)_itemsToUpdateForModifiedServices:(id)arg1;
- (id)_itemsToUpdateForModifiedAccessories:(id)arg1;
- (id)_itemsToUpdateForModifiedEvents:(id)arg1;
- (id)_itemsToUpdateForModifiedTriggers:(id)arg1;
- (id)_itemsToUpdateForModifiedUsers:(id)arg1;
- (id)_itemsToUpdateForIncomingInvitation:(id)arg1;
- (id)_itemsToUpdateForOutgoingInvitation:(id)arg1;
- (id)_itemsToUpdateForModifiedRooms:(id)arg1;
- (id)_itemsToUpdateForModifiedZones:(id)arg1;
- (id)_itemsToUpdateForModifiedServiceGroups:(id)arg1;
- (id)_itemsToUpdateForModifiedActions:(id)arg1;
- (id)_itemsToUpdateForModifiedActionSets:(id)arg1;
- (id)_itemsToUpdateForModifiedMetadataForHomes:(id)arg1;
- (id)_directItemDependenciesForHomeKitObjects:(id)arg1 class:(Class)arg2;
- (id)_dependentHomeKitObjectsOfClass:(Class)arg1 inHomeKitObjects:(id)arg2;
- (void)_startObservingCharacteristics:(id)arg1;
- (void)_updateObservedCharacteristicsForItem:(id)arg1 oldAffectedCharacteristics:(id)arg2;
- (id)_observedCharacteristics;
- (unsigned long long)_sectionForItem:(id)arg1 assertOnNotFound:(_Bool)arg2;
- (unsigned long long)_sectionForItem:(id)arg1;
- (unsigned long long)_sectionForSectionIdentifier:(id)arg1 assertOnNotFound:(_Bool)arg2;
- (unsigned long long)_sectionForSectionIdentifier:(id)arg1;
- (id)_serviceGroupItemForServiceGroup:(id)arg1 inItems:(id)arg2;
- (id)_itemsOfClass:(Class)arg1 inItems:(id)arg2 allowTransformedItems:(_Bool)arg3;
- (id)_allSuppressedCharacteristics;
- (_Bool)_notifyDelegateOfMoveIfNeededForItem:(id)arg1 oldDisplayedItemArray:(id)arg2 updatedDisplayedItemArray:(id)arg3 addedItems:(id)arg4 removedItems:(id)arg5 logger:(id)arg6;
- (_Bool)_shouldHideServiceItem:(id)arg1 containedInServiceGroupItem:(id)arg2;
- (id)_serviceItemsToHideInSet:(id)arg1 allServiceGroupItems:(id)arg2;
- (id)_itemsToHideInSet:(id)arg1;
- (void)_actuallyPerformExternalUpdateForItemsToRemove:(id)arg1 itemsToAdd:(id)arg2 itemsToUpdate:(id)arg3 logger:(id)arg4;
- (void)_updateSectionsWithLogger:(id)arg1 returningAddedSectionIndices:(id *)arg2 removedSectionIndicies:(id *)arg3;
- (void)_updateSections;
- (void)_updateRepresentationForExternalItems:(id)arg1 updatedOrAddedItems:(id)arg2 removedItems:(id)arg3 logger:(id)arg4;
- (void)_updateRepresentationForInternalItems:(id)arg1 updatedItems:(id)arg2;
- (id)_performUpdateForItem:(id)arg1 isInternal:(_Bool)arg2 logger:(id)arg3 options:(id)arg4;
- (void)_batchItemUpdateFutureWrappers:(id)arg1 removedItems:(id)arg2 batchingIntervals:(id)arg3 logger:(id)arg4;
- (id)_updateResultsForItems:(id)arg1 removedItems:(id)arg2 senderSelector:(SEL)arg3 logger:(id)arg4 options:(id)arg5 readValidator:(CDUnknownBlockType)arg6;
- (id)_updateResultsForItems:(id)arg1 senderSelector:(SEL)arg2 readValidator:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)_standardReadValidator;
- (id)updateResultsForItems:(id)arg1 senderSelector:(SEL)arg2;
- (void)_updateOverallLoadingStateAndNotifyDelegate;
- (unsigned long long)_loadingStateForItem:(id)arg1;
- (void)_updateLoadingStateAndNotifyDelegateForItems:(id)arg1 canFinishTransaction:(_Bool)arg2;
- (id)_reloadItemProviders:(id)arg1 updateItems:(id)arg2 shouldUpdateExistingItems:(_Bool)arg3 senderSelector:(SEL)arg4 readValidator:(CDUnknownBlockType)arg5;
- (id)_reloadAndUpdateItemsForProviders:(id)arg1 updateItems:(id)arg2 senderSelector:(SEL)arg3;
- (id)reloadAndUpdateItemsForProviders:(id)arg1 senderSelector:(SEL)arg2;
- (id)reloadAndUpdateAllItemsFromSenderSelector:(SEL)arg1;
- (void)recalculateVisibilityAndSortAllItems;
- (void)sortDisplayedItemsInSection:(long long)arg1;
- (void)_unregisterForExternalUpdates;
- (void)_registerForExternalUpdates;
- (_Bool)_requiresNotificationsForCharacteristic:(id)arg1;
- (id)_homeFuture;
- (_Bool)_shouldPerformFastInitialUpdates;
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1;
- (void)_didUpdateResultsForItem:(id)arg1;
- (id)_styleForItem:(id)arg1;
- (id)_sortedItems:(id)arg1 forSectionIdentifier:(id)arg2;
- (CDUnknownBlockType)_comparatorForSectionIdentifier:(id)arg1;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)_footerTitleForSectionWithIdentifier:(id)arg1;
- (id)_titleForSectionWithIdentifier:(id)arg1;
- (id)_identifierForSection:(unsigned long long)arg1;
- (unsigned long long)_numberOfSections;
- (void)_willUpdateSections;
- (id)_itemProviders;
- (void)_createItemProvidersWithHome:(id)arg1;
- (void)endSuppressingUpdatesForCharacteristicsWithReason:(id)arg1 updateAffectedItems:(_Bool)arg2;
- (void)beginSuppressingUpdatesForCharacteristics:(id)arg1 withReason:(id)arg2;
- (void)endDisableExternalUpdatesWithReason:(id)arg1;
- (void)disableExternalUpdatesWithReason:(id)arg1;
- (void)_updateExternalUpdatesEnabled:(_Bool)arg1 reloadItems:(_Bool)arg2;
- (id)indexPathForItem:(id)arg1;
- (id)displayedItemAtIndexPath:(id)arg1;
- (id)displayedSectionIdentifierForSectionIndex:(unsigned long long)arg1;
- (unsigned long long)sectionIndexForDisplayedSectionIdentifier:(id)arg1;
- (id)displayedItemsInSection:(unsigned long long)arg1;
- (id)footerTitleForSection:(unsigned long long)arg1;
- (id)titleForSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)_allItemsIncludingInternalItems;
- (id)_internalItems;
- (id)_sectionInfosEnsuringLoaded;
@property(readonly, nonatomic) NSSet *allItems;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)init;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)home:(id)arg1 didExecuteActionSets:(id)arg2 failedActionSets:(id)arg3;
- (void)home:(id)arg1 didWriteValuesForCharacteristics:(id)arg2 failedCharacteristics:(id)arg3;
- (void)home:(id)arg1 didReadValuesForCharacteristics:(id)arg2 failedCharacteristics:(id)arg3;
- (void)home:(id)arg1 willExecuteActionSets:(id)arg2;
- (void)home:(id)arg1 willWriteValuesForCharacteristics:(id)arg2;
- (void)home:(id)arg1 willReadValuesForCharacteristics:(id)arg2;
- (void)accessory:(id)arg1 didUpdateApplicationDataForService:(id)arg2;
- (void)accessoryDidUpdateApplicationData:(id)arg1;
- (void)accessory:(id)arg1 service:(id)arg2 didUpdateValueForCharacteristic:(id)arg3;
- (void)accessoryDidUpdateReachability:(id)arg1;
- (void)accessoryDidUpdateServices:(id)arg1;
- (void)accessory:(id)arg1 didUpdateAssociatedServiceTypeForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateNameForService:(id)arg2;
- (void)accessoryDidUpdateName:(id)arg1;
- (void)home:(id)arg1 didRemoveResidentDevice:(id)arg2;
- (void)home:(id)arg1 didAddResidentDevice:(id)arg2;
- (void)home:(id)arg1 didUpdateAccessControlForUser:(id)arg2;
- (void)homeManager:(id)arg1 didUpdateStateForIncomingInvitations:(id)arg2;
- (void)home:(id)arg1 didUpdateAccesoryInvitationsForUser:(id)arg2;
- (void)home:(id)arg1 didUpdateStateForOutgoingInvitations:(id)arg2;
- (void)home:(id)arg1 didUpdateApplicationDataForServiceGroup:(id)arg2;
- (void)home:(id)arg1 didUpdateApplicationDataForActionSet:(id)arg2;
- (void)home:(id)arg1 didUpdateApplicationDataForRoom:(id)arg2;
- (void)homeDidUpdateApplicationData:(id)arg1;
- (void)home:(id)arg1 didUpdateTrigger:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForTrigger:(id)arg2;
- (void)home:(id)arg1 didRemoveTrigger:(id)arg2;
- (void)home:(id)arg1 didAddTrigger:(id)arg2;
- (void)home:(id)arg1 didUpdateActionsForActionSet:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForActionSet:(id)arg2;
- (void)home:(id)arg1 didRemoveActionSet:(id)arg2;
- (void)home:(id)arg1 didAddActionSet:(id)arg2;
- (void)home:(id)arg1 didEncounterError:(id)arg2 forAccessory:(id)arg3;
- (void)home:(id)arg1 didUnblockAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveService:(id)arg2 fromServiceGroup:(id)arg3;
- (void)home:(id)arg1 didAddService:(id)arg2 toServiceGroup:(id)arg3;
- (void)home:(id)arg1 didUpdateNameForServiceGroup:(id)arg2;
- (void)home:(id)arg1 didRemoveServiceGroup:(id)arg2;
- (void)home:(id)arg1 didAddServiceGroup:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2 fromZone:(id)arg3;
- (void)home:(id)arg1 didAddRoom:(id)arg2 toZone:(id)arg3;
- (void)home:(id)arg1 didUpdateNameForZone:(id)arg2;
- (void)home:(id)arg1 didRemoveZone:(id)arg2;
- (void)home:(id)arg1 didAddZone:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForRoom:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2;
- (void)home:(id)arg1 didAddRoom:(id)arg2;
- (void)home:(id)arg1 didUpdateRoom:(id)arg2 forAccessory:(id)arg3;
- (void)home:(id)arg1 didRemoveUser:(id)arg2;
- (void)home:(id)arg1 didAddUser:(id)arg2;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)homeDidUpdateName:(id)arg1;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;
- (void)homeManagerDidUpdatePrimaryHome:(id)arg1;
- (void)homeManagerDidFinishUnknownChange:(id)arg1;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (id)_updateResultsForItems:(id)arg1 allowCharacteristicReads:(_Bool)arg2 senderSelector:(SEL)arg3;
- (id)_reloadItemProvidersWithInvalidationReasons:(id)arg1 updateItems:(id)arg2 allowCharacteristicReads:(_Bool)arg3 senderSelector:(SEL)arg4 updatedHome:(id)arg5;
- (void)_removeDelegateNotifications;
- (void)_setupDelegateNotifications;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

