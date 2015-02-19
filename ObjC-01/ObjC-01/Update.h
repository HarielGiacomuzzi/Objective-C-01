//
//  Update.h
//  ObjC-01
//
//  Created by Hariel Giacomuzzi on 2/19/15.
//  Copyright (c) 2015 Hariel Giacomuzzi. All rights reserved.
//

#ifndef ObjC_01_Update_h
#define ObjC_01_Update_h

#import <Foundation/Foundation.h>

@interface Update : NSObject
{
    NSMutableArray *container;
}

+(NSMutableArray)requestUpdate;
+(void)parseInfo;

@end


#endif
