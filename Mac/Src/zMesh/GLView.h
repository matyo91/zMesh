/**
 *  GLView.h
 *  zMesh
 *
 *  Created by Mathieu LEDRU on 14/11/10.
 *
 *  GPL License:
 *  Copyright (c) 2010, Mathieu LEDRU
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *  
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#import "ZMeshCGLView.h"

@interface GLView : ZMeshCGLView {
	NSOpenGLContext* context;
	NSOpenGLPixelFormat* pixelFormat;
	
	NSPoint lastMovementPosition;
}

@property (nonatomic, retain) NSOpenGLContext* context;
@property (nonatomic, retain) NSOpenGLPixelFormat* pixelFormat;

- (id)initWithFrame:(NSRect)frameRect shareContext:(NSOpenGLContext*)aShareContext;

@end
