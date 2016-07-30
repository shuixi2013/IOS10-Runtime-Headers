//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TPPageGenerator-Protocol.h>

@class NSString, TPDocumentRoot;

__attribute__((visibility("hidden")))
@interface TPOrphanPageGenerator : NSObject <TPPageGenerator>
{
    TPDocumentRoot *_documentRoot;
}

- (void)createOrUpdatePageHintInSectionHint:(id)arg1 withState:(id)arg2;
- (_Bool)wantsPageInSectionHint:(id)arg1 withState:(id)arg2;
- (id)init;
- (id)initWithDocumentRoot:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

