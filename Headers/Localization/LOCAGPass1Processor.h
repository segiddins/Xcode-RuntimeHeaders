//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Localization/LOCAGProcessor.h>

@interface LOCAGPass1Processor : LOCAGProcessor
{
}

- (void)cleanUp;
- (id)mergeNibGlossaries:(id)arg1;
- (void)createXLIFF;
- (void)postProcessNibs;
- (void)extractStringsAndLeverageTranslations;
- (void)populate;
- (void)makeDirectoriesAndCloneNonLocContentsInNewLoc;
- (void)processUniversalNibs;
- (void)makeSourceLocaleLprojCorrespondingToBaseLproj:(id)arg1;
- (void)moveLprojContentsFrom:(id)arg1 to:(id)arg2;
- (void)preProcessNibs;
- (void)consolidateLprojDirectories:(id)arg1;

@end

