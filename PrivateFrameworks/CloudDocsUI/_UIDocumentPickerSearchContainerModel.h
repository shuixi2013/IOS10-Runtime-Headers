//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsUI/_UIDocumentPickerURLContainerModel.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerSearchContainerModel : _UIDocumentPickerURLContainerModel
{
    NSString *_queryString;
}

@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
- (void).cxx_destruct;
- (void)_updateObserverForQuery;
- (void)arrayController:(id)arg1 modelChanged:(id)arg2 differences:(id)arg3;
- (struct _UIArrayController *)_createObserver;
- (id)scopes;
- (void)startMonitoringChanges;
- (id)displayTitle;
- (_Bool)shouldShowTopLevelContainers;
- (id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3;
- (id)initWithPickableTypes:(id)arg1 mode:(unsigned long long)arg2;

@end

