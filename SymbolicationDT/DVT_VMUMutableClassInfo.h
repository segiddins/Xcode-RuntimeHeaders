//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SymbolicationDT/DVT_VMUClassInfo.h>

@class NSString;

@interface DVT_VMUMutableClassInfo : DVT_VMUClassInfo
{
}

- (void)addVariant:(id)arg1 forField:(id)arg2 withEvaluator:(CDUnknownBlockType)arg3;
- (void)setFields:(id)arg1;
- (void)replaceField:(id)arg1 withFields:(id)arg2;
- (void)mutateTypeFieldsWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) unsigned int defaultScanType; // @dynamic defaultScanType;
@property(retain, nonatomic) DVT_VMUClassInfo *superclassInfo; // @dynamic superclassInfo;
@property(copy, nonatomic) NSString *binaryPath; // @dynamic binaryPath;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;

@end

