//
//  SFPassWordAssistantInspectorController.m
//  Password Assistant
//
//  Created by Martijn Thé on 3/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "SFPassWordAssistantInspectorController.h"
#import <objc/runtime.h>


@implementation SFPasswordAssistantInspectorController (Panel)
- (NSPanel*)panel {
    NSPanel* panel = nil;
    // Disallowed by ARC, so this file needs to be compiled with the -fno-objc-arc flag
    object_getInstanceVariable(self, "_passwordAssistantPanel", (void**)&panel);
    return panel;
}
@end
