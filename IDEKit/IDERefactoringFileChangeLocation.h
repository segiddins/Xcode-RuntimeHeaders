//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath;

@interface IDERefactoringFileChangeLocation : NSObject
{
    DVTFilePath *_filePath;
}

@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (long long)compareFileLocationNoPath:(id)arg1;
- (BOOL)isEqualToFileLocation:(id)arg1;
- (id)description;
- (id)initWithFilePath:(id)arg1;

@end

