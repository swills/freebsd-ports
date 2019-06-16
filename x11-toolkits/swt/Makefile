# Created by: Robert C. Noland III <rnoland@FreeBSD.org>
# $FreeBSD$

PORTNAME=	swt
DISTVERSION=	4.11
CATEGORIES=	x11-toolkits devel java
MASTER_SITES=	http://archive.eclipse.org/eclipse/downloads/drops4/R-${DISTVERSION}-201903070500/
DISTNAME=	swt-${DISTVERSION}-${DIST_EXT}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Standard Widget Toolkit for Java

LICENSE=	EPL

ONLY_FOR_ARCHS=	amd64 i386
BROKEN_i386=	missing distinfo

USES=		gl gmake gnome pkgconfig zip:infozip

SWT_VERSION=	411
OUTPUT_JAR=	swt.jar

USE_GL=		glu gl
USE_GNOME=	gtk30
USE_JAVA=	yes
USE_XORG=	xtst
JAVA_VERSION=	1.6+
JAVA_OS=	native
USE_ANT=	yes
MAKE_ARGS+=	-Doutput.jar=${OUTPUT_JAR}
MAKEFILE=	make_freebsd.mak
USE_LDCONFIG=	yes
PLIST_SUB=	BUILD=${SWT_VERSION}
PLIST_FILES=	${JAVAJARDIR}/${OUTPUT_JAR} \
		lib/libswt-atk-gtk-${SWT_VERSION}.so \
		lib/libswt-awt-gtk-${SWT_VERSION}.so \
		lib/libswt-gtk-${SWT_VERSION}.so \
		lib/libswt-glx-gtk-${SWT_VERSION}.so \
		lib/libswt-pi3-gtk-${SWT_VERSION}.so \
		lib/libswt-webkit-gtk-${SWT_VERSION}.so \
		lib/libswt-webkit2extension-gtk-${SWT_VERSION}.so

NO_WRKSUBDIR=	yes

LIB_DEPENDS+=	libwebkit2gtk-4.0.so:www/webkit2-gtk3 \
		libgdk_pixbuf-2.0.so:graphics/gdk-pixbuf2 \
		libsoup-2.4.so:devel/libsoup

OPTIONS_DEFINE=	CAIRO
OPTIONS_DEFAULT=	CAIRO

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MCAIRO}
LIB_DEPENDS+=	libcairo.so:graphics/cairo
PLIST_FILES+=	lib/libswt-cairo-gtk-${SWT_VERSION}.so
MAKE_CAIRO=	make_cairo
.endif

MAKE_ENV+=	MAKE_CAIRO=${MAKE_CAIRO} \
		JAVA_HOME=${JAVA_HOME} \
		SWT_VERSION=${SWT_VERSION}

.if (${ARCH} == "amd64")
DIST_EXT=	gtk-linux-x86_64
.else
DIST_EXT=	gtk-linux-x86
.endif

post-extract:
	@(cd ${WRKSRC} && ${UNZIP_CMD} -qo "*.zip")
	@${RM} ${WRKSRC}/*.o ${WRKSRC}/*.so ${WRKSRC}/*.jar
	@${CP} ${FILESDIR}/build.xml ${WRKSRC}/build.xml
	@${CP} ${WRKSRC}/make_linux.mak ${WRKSRC}/make_freebsd.mak

#pre-patch:
#	${SED} -e 's|freebsd|dragonfly|g' ${WRKSRC}/make_freebsd.mak \
#		> ${WRKSRC}/make_dragonfly.mak

do-install:
	@${MKDIR} ${STAGEDIR}${JAVAJARDIR}
	${INSTALL_LIB} ${WRKSRC}/libswt-*.so ${STAGEDIR}${PREFIX}/lib
	${INSTALL_DATA} ${WRKSRC}/${OUTPUT_JAR} ${STAGEDIR}${JAVAJARDIR}/

.include <bsd.port.mk>
