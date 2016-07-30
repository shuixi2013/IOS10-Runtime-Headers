//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <CloudDocsUI/UIViewControllerRestoration-Protocol.h>
#import <CloudDocsUI/_UIDocumentPickerServiceViewController-Protocol.h>

@class NSArray, NSString, NSURL, _UIDocumentPickerContainerViewController, _UIDocumentSearchListController;
@protocol _UIDocumentListControllerDelegate;

@interface _UIDocumentListController : UIViewController <_UIDocumentPickerServiceViewController, UIViewControllerRestoration>
{
    _UIDocumentListController *_rootListController;
    _UIDocumentPickerContainerViewController *_containerViewController;
    int _sortOrderIfNotDeferred;
    long long _displayModeIfNotDeferred;
    long long _availableActionsIfNotDeferred;
    id <_UIDocumentListControllerDelegate> _delegateIfNotDeferred;
    _UIDocumentSearchListController *_searchController;
    struct CGPoint _stateRestoredContentOffset;
    _Bool _editing;
}

+ (id)listControllerHierarchyForURL:(id)arg1;
+ (id)_listControllerHierarchyForURL:(id)arg1 withConstructorBlock:(CDUnknownBlockType)arg2;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
@property(nonatomic) __weak _UIDocumentListController *rootListController; // @synthesize rootListController=_rootListController;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)_updateScrollPositionForStateRestoration;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
@property(nonatomic) long long listMode;
@property(retain, nonatomic) NSArray *selectedItems;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *containedItems;
@property(readonly, nonatomic) NSURL *presentedURL;
- (id)model;
- (id)previewViewControllerForItem:(id)arg1;
- (void)itemsOrSelectionDidChange:(_Bool)arg1;
- (_Bool)shouldShowAction:(long long)arg1;
- (void)performAction:(long long)arg1 item:(id)arg2 view:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)shouldShowSearch;
- (void)didSelectItem:(id)arg1;
- (Class)_classForChildren;
@property(nonatomic) long long availableActions;
- (long long)displayMode;
- (void)setDisplayMode:(long long)arg1;
- (int)sortOrder;
- (void)setSortOrder:(int)arg1;
@property(nonatomic) __weak id <_UIDocumentListControllerDelegate> delegate;
- (void)startSearchWithQueryString:(id)arg1 becomeFirstResponder:(_Bool)arg2;
- (void)updateTitle;
- (void)_setContainerViewController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;
- (void)_commonInitWithModel:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

