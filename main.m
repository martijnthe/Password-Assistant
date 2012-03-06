//
//  main.m
//  Password Assistant
//
//  Created by Adam Knight on 5/23/06.
//  Copyright Barton Springs Software 2006. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "Controller.h"

int main(int argc, char *argv[]) {
    @autoreleasepool {
        NSApplication * application = [NSApplication sharedApplication];
        Controller * appDelegate = [[Controller alloc] init];
        [application setDelegate:appDelegate];
        [application run];
    }
    return EXIT_SUCCESS;
}