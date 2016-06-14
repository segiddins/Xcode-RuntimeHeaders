//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEEntitlementsProcessor.h>

@class NSArray, NSString;

@interface IDEiCloudEntitlementsProcessor : IDEEntitlementsProcessor
{
}

+ (id)availableOptionsForPropertyList;
- (BOOL)runWithError:(id *)arg1;
- (BOOL)loadFromPropertyList:(id)arg1 error:(id *)arg2;
@property(copy, nonatomic) NSString *selectedEnvironment;
@property(readonly, nonatomic) NSArray *availableEnvironments;
- (BOOL)isApplicable;
- (BOOL)needsInteraction;

@end

