//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEBatchFindAbstractOperatorOperandPredicate.h>

@class NSString;

@interface IDEBatchFindDataTypePredicate : IDEBatchFindAbstractOperatorOperandPredicate
{
}

+ (id)propertyListIdentifier;
+ (id)operatorToString:(long long)arg1;
+ (long long)operatorFromString:(id)arg1;
- (CDUnknownBlockType)filterBoundToWorkspace:(id)arg1;
@property(readonly) NSString *fileDataTypeIdentifier;
@property(readonly) long long dataTypeOperator;
- (id)initWithOperator:(long long)arg1 operand:(id)arg2;

@end

