//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBRefactoringChange.h>

@class NSString;

@interface IBRefactoringActionChange : IBRefactoringChange
{
}

+ (id)commandString;
@property(retain) NSString *destinationActionType;
@property(retain) NSString *destinationActionName;
@property(retain) NSString *destinationActionClass;
@property(retain) NSString *sourceActionType;
@property(retain) NSString *sourceActionName;
@property(retain) NSString *sourceActionClass;
- (id)initWithFileChangeSet:(id)arg1 fileLocation:(id)arg2;

@end

