//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSSet;

@interface EKDirectorySearchQuery : NSObject
{
    _Bool _findGroups;
    _Bool _findLocations;
    _Bool _findResources;
    _Bool _findUsers;
    NSSet *_terms;
    unsigned long long _resultLimit;
}

@property(nonatomic) unsigned long long resultLimit; // @synthesize resultLimit=_resultLimit;
@property(nonatomic) _Bool findUsers; // @synthesize findUsers=_findUsers;
@property(nonatomic) _Bool findResources; // @synthesize findResources=_findResources;
@property(nonatomic) _Bool findLocations; // @synthesize findLocations=_findLocations;
@property(nonatomic) _Bool findGroups; // @synthesize findGroups=_findGroups;
@property(retain, nonatomic) NSSet *terms; // @synthesize terms=_terms;
- (void).cxx_destruct;

@end

