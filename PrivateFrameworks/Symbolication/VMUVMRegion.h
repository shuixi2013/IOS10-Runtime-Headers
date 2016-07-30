//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VMUVMRegion : NSObject
{
    struct _VMURange range;
    unsigned int prot;
    unsigned int maxProt;
    NSString *type;
    NSString *path;
    _Bool summarized;
    unsigned char external_pager;
    unsigned char share_mode;
    int purgeable;
    unsigned long long virtual_pages;
    unsigned long long pages_resident;
    unsigned long long pages_shared_now_private;
    unsigned long long pages_swapped_out;
    unsigned long long pages_dirtied;
    unsigned long long ref_count;
    unsigned int user_tag;
    unsigned long long object_id;
    unsigned int nesting_depth;
    unsigned int is_submap:1;
    unsigned int is_macho_region:1;
    unsigned int is_unused_data_region:1;
    unsigned int is_unused_data_page_shared_with_active_content:1;
    unsigned int reserved_flags:28;
    unsigned long long mallocBlockCount;
    unsigned int mallocTypeFlag;
    unsigned int zone_index;
    unsigned int coalesced_region_count;
    unsigned long long resident_size;
    unsigned long long shared_now_private_size;
    unsigned long long swapped_out_size;
    unsigned long long dirty_size;
    unsigned long long purgable_vol_size;
    unsigned long long purgable_non_vol_size;
    unsigned long long purgable_empty_size;
}

+ (id)columnHeadersWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 memorySizeDivisor:(unsigned int)arg3 hasFractionalPageSizes:(_Bool)arg4;
+ (id)columnHeadersWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2;
+ (void)initialize;
- (id)breakAtLength:(unsigned long long)arg1;
- (void)addInfoFromRegion:(id)arg1;
- (_Bool)hasSameInfoAsRegion:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isSubmap;
- (unsigned int)maxProtection;
- (unsigned int)protection;
- (id)path;
- (id)type;
- (unsigned long long)length;
- (unsigned long long)address;
- (struct _VMURange)range;
- (id)description;
- (id)descriptionWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 memorySizeDivisor:(unsigned int)arg3 hasFractionalPageSizes:(_Bool)arg4;
- (id)descriptionWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2;
- (void)getVMRegionData:(struct _VMUVMRegionData *)arg1 withSimpleSerializer:(id)arg2;
- (void)dealloc;
- (id)initWithVMRegionData:(struct _VMUVMRegionData *)arg1 encodedVersion:(long long)arg2 simpleSerializer:(id)arg3;
- (id)init;

@end

