//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSKeyedUnarchiver.h>

@interface NSKeyedUnarchiver (DVTKeyedArchiverAdditions)
+ (id)dvt_unarchiveObjectOfClasses:(id)arg1 fromData:(id)arg2 error:(id *)arg3;
+ (id)dvt_unarchiveObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id *)arg3;
+ (void)dvt_unarchiveData:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)dvt_initRequiringSecureCoding:(BOOL)arg1 forReadingFromData:(id)arg2 error:(id *)arg3;
@end

