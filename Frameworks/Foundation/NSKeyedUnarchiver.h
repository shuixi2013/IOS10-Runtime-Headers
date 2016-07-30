//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSCoder.h>

@protocol NSKeyedUnarchiverDelegate;

@interface NSKeyedUnarchiver : NSCoder
{
    id _delegate;
    unsigned int _flags;
    id _objRefMap;
    id _replacementMap;
    id _nameClassMap;
    id _tmpRefObjMap;
    id _refObjMap;
    int _genericKey;
    id _data;
    void *_offsetData;
    id _containers;
    id _objects;
    const char *_bytes;
    unsigned long long _len;
    id _helper;
    void *_reserved0;
}

+ (Class)classForClassName:(id)arg1;
+ (void)setClass:(Class)arg1 forClassName:(id)arg2;
+ (id)unarchiveTopLevelObjectWithData:(id)arg1 error:(id *)arg2;
+ (id)unarchiveObjectWithData:(id)arg1 error:(id *)arg2;
+ (id)unarchiveObjectWithData:(id)arg1;
+ (id)unarchiveObjectWithFile:(id)arg1;
+ (void)initialize;
- (unsigned int)systemVersion;
- (long long)versionForClassName:(id)arg1;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(void *)arg3;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)arg1;
- (id)decodeDataObject;
- (id)decodeObject;
- (unsigned int)_currentUniqueIdentifier;
- (id)_decodePropertyListForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (_Bool)decodeBoolForKey:(id)arg1;
- (id)_decodeArrayOfObjectsForKey:(id)arg1;
@property long long decodingFailurePolicy;
- (void)__setError:(id)arg1;
- (id)error;
@property _Bool requiresSecureCoding;
- (id)allowedClasses;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeObjectForKey:(id)arg1;
- (_Bool)_validatePropertyListClass:(Class)arg1 forKey:(id)arg2;
- (_Bool)containsValueForKey:(id)arg1;
- (void)_replaceObject:(id)arg1 withObject:(id)arg2;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (void)_temporaryMapReplaceObject:(id)arg1 withObject:(id)arg2;
- (void)finishDecoding;
- (void)setAllowedClasses:(id)arg1;
- (void)_setAllowedClassNames:(id)arg1;
- (id)_allowedClassNames;
- (Class)classForClassName:(id)arg1;
- (void)setClass:(Class)arg1 forClassName:(id)arg2;
@property id <NSKeyedUnarchiverDelegate> delegate;
- (_Bool)_allowsValueCoding;
- (_Bool)allowsKeyedCoding;
- (id)description;
- (void)dealloc;
- (id)initWithStream:(id)arg1;
- (id)initForReadingWithData:(id)arg1;
- (id)_initWithStream:(struct __CFReadStream *)arg1 data:(id)arg2 topDict:(struct __CFDictionary *)arg3;
- (id)init;
- (id)_blobForCurrentObject;

@end

