//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <EventKitUI/EKEditItemViewControllerDelegate-Protocol.h>
#import <EventKitUI/EKEditItemViewControllerProtocol-Protocol.h>
#import <EventKitUI/UITableViewDataSource-Protocol.h>
#import <EventKitUI/UITableViewDelegate-Protocol.h>

@class EKEvent, EKInviteeAlternativeTimeSearcher, EKUIEventInviteesEditViewController, EKUIEventInviteesView, EKUIInviteesViewAddInviteesSection, EKUIInviteesViewAllInviteesCanAttendSection, EKUIInviteesViewInvisibleInviteeStatusSection, EKUIInviteesViewNotRespondedInviteesSection, EKUIInviteesViewOriginalConflictSection, EKUIInviteesViewProposedTimeSection, EKUIInviteesViewRespondedInviteesSection, EKUIInviteesViewSomeInviteesCanAttendSection, NSArray, NSDate, NSString;
@protocol EKEditItemViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface EKUIEventInviteesViewController : UITableViewController <EKEditItemViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, EKEditItemViewControllerProtocol>
{
    _Bool _resetAttendeesSections;
    _Bool _resetConflictResolutionSections;
    _Bool _viewIsVisible;
    _Bool _deletedParticipants;
    _Bool _fromDetail;
    EKUIEventInviteesEditViewController *_parentController;
    NSDate *_selectedStartDate;
    NSDate *_selectedEndDate;
    EKUIEventInviteesView *_inviteesView;
    EKEvent *_event;
    NSArray *_sections;
    EKUIInviteesViewAddInviteesSection *_addInviteesSection;
    EKUIInviteesViewRespondedInviteesSection *_respondedSection;
    EKUIInviteesViewNotRespondedInviteesSection *_notRespondedSection;
    EKUIInviteesViewInvisibleInviteeStatusSection *_invisibleInviteeStatusSection;
    EKUIInviteesViewProposedTimeSection *_proposedTimeSection;
    EKUIInviteesViewOriginalConflictSection *_originalConflictSection;
    EKUIInviteesViewSomeInviteesCanAttendSection *_someInviteesCanAttendSection;
    EKUIInviteesViewAllInviteesCanAttendSection *_allInviteesCanAttendSection;
    EKInviteeAlternativeTimeSearcher *_availabilitySearcher;
}

+ (id)_participantsInArray:(id)arg1 thatAreNotInArray:(id)arg2;
@property(retain, nonatomic) EKInviteeAlternativeTimeSearcher *availabilitySearcher; // @synthesize availabilitySearcher=_availabilitySearcher;
@property(retain, nonatomic) EKUIInviteesViewAllInviteesCanAttendSection *allInviteesCanAttendSection; // @synthesize allInviteesCanAttendSection=_allInviteesCanAttendSection;
@property(retain, nonatomic) EKUIInviteesViewSomeInviteesCanAttendSection *someInviteesCanAttendSection; // @synthesize someInviteesCanAttendSection=_someInviteesCanAttendSection;
@property(retain, nonatomic) EKUIInviteesViewOriginalConflictSection *originalConflictSection; // @synthesize originalConflictSection=_originalConflictSection;
@property(retain, nonatomic) EKUIInviteesViewProposedTimeSection *proposedTimeSection; // @synthesize proposedTimeSection=_proposedTimeSection;
@property(retain, nonatomic) EKUIInviteesViewInvisibleInviteeStatusSection *invisibleInviteeStatusSection; // @synthesize invisibleInviteeStatusSection=_invisibleInviteeStatusSection;
@property(retain, nonatomic) EKUIInviteesViewNotRespondedInviteesSection *notRespondedSection; // @synthesize notRespondedSection=_notRespondedSection;
@property(retain, nonatomic) EKUIInviteesViewRespondedInviteesSection *respondedSection; // @synthesize respondedSection=_respondedSection;
@property(retain, nonatomic) EKUIInviteesViewAddInviteesSection *addInviteesSection; // @synthesize addInviteesSection=_addInviteesSection;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) EKEvent *event; // @synthesize event=_event;
@property(nonatomic) _Bool fromDetail; // @synthesize fromDetail=_fromDetail;
@property(nonatomic) _Bool deletedParticipants; // @synthesize deletedParticipants=_deletedParticipants;
@property(nonatomic) _Bool viewIsVisible; // @synthesize viewIsVisible=_viewIsVisible;
@property(nonatomic) _Bool resetConflictResolutionSections; // @synthesize resetConflictResolutionSections=_resetConflictResolutionSections;
@property(nonatomic) _Bool resetAttendeesSections; // @synthesize resetAttendeesSections=_resetAttendeesSections;
@property(retain, nonatomic) EKUIEventInviteesView *inviteesView; // @synthesize inviteesView=_inviteesView;
@property(retain, nonatomic) NSDate *selectedEndDate; // @synthesize selectedEndDate=_selectedEndDate;
@property(retain, nonatomic) NSDate *selectedStartDate; // @synthesize selectedStartDate=_selectedStartDate;
@property(nonatomic) __weak EKUIEventInviteesEditViewController *parentController; // @synthesize parentController=_parentController;
- (void).cxx_destruct;
- (void)_searcherStateChanged:(long long)arg1;
- (void)_requestDismissal;
- (void)_refreshIfNeeded;
- (id)_attendeesWithoutOrganizerAndLocations;
- (id)_sectionForIndex:(unsigned long long)arg1;
- (long long)_indexForSection:(id)arg1;
- (id)_viewControllerForPresentingViewControllers;
- (void)_dismissPresentedViewControllerAnimated:(_Bool)arg1;
- (void)_presentViewController:(id)arg1;
- (void)_fontSizeDefinitionsChanged:(id)arg1;
- (void)_eventModified:(id)arg1;
- (void)_sendMessageToParticipants:(id)arg1;
- (void)_dismiss:(id)arg1;
- (_Bool)editItemViewControllerShouldShowDetachAlert;
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateCustomBackButton;
@property(nonatomic) _Bool useCustomBackButton;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithEvent:(id)arg1 fromDetail:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <EKEditItemViewControllerDelegate> editDelegate;
@property(nonatomic) _Bool editItemShouldBeAskedForInjectableViewController;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool presentModally;
@property(readonly) Class superclass;

@end

