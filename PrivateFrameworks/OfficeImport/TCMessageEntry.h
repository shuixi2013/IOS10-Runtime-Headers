//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface TCMessageEntry : NSObject
{
    unsigned long long m_timeStamp;
    int m_tag;
    NSString *m_text;
    NSArray *m_parameters;
    NSMutableArray *m_affectedObjects;
    int m_count;
}

+ (void)initialize;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=m_timeStamp;
- (void)addAffectedObject:(id)arg1;
- (void)mergeEntries:(id)arg1;
- (id)description;
- (void)logWithCat:(id)arg1;
- (long long)timeStampCompare:(id)arg1;
- (int)getCount;
- (id)affectedObjects;
- (id)getParameter:(unsigned int)arg1;
- (unsigned long long)getParameterCount;
- (id)getMessageText;
- (int)getMessageTag;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithTag:(int)arg1 affectedObject:(id)arg2 text:(id)arg3 parameters:(struct __va_list_tag [1])arg4;

@end

