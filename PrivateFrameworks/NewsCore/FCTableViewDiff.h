//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSIndexSet;

@interface FCTableViewDiff : NSObject <NSCopying>
{
    NSIndexSet *_insertedSections;
    NSIndexSet *_deletedSections;
    NSDictionary *_movedSections;
    NSArray *_insertedRows;
    NSArray *_deletedRows;
    NSDictionary *_movedRows;
    NSArray *_updatedRows;
}

@property(copy, nonatomic) NSArray *updatedRows; // @synthesize updatedRows=_updatedRows;
@property(copy, nonatomic) NSDictionary *movedRows; // @synthesize movedRows=_movedRows;
@property(copy, nonatomic) NSArray *deletedRows; // @synthesize deletedRows=_deletedRows;
@property(copy, nonatomic) NSArray *insertedRows; // @synthesize insertedRows=_insertedRows;
@property(copy, nonatomic) NSDictionary *movedSections; // @synthesize movedSections=_movedSections;
@property(copy, nonatomic) NSIndexSet *deletedSections; // @synthesize deletedSections=_deletedSections;
@property(copy, nonatomic) NSIndexSet *insertedSections; // @synthesize insertedSections=_insertedSections;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, nonatomic) _Bool isEmpty;
- (void)applyToTableView:(id)arg1 withDataUpdateBlock:(CDUnknownBlockType)arg2;
- (id)initWithInsertedSections:(id)arg1 deletedSections:(id)arg2 movedSections:(id)arg3 insertedRows:(id)arg4 deletedRows:(id)arg5 movedRows:(id)arg6 updatedRows:(id)arg7;
- (id)init;

@end

