//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <UIKit/UIDebuggingInformationViewController-Protocol.h>

@class NSObject;

__attribute__((visibility("hidden")))
@interface UIDebuggingIvarViewController : UITableViewController <UIDebuggingInformationViewController>
{
    NSObject *_inspectedObject;
}

@property(nonatomic) __weak NSObject *inspectedObject; // @synthesize inspectedObject=_inspectedObject;
- (void).cxx_destruct;
- (void)prepareForDisplayAsTopLevelDebuggingViewController;
- (id)_ivarsForInspectedObjectInClass:(Class)arg1;
- (id)_classHierarchyForInspectedObject;
- (Class)_classForTableSection:(long long)arg1;
- (id)_ivarForIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)init;

@end

