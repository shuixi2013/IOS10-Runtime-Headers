//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class CKSQLiteStatement;

@interface CKSQLiteStatementEnumerator : NSEnumerator
{
    _Bool _closed;
    CKSQLiteStatement *_statement;
    CDUnknownBlockType _block;
}

@property(nonatomic) _Bool closed; // @synthesize closed=_closed;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) CKSQLiteStatement *statement; // @synthesize statement=_statement;
- (void).cxx_destruct;
- (void)close;
- (id)nextObject;
- (void)dealloc;
- (id)initWithStatement:(id)arg1 block:(CDUnknownBlockType)arg2;

@end

