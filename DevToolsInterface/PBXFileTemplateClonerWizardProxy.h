//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBXWizardProxies.h"

@class NSString;

@interface PBXFileTemplateClonerWizardProxy : NSObject <PBXWizardProxies>
{
    NSString *_templateFilePath;
    NSString *_templateName;
}

+ (id)proxyWithTemplateFilePath:(id)arg1 templateName:(id)arg2;
- (id)icon;
- (id)_defaultIcon;
- (id)wizardDescription;
- (id)instantiateWizardWithParent:(id)arg1;
- (id)_wizardTemplateInfoDict;
- (id)categorizedWizardNames;
- (void)dealloc;
- (id)initWithTemplateFilePath:(id)arg1 templateName:(id)arg2;

@end

