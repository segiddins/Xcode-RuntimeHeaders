//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPUTraceResourceItem.h>

@protocol DYResource;

@interface GPUTracePostVertexTransformItem : GPUTraceResourceItem
{
    id <DYResource> _loadedResource;
}

- (void).cxx_destruct;
@property(retain) id <DYResource> loadedResource; // @synthesize loadedResource=_loadedResource;
- (void)resourceObjectWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)label;
- (BOOL)navigableItem_isLeaf;
- (id)navigableItem_image;
- (id)navigableItem_name;

@end

