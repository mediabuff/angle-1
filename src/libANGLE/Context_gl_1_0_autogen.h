// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml.
//
// Copyright 2019 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// Context_gl_1_0_autogen.h: Creates a macro for interfaces in Context.

#ifndef ANGLE_CONTEXT_GL_1_0_AUTOGEN_H_
#define ANGLE_CONTEXT_GL_1_0_AUTOGEN_H_

#define ANGLE_GL_1_0_CONTEXT_API                                                                   \
    void accum(GLenum op, GLfloat value);                                                          \
    void begin(GLenum mode);                                                                       \
    void bitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove,        \
                GLfloat ymove, const GLubyte *bitmap);                                             \
    void callList(GLuint list);                                                                    \
    void callLists(GLsizei n, GLenum type, const void *lists);                                     \
    void clearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);                      \
    void clearDepth(GLdouble depth);                                                               \
    void clearIndex(GLfloat c);                                                                    \
    void clipPlane(GLenum plane, const GLdouble *equation);                                        \
    void color3b(GLbyte red, GLbyte green, GLbyte blue);                                           \
    void color3bv(const GLbyte *v);                                                                \
    void color3d(GLdouble red, GLdouble green, GLdouble blue);                                     \
    void color3dv(const GLdouble *v);                                                              \
    void color3f(GLfloat red, GLfloat green, GLfloat blue);                                        \
    void color3fv(const GLfloat *v);                                                               \
    void color3i(GLint red, GLint green, GLint blue);                                              \
    void color3iv(const GLint *v);                                                                 \
    void color3s(GLshort red, GLshort green, GLshort blue);                                        \
    void color3sv(const GLshort *v);                                                               \
    void color3ub(GLubyte red, GLubyte green, GLubyte blue);                                       \
    void color3ubv(const GLubyte *v);                                                              \
    void color3ui(GLuint red, GLuint green, GLuint blue);                                          \
    void color3uiv(const GLuint *v);                                                               \
    void color3us(GLushort red, GLushort green, GLushort blue);                                    \
    void color3usv(const GLushort *v);                                                             \
    void color4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);                             \
    void color4bv(const GLbyte *v);                                                                \
    void color4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);                     \
    void color4dv(const GLdouble *v);                                                              \
    void color4fv(const GLfloat *v);                                                               \
    void color4i(GLint red, GLint green, GLint blue, GLint alpha);                                 \
    void color4iv(const GLint *v);                                                                 \
    void color4s(GLshort red, GLshort green, GLshort blue, GLshort alpha);                         \
    void color4sv(const GLshort *v);                                                               \
    void color4ubv(const GLubyte *v);                                                              \
    void color4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha);                            \
    void color4uiv(const GLuint *v);                                                               \
    void color4us(GLushort red, GLushort green, GLushort blue, GLushort alpha);                    \
    void color4usv(const GLushort *v);                                                             \
    void colorMaterial(GLenum face, GLenum mode);                                                  \
    void copyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);                 \
    void deleteLists(GLuint list, GLsizei range);                                                  \
    void depthRange(GLdouble n, GLdouble f);                                                       \
    void drawBuffer(GLenum buf);                                                                   \
    void drawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type,                     \
                    const void *pixels);                                                           \
    void edgeFlag(GLboolean flag);                                                                 \
    void edgeFlagv(const GLboolean *flag);                                                         \
    void end();                                                                                    \
    void endList();                                                                                \
    void evalCoord1d(GLdouble u);                                                                  \
    void evalCoord1dv(const GLdouble *u);                                                          \
    void evalCoord1f(GLfloat u);                                                                   \
    void evalCoord1fv(const GLfloat *u);                                                           \
    void evalCoord2d(GLdouble u, GLdouble v);                                                      \
    void evalCoord2dv(const GLdouble *u);                                                          \
    void evalCoord2f(GLfloat u, GLfloat v);                                                        \
    void evalCoord2fv(const GLfloat *u);                                                           \
    void evalMesh1(GLenum mode, GLint i1, GLint i2);                                               \
    void evalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);                           \
    void evalPoint1(GLint i);                                                                      \
    void evalPoint2(GLint i, GLint j);                                                             \
    void feedbackBuffer(GLsizei size, GLenum type, GLfloat *buffer);                               \
    void fogi(GLenum pname, GLint param);                                                          \
    void fogiv(GLenum pname, const GLint *params);                                                 \
    void frustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear,     \
                 GLdouble zFar);                                                                   \
    GLuint genLists(GLsizei range);                                                                \
    void getClipPlane(GLenum plane, GLdouble *equation);                                           \
    void getDoublev(GLenum pname, GLdouble *data);                                                 \
    void getLightiv(GLenum light, GLenum pname, GLint *params);                                    \
    void getMapdv(GLenum target, GLenum query, GLdouble *v);                                       \
    void getMapfv(GLenum target, GLenum query, GLfloat *v);                                        \
    void getMapiv(GLenum target, GLenum query, GLint *v);                                          \
    void getMaterialiv(GLenum face, GLenum pname, GLint *params);                                  \
    void getPixelMapfv(GLenum map, GLfloat *values);                                               \
    void getPixelMapuiv(GLenum map, GLuint *values);                                               \
    void getPixelMapusv(GLenum map, GLushort *values);                                             \
    void getPolygonStipple(GLubyte *mask);                                                         \
    void getTexGendv(GLenum coord, GLenum pname, GLdouble *params);                                \
    void indexMask(GLuint mask);                                                                   \
    void indexd(GLdouble c);                                                                       \
    void indexdv(const GLdouble *c);                                                               \
    void indexf(GLfloat c);                                                                        \
    void indexfv(const GLfloat *c);                                                                \
    void indexi(GLint c);                                                                          \
    void indexiv(const GLint *c);                                                                  \
    void indexs(GLshort c);                                                                        \
    void indexsv(const GLshort *c);                                                                \
    void initNames();                                                                              \
    GLboolean isList(GLuint list);                                                                 \
    void lightModeli(GLenum pname, GLint param);                                                   \
    void lightModeliv(GLenum pname, const GLint *params);                                          \
    void lighti(GLenum light, GLenum pname, GLint param);                                          \
    void lightiv(GLenum light, GLenum pname, const GLint *params);                                 \
    void lineStipple(GLint factor, GLushort pattern);                                              \
    void listBase(GLuint base);                                                                    \
    void loadMatrixd(const GLdouble *m);                                                           \
    void loadName(GLuint name);                                                                    \
    void map1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order,                 \
               const GLdouble *points);                                                            \
    void map1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order,                   \
               const GLfloat *points);                                                             \
    void map2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1,  \
               GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points);                  \
    void map2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1,     \
               GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points);                    \
    void mapGrid1d(GLint un, GLdouble u1, GLdouble u2);                                            \
    void mapGrid1f(GLint un, GLfloat u1, GLfloat u2);                                              \
    void mapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);        \
    void mapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);            \
    void materiali(GLenum face, GLenum pname, GLint param);                                        \
    void materialiv(GLenum face, GLenum pname, const GLint *params);                               \
    void multMatrixd(const GLdouble *m);                                                           \
    void newList(GLuint list, GLenum mode);                                                        \
    void normal3b(GLbyte nx, GLbyte ny, GLbyte nz);                                                \
    void normal3bv(const GLbyte *v);                                                               \
    void normal3d(GLdouble nx, GLdouble ny, GLdouble nz);                                          \
    void normal3dv(const GLdouble *v);                                                             \
    void normal3fv(const GLfloat *v);                                                              \
    void normal3i(GLint nx, GLint ny, GLint nz);                                                   \
    void normal3iv(const GLint *v);                                                                \
    void normal3s(GLshort nx, GLshort ny, GLshort nz);                                             \
    void normal3sv(const GLshort *v);                                                              \
    void ortho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear,       \
               GLdouble zFar);                                                                     \
    void passThrough(GLfloat token);                                                               \
    void pixelMapfv(GLenum map, GLsizei mapsize, const GLfloat *values);                           \
    void pixelMapuiv(GLenum map, GLsizei mapsize, const GLuint *values);                           \
    void pixelMapusv(GLenum map, GLsizei mapsize, const GLushort *values);                         \
    void pixelStoref(GLenum pname, GLfloat param);                                                 \
    void pixelTransferf(GLenum pname, GLfloat param);                                              \
    void pixelTransferi(GLenum pname, GLint param);                                                \
    void pixelZoom(GLfloat xfactor, GLfloat yfactor);                                              \
    void polygonMode(GLenum face, GLenum mode);                                                    \
    void polygonStipple(const GLubyte *mask);                                                      \
    void popAttrib();                                                                              \
    void popName();                                                                                \
    void pushAttrib(GLbitfield mask);                                                              \
    void pushName(GLuint name);                                                                    \
    void rasterPos2d(GLdouble x, GLdouble y);                                                      \
    void rasterPos2dv(const GLdouble *v);                                                          \
    void rasterPos2f(GLfloat x, GLfloat y);                                                        \
    void rasterPos2fv(const GLfloat *v);                                                           \
    void rasterPos2i(GLint x, GLint y);                                                            \
    void rasterPos2iv(const GLint *v);                                                             \
    void rasterPos2s(GLshort x, GLshort y);                                                        \
    void rasterPos2sv(const GLshort *v);                                                           \
    void rasterPos3d(GLdouble x, GLdouble y, GLdouble z);                                          \
    void rasterPos3dv(const GLdouble *v);                                                          \
    void rasterPos3f(GLfloat x, GLfloat y, GLfloat z);                                             \
    void rasterPos3fv(const GLfloat *v);                                                           \
    void rasterPos3i(GLint x, GLint y, GLint z);                                                   \
    void rasterPos3iv(const GLint *v);                                                             \
    void rasterPos3s(GLshort x, GLshort y, GLshort z);                                             \
    void rasterPos3sv(const GLshort *v);                                                           \
    void rasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w);                              \
    void rasterPos4dv(const GLdouble *v);                                                          \
    void rasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w);                                  \
    void rasterPos4fv(const GLfloat *v);                                                           \
    void rasterPos4i(GLint x, GLint y, GLint z, GLint w);                                          \
    void rasterPos4iv(const GLint *v);                                                             \
    void rasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w);                                  \
    void rasterPos4sv(const GLshort *v);                                                           \
    void rectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);                                \
    void rectdv(const GLdouble *v1, const GLdouble *v2);                                           \
    void rectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);                                    \
    void rectfv(const GLfloat *v1, const GLfloat *v2);                                             \
    void recti(GLint x1, GLint y1, GLint x2, GLint y2);                                            \
    void rectiv(const GLint *v1, const GLint *v2);                                                 \
    void rects(GLshort x1, GLshort y1, GLshort x2, GLshort y2);                                    \
    void rectsv(const GLshort *v1, const GLshort *v2);                                             \
    GLint renderMode(GLenum mode);                                                                 \
    void rotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z);                              \
    void scaled(GLdouble x, GLdouble y, GLdouble z);                                               \
    void selectBuffer(GLsizei size, GLuint *buffer);                                               \
    void texCoord1d(GLdouble s);                                                                   \
    void texCoord1dv(const GLdouble *v);                                                           \
    void texCoord1f(GLfloat s);                                                                    \
    void texCoord1fv(const GLfloat *v);                                                            \
    void texCoord1i(GLint s);                                                                      \
    void texCoord1iv(const GLint *v);                                                              \
    void texCoord1s(GLshort s);                                                                    \
    void texCoord1sv(const GLshort *v);                                                            \
    void texCoord2d(GLdouble s, GLdouble t);                                                       \
    void texCoord2dv(const GLdouble *v);                                                           \
    void texCoord2f(GLfloat s, GLfloat t);                                                         \
    void texCoord2fv(const GLfloat *v);                                                            \
    void texCoord2i(GLint s, GLint t);                                                             \
    void texCoord2iv(const GLint *v);                                                              \
    void texCoord2s(GLshort s, GLshort t);                                                         \
    void texCoord2sv(const GLshort *v);                                                            \
    void texCoord3d(GLdouble s, GLdouble t, GLdouble r);                                           \
    void texCoord3dv(const GLdouble *v);                                                           \
    void texCoord3f(GLfloat s, GLfloat t, GLfloat r);                                              \
    void texCoord3fv(const GLfloat *v);                                                            \
    void texCoord3i(GLint s, GLint t, GLint r);                                                    \
    void texCoord3iv(const GLint *v);                                                              \
    void texCoord3s(GLshort s, GLshort t, GLshort r);                                              \
    void texCoord3sv(const GLshort *v);                                                            \
    void texCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q);                               \
    void texCoord4dv(const GLdouble *v);                                                           \
    void texCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q);                                   \
    void texCoord4fv(const GLfloat *v);                                                            \
    void texCoord4i(GLint s, GLint t, GLint r, GLint q);                                           \
    void texCoord4iv(const GLint *v);                                                              \
    void texCoord4s(GLshort s, GLshort t, GLshort r, GLshort q);                                   \
    void texCoord4sv(const GLshort *v);                                                            \
    void texGend(GLenum coord, GLenum pname, GLdouble param);                                      \
    void texGendv(GLenum coord, GLenum pname, const GLdouble *params);                             \
    void texImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, \
                    GLenum format, GLenum type, const void *pixels);                               \
    void translated(GLdouble x, GLdouble y, GLdouble z);                                           \
    void vertex2d(GLdouble x, GLdouble y);                                                         \
    void vertex2dv(const GLdouble *v);                                                             \
    void vertex2f(GLfloat x, GLfloat y);                                                           \
    void vertex2fv(const GLfloat *v);                                                              \
    void vertex2i(GLint x, GLint y);                                                               \
    void vertex2iv(const GLint *v);                                                                \
    void vertex2s(GLshort x, GLshort y);                                                           \
    void vertex2sv(const GLshort *v);                                                              \
    void vertex3d(GLdouble x, GLdouble y, GLdouble z);                                             \
    void vertex3dv(const GLdouble *v);                                                             \
    void vertex3f(GLfloat x, GLfloat y, GLfloat z);                                                \
    void vertex3fv(const GLfloat *v);                                                              \
    void vertex3i(GLint x, GLint y, GLint z);                                                      \
    void vertex3iv(const GLint *v);                                                                \
    void vertex3s(GLshort x, GLshort y, GLshort z);                                                \
    void vertex3sv(const GLshort *v);                                                              \
    void vertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w);                                 \
    void vertex4dv(const GLdouble *v);                                                             \
    void vertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w);                                     \
    void vertex4fv(const GLfloat *v);                                                              \
    void vertex4i(GLint x, GLint y, GLint z, GLint w);                                             \
    void vertex4iv(const GLint *v);                                                                \
    void vertex4s(GLshort x, GLshort y, GLshort z, GLshort w);                                     \
    void vertex4sv(const GLshort *v);

#endif  // ANGLE_CONTEXT_API_1_0_AUTOGEN_H_
