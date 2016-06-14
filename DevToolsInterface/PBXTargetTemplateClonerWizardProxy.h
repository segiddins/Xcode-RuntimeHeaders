//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/PBXWizardProxies-Protocol.h>

@class NSDictionary, NSString;

@interface PBXTargetTemplateClonerWizardProxy : NSObject <PBXWizardProxies>
{
    NSString *_templatePListPath;
    NSString *_templateName;
    NSDictionary *_templateInfoDict;
}

+ (id)proxyWithTemplatePListPath:(id)arg1 templateName:(id)arg2;
- (id)wizardDescription;
- (id)icon;
- (id)valueForPlistKey:(id)arg1;
- (id)templateInfoDict;
- (id)_defaultIcon;
- (id)instantiateWizardWithParent:(id)arg1;
- (id)categorizedWizardNames;
- (void)dealloc;
- (id)initWithTemplatePListPath:(id)arg1 templateName:(id)arg2;

@end

