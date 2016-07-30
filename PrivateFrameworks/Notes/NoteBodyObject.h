//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <Notes/ICSearchIndexableTarget-Protocol.h>

@class NSData, NSString, NoteObject;

@interface NoteBodyObject : NSManagedObject <ICSearchIndexableTarget>
{
}

- (id)contentAsPlainTextPreservingNewlines;
@property(readonly, nonatomic) NSString *contentAsPlainText;
- (id)targetSearchIndexable;

// Remaining properties
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *externalContentRef; // @dynamic externalContentRef;
@property(retain, nonatomic) NSData *externalRepresentation; // @dynamic externalRepresentation;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NoteObject *owner; // @dynamic owner;
@property(readonly) Class superclass;

@end

