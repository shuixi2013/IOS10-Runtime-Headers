//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSMutableSet, NSNumber, NoteStoreObject;

@interface NoteChangeObject : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) NSNumber *changeType; // @dynamic changeType;
@property(retain, nonatomic) NSMutableSet *noteIntegerIds; // @dynamic noteIntegerIds;
@property(retain, nonatomic) NSMutableSet *noteServerIds; // @dynamic noteServerIds;
@property(retain, nonatomic) NSMutableSet *noteServerIntIds; // @dynamic noteServerIntIds;
@property(retain, nonatomic) NoteStoreObject *store; // @dynamic store;
@end

