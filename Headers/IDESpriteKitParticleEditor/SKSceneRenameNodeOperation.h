//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESpriteKitParticleEditor/SKDocumentOperation.h>

@class NSString;
@protocol SKSceneRenaming;

@interface SKSceneRenameNodeOperation : SKDocumentOperation
{
    id <SKSceneRenaming> _renamingNode;
    NSString *_newName;
    NSString *_oldName;
}

- (void).cxx_destruct;
- (BOOL)_performRevert;
- (BOOL)_performApply;
- (id)initWithDocument:(id)arg1 renamingNode:(id)arg2 newName:(id)arg3;

@end

