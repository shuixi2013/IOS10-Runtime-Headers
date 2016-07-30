//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSInvocation, NSString;

@interface _PBProperty : NSObject
{
    NSString *_name;
    Class _objectType;
    Class _subObjectType;
    BOOL _type;
    BOOL _subType;
    NSInvocation *_setter;
    NSInvocation *_getter;
    NSInvocation *_has;
    NSInvocation *_count;
    NSInvocation *_convertToString;
    NSInvocation *_convertFromString;
    CDUnknownFunctionPointerType _toDictionaryReprFn;
    CDUnknownFunctionPointerType _fromDictionaryReprFn;
    NSString *_structName;
    NSArray *_structFields;
    unsigned long long _structSize;
}

+ (id)getValidPropertiesForType:(Class)arg1 withCache:(id)arg2;
+ (id)pbPropertyFor:(struct objc_property *)arg1 type:(Class)arg2;
@property(retain, nonatomic) Class subObjectType; // @synthesize subObjectType=_subObjectType;
@property(retain, nonatomic) Class objectType; // @synthesize objectType=_objectType;
@property(nonatomic) BOOL subType; // @synthesize subType=_subType;
@property(nonatomic) BOOL type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (id)getPtrArrayValueFromInstance:(id)arg1;
- (void)setNumberValue:(id)arg1 onInstance:(id)arg2;
- (id)getNumberValueFromInstance:(id)arg1;
- (_Bool)setStructValue:(id)arg1 onInstance:(id)arg2;
- (id)getStructValueFromInstance:(id)arg1;
- (void)setObjValue:(id)arg1 onInstance:(id)arg2;
- (id)getObjValueFromInstance:(id)arg1;
- (unsigned long long)getCountOfRepeatedValuesFromInstance:(id)arg1;
@property(readonly, nonatomic) _Bool isStruct;
@property(readonly, nonatomic) _Bool isObject;
@property(readonly, nonatomic) _Bool canConvertFromString;
- (_Bool)instanceHasValue:(id)arg1;
- (id)initWith:(struct objc_property *)arg1 type:(Class)arg2;
- (id)_parseStructDefinition:(id)arg1;
- (void)dealloc;

@end

