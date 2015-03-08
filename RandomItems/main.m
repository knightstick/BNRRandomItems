//
//  main.m
//  RandomItems
//
//  Created by Test Mac on 6/03/2015.
//  Copyright (c) 2015 Chris Jewell. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BNRItem.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // Create a mutable array object, store its address in items variable
        NSMutableArray *items = [[NSMutableArray alloc] init];
        
        for (int i = 0; i < 10; i++) {
            BNRItem *item = [BNRItem randomItem];
            [items addObject:item];
        }
        
        BNRItem *item = [[BNRItem alloc] initWithItemName:@"Rusty Spoon" serialNumber:@"A1A2A3"];
        items[10] = item;
        
        for (BNRItem *item in items) {
            NSLog(@"%@", item);
        }
        
        // Destroy the mutable array object
        items = nil;
    }
    return 0;
}
