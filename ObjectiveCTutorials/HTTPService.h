//
//  HTTPService.h
//  ObjectiveCTutorials
//
//  Created by Rickey Hrabowskie on 9/11/16.
//  Copyright © 2016 Rickey Hrabowskie. All rights reserved.
//
// NOTES: A singleton is an object that is instantiated once and lives in memory for the lifetime of the application.

#import <Foundation/Foundation.h>

typedef void (^onComplete)(NSArray * __nullable dataArray, NSString * __nullable errMessage);

@interface HTTPService : NSObject

+ (id) instance; // Static function
- (void) getTutorials:(nullable onComplete)completionHandler; 

@end
