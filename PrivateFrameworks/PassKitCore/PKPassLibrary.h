//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPassLibraryExportedInterface-Protocol.h>

@class PKXPCService;
@protocol NSObject, PKPassLibraryDelegate;

@interface PKPassLibrary : NSObject <PKPassLibraryExportedInterface>
{
    PKXPCService *_remoteService;
    PKPassLibrary *_remoteLibrary;
    id <NSObject> _remoteLibraryObserver;
    unsigned long long _interfaceType;
    id <PKPassLibraryDelegate> _delegate;
}

+ (_Bool)contactlessInterfaceCanBePresentedFromSource:(long long)arg1;
+ (_Bool)isSuppressingAutomaticPassPresentation;
+ (void)endAutomaticPassPresentationSuppressionWithRequestToken:(unsigned long long)arg1;
+ (unsigned long long)requestAutomaticPassPresentationSuppressionWithResponseHandler:(CDUnknownBlockType)arg1;
+ (_Bool)isPaymentPassActivationAvailable;
+ (_Bool)isPassLibraryAvailable;
@property(nonatomic) __weak id <PKPassLibraryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_hasInterfaceOfType:(unsigned long long)arg1;
- (CDUnknownBlockType)_errorHandlerWithCompletion:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_errorHandlerWithSemaphore:(id)arg1;
- (id)yellowFlowPasses;
- (void)_applyDataAccessorToObject:(id)arg1;
- (void)fetchCurrentRelevantPassInfo:(CDUnknownBlockType)arg1;
- (void)fetchHasCandidatePasses:(CDUnknownBlockType)arg1;
- (void)recomputeRelevantPassesWithSearchMode:(long long)arg1;
- (void)_applyDataAccessorToObjects:(id)arg1;
- (void)_getDataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 objectUniqueIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_getArchivedObjectWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_getPassWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_getPassesAndCatalogOfPassTypes:(unsigned long long)arg1 limitResults:(_Bool)arg2 withRetries:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;
- (id)_passesOfType:(unsigned long long)arg1 withRetries:(unsigned long long)arg2;
- (id)_passesWithRetries:(unsigned long long)arg1;
- (void)_postLibraryChangeWithUserInfo:(id)arg1;
- (void)contactlessInterfaceDidDismissFromSource:(long long)arg1;
- (void)contactlessInterfaceDidPresentFromSource:(long long)arg1;
- (void)passRemoved:(id)arg1;
- (void)passUpdated:(id)arg1;
- (void)passAdded:(id)arg1;
- (void)removingPassesOfType:(unsigned long long)arg1 didFinishWithSuccess:(_Bool)arg2;
- (void)removingPassesOfType:(unsigned long long)arg1 didUpdateWithProgress:(double)arg2;
- (void)catalogChanged:(id)arg1 withNewPasses:(id)arg2;
- (id)diffForPassBulletinWithRecordID:(id)arg1;
- (void)noteAccountDeleted;
- (void)noteAccountChanged;
- (void)logDelayExitReasons;
- (void)shuffleGroups:(int)arg1;
- (void)removePassesOfType:(unsigned long long)arg1 withDiagnosticReason:(id)arg2;
- (void)removePassesOfType:(unsigned long long)arg1;
- (void)removePassWithUniqueID:(id)arg1 diagnosticReason:(id)arg2;
- (void)introduceDatabaseIntegrityProblem;
- (void)removeAllScheduledActivities;
- (void)nukeDatabaseAndExit;
- (void)notifyPassUsed:(id)arg1 fromSource:(long long)arg2;
- (void)sendUserEditedCatalog:(id)arg1;
- (_Bool)migrateData;
- (_Bool)_hasRemoteLibrary;
- (_Bool)isPaymentPassActivationAvailable;
- (id)defaultPaymentPasses;
- (_Bool)resetSettingsForPass:(id)arg1;
- (_Bool)setAutomaticPresentationEnabled:(_Bool)arg1 forPass:(id)arg2;
- (_Bool)setNotificationServiceUpdatesEnabled:(_Bool)arg1 forPass:(id)arg2;
- (_Bool)setAutomaticUpdatesEnabled:(_Bool)arg1 forPass:(id)arg2;
- (_Bool)setShowInLockScreenEnabled:(_Bool)arg1 forPass:(id)arg2;
- (_Bool)_setSetting:(unsigned long long)arg1 enabled:(_Bool)arg2 forPass:(id)arg3;
- (void)_fetchImageSetForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)fetchImageSetForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)fetchContentForUniqueID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateSettings:(unsigned long long)arg1 forObjectWithUniqueID:(id)arg2;
- (void)noteObjectSharedWithUniqueID:(id)arg1;
- (void)getContainmentStatusAndSettingsForPass:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)removePass:(id)arg1;
- (void)requestPersonalizationOfPassWithUniqueIdentifier:(id)arg1 contact:(id)arg2 personalizationToken:(id)arg3 requiredPersonalizationFields:(unsigned long long)arg4 personalizationSource:(unsigned long long)arg5 handler:(CDUnknownBlockType)arg6;
- (void)requestUpdateOfObjectWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_activatePaymentPass:(id)arg1 withActivationCode:(id)arg2 activationData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)activatePaymentPass:(id)arg1 withActivationData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)activatePaymentPass:(id)arg1 withActivationCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestContactlessInterfaceSuppressionFromUserWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentContactlessInterfaceForPassWithUniqueIdentifier:(id)arg1 fromSource:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentContactlessInterfaceForDefaultPassFromSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentPaymentPass:(id)arg1;
- (void)openPaymentSetup;
- (void)addPasses:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 objectUniqueIdentifier:(id)arg3;
- (id)archiveForObjectWithUniqueID:(id)arg1;
- (_Bool)replacePassWithPass:(id)arg1;
- (_Bool)containsPass:(id)arg1;
- (void)getPassesAndCatalogOfPassTypes:(unsigned long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getPassesAndCatalog:(_Bool)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getRouteRelevantPassesFromLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)enabledValueAddedServicePassesWithCompletion:(CDUnknownBlockType)arg1;
- (void)hasInAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)inAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)hasInAppPaymentPassesForNetworks:(id)arg1 capabilities:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)hasInAppPaymentPassesForNetworks:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)inAppPaymentPassesForNetworks:(id)arg1 capabilities:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)inAppPaymentPassesForNetworks:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (_Bool)isPassbookVisible;
- (_Bool)isRemovingPassesOfType:(unsigned long long)arg1;
- (_Bool)canAddPaymentPassWithPrimaryAccountIdentifier:(id)arg1;
- (_Bool)canAddPassOfType:(unsigned long long)arg1;
- (_Bool)hasPassesOfType:(unsigned long long)arg1;
- (id)remotePaymentPasses;
- (id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (void)getPassUniqueIdentifiersForFieldProperties:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getPassesWithUniqueIdentifiers:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)passWithUniqueID:(id)arg1;
- (id)passesOfType:(unsigned long long)arg1;
- (id)passes;
- (id)_inAppRemoteObjectProxyWithSemaphore:(id)arg1;
- (id)_inAppRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_inAppRemoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_inAppRemoteObjectProxy;
- (id)_extendedRemoteObjectProxyWithSemaphore:(id)arg1;
- (id)_extendedRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_extendedRemoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_extendedRemoteObjectProxy;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxy;
- (void)dealloc;
- (id)initWithMachServiceName:(id)arg1 resumeNotificationName:(id)arg2 interfaceType:(unsigned long long)arg3;
- (id)init;

@end

