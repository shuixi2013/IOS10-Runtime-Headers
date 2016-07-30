//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPFinalizeHandlerQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    long long _rootObjectIdentifier;
    struct vector<TSP::FinalizeHandlerItem *, std::__1::allocator<TSP::FinalizeHandlerItem *>> _order;
    struct unordered_map<const long long, TSP::FinalizeHandlerItem, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::FinalizeHandlerItem>>> _map;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)runFinalizeHandlers;
- (void)runFinalizeHandlerForItem:(struct FinalizeHandlerItem *)arg1;
- (void)visitItemForCycleDetection:(struct FinalizeHandlerItem *)arg1;
- (void)addFinalizeHandlers:(vector_667badbd *)arg1 strongReferencesOrNull:(unordered_map_88cdf798 *)arg2 forIdentifier:(long long)arg3;
- (void)reset;
- (id)initWithRootObjectIdentifier:(long long)arg1;
- (id)init;

@end

