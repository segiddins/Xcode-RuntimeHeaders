//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebuggerMTLSupport/NSObject-Protocol.h>

@class NSSet, NSString;
@protocol DYPTraceOutlineVisitor;

@protocol DYPTraceOutlineDelegate <NSObject>
- (void)outlineVisitor:(id <DYPTraceOutlineVisitor>)arg1 addPipelineStateToCurrentDisplayable:(unsigned long long)arg2;
- (void)outlineVisitor:(id <DYPTraceOutlineVisitor>)arg1 createDisplayableOfType:(long long)arg2 fromFunction:(struct Function *)arg3 disclosureHandler:(void (^)(struct Function *))arg4;
- (void)outlineVisitor:(id <DYPTraceOutlineVisitor>)arg1 createDisplayableOfType:(long long)arg2 fromFunction:(struct Function *)arg3 filterStrings:(NSSet *)arg4 disclosureHandler:(void (^)(struct Function *))arg5;
- (void)outlineVisitor:(id <DYPTraceOutlineVisitor>)arg1 createAPIItemFromFunction:(struct Function *)arg2 disclosureHandler:(void (^)(struct Function *))arg3;
- (void)outlineVisitor:(id <DYPTraceOutlineVisitor>)arg1 pushDisclosureLevelForObjectID:(unsigned long long)arg2 ofType:(unsigned int)arg3;
- (void)outlineVisitor:(id <DYPTraceOutlineVisitor>)arg1 pushDisclosureLevelWithLabel:(NSString *)arg2;
- (void)outlineVisitorPopDisclosureLevel:(id <DYPTraceOutlineVisitor>)arg1;
@end
