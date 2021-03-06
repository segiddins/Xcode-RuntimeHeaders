//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface GTFGraphNode : NSObject
{
    int _index;
    NSMutableArray *_inEdges;
    NSMutableArray *_outEdges;
    NSString *_name;
    struct CGPoint _pos;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(nonatomic) int index; // @synthesize index=_index;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) struct CGPoint pos; // @synthesize pos=_pos;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSMutableArray *outEdges; // @synthesize outEdges=_outEdges;
@property(retain, nonatomic) NSMutableArray *inEdges; // @synthesize inEdges=_inEdges;
- (long long)compareNodeIndices:(id)arg1;
- (long long)compareNodeDegrees:(id)arg1;
- (id)description;
- (struct CGPoint)centrePos;
- (void)setCentrePos:(struct CGPoint)arg1;
- (id)edgeConnectedFrom:(id)arg1;
- (id)edgeConnectedTo:(id)arg1;
- (id)inNodes;
- (id)outNodes;
- (BOOL)isSink;
- (BOOL)isSource;
- (unsigned long long)outDegree;
- (unsigned long long)inDegree;
- (void)unlinkToNode:(id)arg1 usingEdgeObject:(id)arg2;
- (id)linkToNode:(id)arg1 usingEdgeObject:(id)arg2;
- (id)linkToNode:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToGraphNode:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithKey:(id)arg1;
- (id)init;

@end

