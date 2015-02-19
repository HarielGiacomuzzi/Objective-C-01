//
//  notEsporte.h
//  ObjC-01
//
//  Created by Matheus Baptista Bondan on 19/02/15.
//  Copyright (c) 2015 Hariel Giacomuzzi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface newsSport : news
{
    NSString sport;
    NSString team;
}

- (NSString *)getSport;

- (NSString *)getTeam;

#endif
