//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/ICNoteContainer.h>

#import <NotesShared/ICCloudObject-Protocol.h>

@class ICAccount, NSDate, NSSet, NSString;

@interface ICFolder : ICNoteContainer <ICCloudObject>
{
}

+ (id)keyPathsForValuesAffectingCanBeSharedViaICloud;
+ (id)keyPathsForValuesAffectingParentCloudObject;
+ (id)englishTitleForTrashFolder;
+ (id)localizedTitleForTrashFolder;
+ (id)englishTitleForDefaultFolder;
+ (id)localizedTitleForDefaultFolder;
+ (id)keyPathsForValuesAffectingTitleForTableViewCell;
+ (id)keyPathsForValuesAffectingIsDefaultFolderForAccount;
+ (id)keyPathsForValuesAffectingVisibleNoteContainerChildren;
+ (id)keyPathsForValuesAffectingIsLeaf;
+ (id)stringByScrubbingStringForFolderName:(id)arg1;
+ (id)localizedNewFolderName;
+ (id)deduplicatingTitle:(id)arg1 forFolder:(id)arg2 ofAccount:(id)arg3;
+ (id)reservedFolderTitles;
+ (id)predicateForVisibleFoldersIncludingHiddenNoteContainers:(_Bool)arg1;
+ (id)predicateForVisibleFolders;
+ (unsigned long long)countOfFoldersMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)foldersMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)visibleFoldersInContext:(id)arg1;
+ (id)allFoldersInContext:(id)arg1;
+ (id)folderWithIdentifierCreatingIfNecessary:(id)arg1 context:(id)arg2;
+ (id)folderWithIdentifier:(id)arg1 context:(id)arg2;
+ (void)purgeFolder:(id)arg1;
+ (void)deleteFolder:(id)arg1;
+ (id)newFolderWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)newFolderInContext:(id)arg1;
+ (id)allCloudObjectsInContext:(id)arg1;
+ (id)newCloudObjectForRecord:(id)arg1 context:(id)arg2;
+ (id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;
- (_Bool)canBeSharedViaICloud;
- (id)parentCloudObject;
- (id)shareType;
- (id)shareTitle;
- (id)childCloudObjects;
- (id)loggingDescriptionValues;
- (_Bool)shouldTrackChanges;
- (id)noteVisibilityTestingForSearchingAccount;
- (_Bool)supportsEditingNotes;
- (void)regenerateNestedTitleForSorting;
- (id)titleForTableViewCell;
- (id)localizedTitle;
- (id)titleForNavigationBar;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (id)predicateForVisibleAttachments;
- (id)predicateForVisibleNotes;
- (id)visibleNotesIncludingChildFolders;
- (id)accountName;
- (_Bool)visibleChildFoldersContainsFolderWithTitle:(id)arg1;
- (_Bool)isTitleValid:(id)arg1 error:(out id *)arg2;
- (_Bool)validateTitle:(inout id *)arg1 error:(out id *)arg2;
- (void)setMarkedForDeletion:(_Bool)arg1;
- (void)markForDeletion;
@property(retain, nonatomic) ICAccount *account; // @dynamic account;
- (void)updateSortOrder;
- (_Bool)isAncestorOfFolder:(id)arg1;
- (_Bool)isDefaultFolderOrDescendantOfDefaultFolder;
@property(readonly, nonatomic) _Bool isDefaultFolderForAccount; // @dynamic isDefaultFolderForAccount;
- (id)parentFolder;
@property(retain, nonatomic) ICFolder *parent; // @dynamic parent;
@property(retain, nonatomic) NSString *title; // @dynamic title;
- (void)setNeedsInitialFetchFromCloud:(_Bool)arg1;
- (void)prepareForDeletion;
- (void)awakeFromFetch;
- (long long)compare:(id)arg1;
- (id)visibleNoteContainerChildren;
- (_Bool)isRecentlyDeletedFolder;
- (_Bool)isMovable;
- (_Bool)isLeaf;
- (_Bool)isDeletable;
- (_Bool)isEditable;
- (id)predicateForVisibleAttachmentsInFolder;
- (id)predicateForAttachmentsInFolder;
- (id)predicateForVisibleNotesInFolder;
- (id)predicateForFoldersInFolder;
- (id)predicateForNotesInFolder;
- (unsigned long long)countOfVisibleNotesInFolder;
- (id)foldersInFolder;
- (id)visibleNotesInFolder;
- (unsigned long long)visibleNotesCount;
- (id)visibleNotes;
- (void)resetUniqueIdentifier;
- (void)objectWasDeletedFromCloudByAnotherDevice;
- (void)objectWasFetchedFromCloudWithRecord:(id)arg1;
- (id)objectsToBeDeletedBeforeThisObject;
- (void)deleteFromLocalDatabase;
- (_Bool)hasAllMandatoryFields;
- (void)fixBrokenReferences;
- (_Bool)isInICloudAccount;
- (id)newlyCreatedRecord;
- (void)mergeParentFromRecord:(id)arg1;
- (void)mergeDataFromRecord:(id)arg1;
- (id)recordType;
- (id)recordZoneName;
- (void)unmarkForDeletionIncludingParentHierarchy;

// Remaining properties
@property(retain, nonatomic) NSSet *children; // @dynamic children;
@property(retain, nonatomic) NSDate *dateForLastTitleModification; // @dynamic dateForLastTitleModification;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) short folderType; // @dynamic folderType;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool importedFromLegacy; // @dynamic importedFromLegacy;
@property(retain, nonatomic) NSSet *noteChanges; // @dynamic noteChanges;
@property(retain, nonatomic) NSSet *notes; // @dynamic notes;
@property(retain, nonatomic) NSDate *parentModificationDate; // @dynamic parentModificationDate;
@property(readonly) Class superclass;

@end

