//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAttributePlaceholder.h>

@class NSArray;

@interface IBUserDefinedRuntimeAttributesPlaceholderAbstract : IBAttributePlaceholder
{
    float _orderPriority;
    NSArray *_userDefinedRuntimeAttributes;
}

- (void).cxx_destruct;
@property(nonatomic) float orderPriority; // @synthesize orderPriority=_orderPriority;
@property(copy, nonatomic) NSArray *userDefinedRuntimeAttributes; // @synthesize userDefinedRuntimeAttributes=_userDefinedRuntimeAttributes;
- (id)archiveConnection;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1 andUserDefinedRuntimeAttributes:(id)arg2;

@end

