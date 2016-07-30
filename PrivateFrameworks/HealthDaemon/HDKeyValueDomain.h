//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile, NSString;

@interface HDKeyValueDomain : NSObject
{
    HDProfile *_profile;
    Class _entityClass;
    long long _category;
    NSString *_domainName;
}

@property(readonly, nonatomic) NSString *domainName; // @synthesize domainName=_domainName;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
- (void).cxx_destruct;
- (_Bool)setValuesWithDictionary:(id)arg1 error:(id *)arg2;
- (_Bool)setString:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (_Bool)setNumber:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (_Bool)setQuantity:(id)arg1 unit:(id)arg2 forKey:(id)arg3 error:(id *)arg4;
- (_Bool)setDate:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (_Bool)setData:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)modificationDatesForKeys:(id)arg1 error:(id *)arg2;
- (id)allValuesWithError:(id *)arg1;
- (id)valuesForKeys:(id)arg1 error:(id *)arg2;
- (id)stringForKey:(id)arg1 error:(id *)arg2;
- (id)numberForKey:(id)arg1 error:(id *)arg2;
- (id)quantityForKey:(id)arg1 unit:(id)arg2 error:(id *)arg3;
- (id)dateForKey:(id)arg1 error:(id *)arg2;
- (id)dataForKey:(id)arg1 error:(id *)arg2;
- (id)initWithCategory:(long long)arg1 domainName:(id)arg2 profile:(id)arg3;

@end

