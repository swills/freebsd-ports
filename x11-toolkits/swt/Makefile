# Created by: Robert C. Noland III <rnoland@FreeBSD.org>
# $FreeBSD$

PORTNAME=	swt
DISTVERSION=	4.14
CATEGORIES=	x11-toolkits devel java
MASTER_SITES=	http://archive.eclipse.org/eclipse/downloads/drops4/R-${DISTVERSION}-201912100610/
DISTNAME=	swt-${DISTVERSION}-${DIST_EXT}
DIST_EXT=	gtk-linux-x86_64

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Standard Widget Toolkit for Java

LICENSE=	EPL

ONLY_FOR_ARCHS=	amd64

LIB_DEPENDS=	libwebkit2gtk-4.0.so:www/webkit2-gtk3
USES=		gmake pkgconfig gnome zip:infozip

SWT_VERSION=	4930r7
OUTPUT_JAR=	swt.jar

USE_GNOME=	gtk30
USE_JAVA=	yes
JAVA_VERSION=	1.8+
JAVA_OS=	native
USE_ANT=	yes
MAKE_ARGS+=	-Doutput.jar=${OUTPUT_JAR}
MAKEFILE=	make_linux.mak
USE_LDCONFIG=	yes
PLIST_SUB=	BUILD=${SWT_VERSION}
PLIST_FILES=	${JAVAJARDIR}/${OUTPUT_JAR}

NO_WRKSUBDIR=	yes

post-extract:
	@(cd ${WRKSRC} && ${UNZIP_CMD} -qo "*.zip")
	@${RM} ${WRKSRC}/*.o ${WRKSRC}/*.so ${WRKSRC}/*.jar
	@${CP} ${FILESDIR}/build.xml ${WRKSRC}/build.xml

do-install:
	@${MKDIR} ${STAGEDIR}${JAVAJARDIR}
	${INSTALL_DATA} ${WRKSRC}/${OUTPUT_JAR} ${STAGEDIR}${JAVAJARDIR}/

.include <bsd.port.mk>
