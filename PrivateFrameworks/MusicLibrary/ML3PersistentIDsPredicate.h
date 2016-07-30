//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicLibrary/ML3Predicate.h>

@class NSArray;

@interface ML3PersistentIDsPredicate : ML3Predicate
{
    NSArray *_persistentIDs;
    _Bool _shouldContain;
}

+ (id)predicateWithPersistentIDs:(id)arg1 shouldContain:(_Bool)arg2;
+ (id)predicateWithPersistentIDs:(const long long *)arg1 count:(unsigned long long)arg2 shouldContain:(_Bool)arg3;
@property(readonly, nonatomic) _Bool shouldContain; // @synthesize shouldContain=_shouldContain;
- (void).cxx_destruct;
- (id)databaseStatementParameters;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithPersistentIDs:(id)arg1 shouldContain:(_Bool)arg2;

@end

