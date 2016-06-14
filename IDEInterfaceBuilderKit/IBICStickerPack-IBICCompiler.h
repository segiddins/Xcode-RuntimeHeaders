//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICStickerPack.h>

#import <IDEInterfaceBuilderKit/IBICCompilableSticker-Protocol.h>

@class NSString;

@interface IBICStickerPack (IBICCompiler) <IBICCompilableSticker>
- (BOOL)compileToPath:(id)arg1 options:(id)arg2 results:(id)arg3;
- (id)effectiveBundleIDWithPrefix:(id)arg1;
- (id)compiledStickerpackFileName;
- (BOOL)compileInfoPlist:(id)arg1 toPath:(id)arg2 options:(id)arg3 results:(id)arg4;
- (BOOL)compileStringFilesToPath:(id)arg1 options:(id)arg2 results:(id)arg3;
- (BOOL)compileChildrenToPath:(id)arg1 options:(id)arg2 results:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

