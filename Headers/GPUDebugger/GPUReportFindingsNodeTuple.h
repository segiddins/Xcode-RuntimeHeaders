//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GPUTreeNode, NSMutableArray;

@interface GPUReportFindingsNodeTuple : NSObject
{
    NSMutableArray *_findings;
    GPUTreeNode *_node;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GPUTreeNode *node; // @synthesize node=_node;
@property(readonly, nonatomic) NSMutableArray *findings; // @synthesize findings=_findings;
- (id)init;

@end

