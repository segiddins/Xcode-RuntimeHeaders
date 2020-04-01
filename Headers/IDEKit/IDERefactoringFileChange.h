//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDERenameRefactoringChange-Protocol.h>

@class IDERefactoringFileChangeSet, NSString;

@interface IDERefactoringFileChange : NSObject <IDERenameRefactoringChange>
{
    IDERefactoringFileChangeSet *_fileChangeSet;
    BOOL _shouldBeApplied;
    NSString *_valueName;
}

@property(retain) NSString *valueName; // @synthesize valueName=_valueName;
@property BOOL shouldBeApplied; // @synthesize shouldBeApplied=_shouldBeApplied;
@property(readonly) __weak IDERefactoringFileChangeSet *fileChangeSet; // @synthesize fileChangeSet=_fileChangeSet;
- (void).cxx_destruct;
@property(readonly) NSString *categoryName;
@property(readonly) NSString *originalValueName;
@property(readonly) NSString *keyName;
- (id)initWithFileChangeSet:(id)arg1;

@end

