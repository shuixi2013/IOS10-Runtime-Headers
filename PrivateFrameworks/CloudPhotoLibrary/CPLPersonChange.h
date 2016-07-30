//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLRecordChange.h>

@class NSString;

@interface CPLPersonChange : CPLRecordChange
{
    NSString *_fullName;
    NSString *_personID;
    unsigned long long _personType;
    long long _manualSortOrder;
}

@property(nonatomic) long long manualSortOrder; // @synthesize manualSortOrder=_manualSortOrder;
@property(nonatomic) unsigned long long personType; // @synthesize personType=_personType;
@property(copy, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
- (void).cxx_destruct;
- (_Bool)supportsDeletion;

@end

