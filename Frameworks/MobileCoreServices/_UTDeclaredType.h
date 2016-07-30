//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileCoreServices/_UTConcreteType.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSObject, NSString, NSURL, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UTDeclaredType : _UTConcreteType
{
    NSObject<OS_dispatch_queue> *_additionalInfoQueue;
    unsigned int _flags;
    NSUUID *_uuid;
    NSNumber *_version;
    NSString *_unlocalizedDescription;
    NSDictionary *_localizedDescriptionDictionary;
    NSData *_declaringBundleBookmark;
    NSString *_declaringBundleDelegate;
    NSURL *_declaringBundleURL;
    NSString *_kextName;
    NSDictionary *_tagSpecification;
    NSArray *_conformsTo;
    NSArray *_iconFiles;
    NSURL *_parentIconURL;
    NSString *_referenceURLString;
}

+ (_Bool)supportsSecureCoding;
- (id)_kernelExtensionName;
- (id)_unlocalizedDescription;
- (id)parentIdentifiers;
- (id)tagSpecification;
- (id)version;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)referenceURL;
- (id)_iconURL;
- (id)_localizedDescriptionDictionary;
- (_Bool)_isAppleInternal;
- (_Bool)_isPublic;
- (_Bool)_isActive;
- (_Bool)isDeclared;
- (id)declaration;
- (id)declaringBundleURL;
- (id)localizedDescription;
- (void)dealloc;
- (id)initWithContext:(struct LSContext *)arg1 UTTypeID:(unsigned int)arg2 UTTypeData:(const CDStruct_b227e4e8 *)arg3;
- (_Bool)validateCollectionTypes;
- (_Bool)needsWorkaroundFor22092605;

@end

