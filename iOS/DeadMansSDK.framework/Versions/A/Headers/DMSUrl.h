//
//  DMSUrl.h
//  DeadMansSDK
//
//  Created by Tim Bugai on 9/10/13.
//  Copyright (c) 2013 Collective Idea. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DMSUrl : NSObject

+ (void)useStaging;
+ (void)useProduction;

+ (NSString *)withEndpoint:(NSString *)endpoint, ...;
@end
