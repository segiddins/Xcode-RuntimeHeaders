//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileHandle.h>

@interface NSFileHandle (DVTTaskAdditions)
+ (id)dvt_writeOnlyFileHandleWithNullDevice:(id *)arg1;
+ (id)dvt_readOnlyFileHandleWithNullDevice:(id *)arg1;
+ (id)dvt_fileHandleWithNullDeviceInMode:(int)arg1 error:(id *)arg2;
- (void)dvt_writeData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)dvt_readToEndOfFileWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)dvt_writeFormat:(id)arg1;
- (BOOL)dvt_writeFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (BOOL)dvt_writeString:(id)arg1;
- (BOOL)dvt_writeString:(id)arg1 error:(id *)arg2;
- (BOOL)dvt_writeData:(id)arg1 error:(id *)arg2;
- (id)dvt_duplicateFileHandleWithError:(id *)arg1;
@end

