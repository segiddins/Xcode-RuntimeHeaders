//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DependencyViewerCluster;
@protocol DYPDependencyGraphNode, GPUAbstractTraceOutlineItem;

@interface DependencyViewerEvent : NSObject
{
    DependencyViewerCluster *_twin;
    id <DYPDependencyGraphNode> _data;
    id <GPUAbstractTraceOutlineItem> _outlineItem;
    unsigned long long _annotationLocation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long annotationLocation; // @synthesize annotationLocation=_annotationLocation;
@property(readonly, nonatomic) __weak id <GPUAbstractTraceOutlineItem> outlineItem; // @synthesize outlineItem=_outlineItem;
@property(readonly, nonatomic) __weak id <DYPDependencyGraphNode> data; // @synthesize data=_data;
@property(nonatomic) __weak DependencyViewerCluster *twin; // @synthesize twin=_twin;
- (id)initWithEvent:(id)arg1 outlineItem:(id)arg2 twin:(id)arg3 location:(unsigned long long)arg4;

@end

